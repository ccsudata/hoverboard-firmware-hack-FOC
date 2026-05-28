#include "buzzer.h"

typedef struct {
    uint16_t tone_ms;
    uint16_t pause_ms;
    uint8_t repeat;
} BuzzerStep;

typedef enum {
    BUZZER_PHASE_IDLE = 0,
    BUZZER_PHASE_TONE,
    BUZZER_PHASE_PAUSE
} BuzzerPhase;

typedef struct {
    const BuzzerStep *sequence;
    uint8_t step_index;
    uint8_t repeat_left;
    BuzzerPhase phase;
    uint32_t deadline_ms;
    FlagStatus running;
} BuzzerState;

static BuzzerState buzzer_state = {
    .sequence = NULL,
    .step_index = 0,
    .repeat_left = 0,
    .phase = BUZZER_PHASE_IDLE,
    .deadline_ms = 0,
    .running = RESET
};

static void buzzer_write(FlagStatus state) {
    if (state == SET) {
        gpio_bit_set(BUZZER_PORT, BUZZER_PIN);
    } else {
        gpio_bit_reset(BUZZER_PORT, BUZZER_PIN);
    }
}

static void buzzer_stop(void) {
    buzzer_write(RESET);
    buzzer_state.sequence = NULL;
    buzzer_state.step_index = 0;
    buzzer_state.repeat_left = 0;
    buzzer_state.phase = BUZZER_PHASE_IDLE;
    buzzer_state.deadline_ms = 0;
    buzzer_state.running = RESET;
}

static void buzzer_schedule_step(uint32_t now);

static void buzzer_start_sequence(const BuzzerStep *sequence) {
    buzzer_state.sequence = sequence;
    buzzer_state.step_index = 0;
    buzzer_state.phase = BUZZER_PHASE_IDLE;
    buzzer_state.running = SET;
    buzzer_schedule_step(GetSystemTicks());
}

static void buzzer_schedule_step(uint32_t now) {
    const BuzzerStep *step = &buzzer_state.sequence[buzzer_state.step_index];
    if (step->tone_ms == 0 && step->pause_ms == 0 && step->repeat == 0) {
        buzzer_stop();
        return;
    }

    buzzer_state.repeat_left = step->repeat ? step->repeat : 1;
    buzzer_state.phase = BUZZER_PHASE_TONE;
    buzzer_write(SET);
    buzzer_state.deadline_ms = now + step->tone_ms;
}

static void buzzer_advance_to_next_step(uint32_t now) {
    buzzer_state.step_index++;
    buzzer_schedule_step(now);
}

static const BuzzerStep buzzer_startup_sequence[] = {
    {  40,  20, 1 },
    {  60,  20, 1 },
    {  80,  20, 1 },
    { 100,  20, 1 },
    { 140, 120, 1 },
    {   0,   0, 0 }
};

static const BuzzerStep buzzer_shutdown_sequence[] = {
    { 140,  30, 1 },
    { 100,  30, 1 },
    {  80,  30, 1 },
    {  60,  30, 1 },
    {  40, 200, 1 },
    {   0,   0, 0 }
};

static const BuzzerStep buzzer_confirm_sequence[] = {
    {  80,  40, 1 },
    { 160,  40, 1 },
    {  80,   0, 1 },
    {   0,   0, 0 }
};

static const BuzzerStep buzzer_cancel_sequence[] = {
    { 180,  40, 1 },
    {  80,   0, 1 },
    {   0,   0, 0 }
};

static const BuzzerStep buzzer_info_sequence[] = {
    {  50,  30, 3 },
    {   0,   0, 0 }
};

static const BuzzerStep buzzer_alert_sequence[] = {
    {  40,  20, 4 },
    {   0,   0, 0 }
};

static const BuzzerStep buzzer_battery_low_sequence[] = {
    {  50,  40, 3 },
    { 120,   0, 1 },
    {   0,   0, 0 }
};

static const BuzzerStep buzzer_init_sequence[] = {
    {100, 0, 1},
    {0, 0, 0}
};

static const BuzzerStep buzzer_ready_sequence[] = {
    {80, 80, 2},
    {0, 0, 0}
};

static const BuzzerStep buzzer_enable_sequence[] = {
    {60, 60, 2},
    {0, 0, 0}
};

static const BuzzerStep buzzer_disable_sequence[] = {
    {100, 0, 1},
    {0, 0, 0}
};

static const BuzzerStep buzzer_warning_sequence[] = {
    {60, 60, 3},
    {0, 0, 0}
};

static const BuzzerStep buzzer_error_sequence[] = {
    {500, 0, 1},
    {0, 0, 0}
};

static const BuzzerStep buzzer_ping_sequence[] = {
    {30, 0, 1},
    {0, 0, 0}
};

void Buzzer_Init(void) {
    buzzer_write(RESET);
    buzzer_stop();
}

void beep_pattern(uint8_t pattern) {
    switch (pattern) {
        case 1:
            Buzzer_Play(BUZZER_SOUND_INIT);
            break;
        case 2:
            Buzzer_Play(BUZZER_SOUND_READY);
            break;
        case 3:
            Buzzer_Play(BUZZER_SOUND_WARNING);
            break;
        case 4:
            Buzzer_Play(BUZZER_SOUND_ERROR);
            break;
        case 5:
            Buzzer_Play(BUZZER_SOUND_CONFIRM);
            break;
        case 6:
            Buzzer_Play(BUZZER_SOUND_CANCEL);
            break;
        case 7:
            Buzzer_Play(BUZZER_SOUND_STARTUP);
            break;
        case 8:
            Buzzer_Play(BUZZER_SOUND_SHUTDOWN);
            break;
        case 9:
            Buzzer_Play(BUZZER_SOUND_INFO);
            break;
        case 10:
            Buzzer_Play(BUZZER_SOUND_ALERT);
            break;
        default:
            Buzzer_Play(BUZZER_SOUND_NONE);
            break;
    }
}

void Buzzer_Update(void) {
    if (buzzer_state.running != SET || buzzer_state.sequence == NULL) {
        return;
    }

    uint32_t now = GetSystemTicks();
    if ((int32_t)(now - buzzer_state.deadline_ms) < 0) {
        return;
    }

    const BuzzerStep *step = &buzzer_state.sequence[buzzer_state.step_index];

    if (buzzer_state.phase == BUZZER_PHASE_TONE) {
        buzzer_write(RESET);
        if (step->pause_ms == 0) {
            if (buzzer_state.repeat_left > 1) {
                buzzer_state.repeat_left--;
                buzzer_state.phase = BUZZER_PHASE_TONE;
                buzzer_write(SET);
                buzzer_state.deadline_ms = now + step->tone_ms;
            } else {
                buzzer_advance_to_next_step(now);
            }
        } else {
            buzzer_state.phase = BUZZER_PHASE_PAUSE;
            buzzer_state.deadline_ms = now + step->pause_ms;
        }
    } else if (buzzer_state.phase == BUZZER_PHASE_PAUSE) {
        if (buzzer_state.repeat_left > 1) {
            buzzer_state.repeat_left--;
            buzzer_state.phase = BUZZER_PHASE_TONE;
            buzzer_write(SET);
            buzzer_state.deadline_ms = now + step->tone_ms;
        } else {
            buzzer_advance_to_next_step(now);
        }
    }
}

void Buzzer_Play(BuzzerSound sound) {
    switch (sound) {
        case BUZZER_SOUND_NONE:
            buzzer_stop();
            break;

        case BUZZER_SOUND_INIT:
            buzzer_start_sequence(buzzer_init_sequence);
            break;

        case BUZZER_SOUND_READY:
            buzzer_start_sequence(buzzer_ready_sequence);
            break;

        case BUZZER_SOUND_ENABLE:
            buzzer_start_sequence(buzzer_enable_sequence);
            break;

        case BUZZER_SOUND_DISABLE:
            buzzer_start_sequence(buzzer_disable_sequence);
            break;

        case BUZZER_SOUND_WARNING:
            buzzer_start_sequence(buzzer_warning_sequence);
            break;

        case BUZZER_SOUND_ERROR:
            buzzer_start_sequence(buzzer_error_sequence);
            break;

        case BUZZER_SOUND_CONFIRM:
            buzzer_start_sequence(buzzer_confirm_sequence);
            break;

        case BUZZER_SOUND_CANCEL:
            buzzer_start_sequence(buzzer_cancel_sequence);
            break;

        case BUZZER_SOUND_STARTUP:
            buzzer_start_sequence(buzzer_startup_sequence);
            break;

        case BUZZER_SOUND_SHUTDOWN:
            buzzer_start_sequence(buzzer_shutdown_sequence);
            break;

        case BUZZER_SOUND_INFO:
            buzzer_start_sequence(buzzer_info_sequence);
            break;

        case BUZZER_SOUND_ALERT:
            buzzer_start_sequence(buzzer_alert_sequence);
            break;

        case BUZZER_SOUND_BATTERY_LOW:
            buzzer_start_sequence(buzzer_battery_low_sequence);
            break;

        case BUZZER_SOUND_PING:
            buzzer_start_sequence(buzzer_ping_sequence);
            break;

        default:
            buzzer_stop();
            break;
    }
}
