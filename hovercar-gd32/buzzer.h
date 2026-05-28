#ifndef __BUZZER_H
#define __BUZZER_H

#include <stdint.h>
#include "firmware_api.h"

typedef enum {
    BUZZER_SOUND_NONE = 0,
    BUZZER_SOUND_INIT,
    BUZZER_SOUND_READY,
    BUZZER_SOUND_ENABLE,
    BUZZER_SOUND_DISABLE,
    BUZZER_SOUND_WARNING,
    BUZZER_SOUND_ERROR,
    BUZZER_SOUND_CONFIRM,
    BUZZER_SOUND_CANCEL,
    BUZZER_SOUND_STARTUP,
    BUZZER_SOUND_SHUTDOWN,
    BUZZER_SOUND_INFO,
    BUZZER_SOUND_ALERT,
    BUZZER_SOUND_BATTERY_LOW,
    BUZZER_SOUND_PING
} BuzzerSound;

void Buzzer_Init(void);
void Buzzer_Play(BuzzerSound sound);
void beep_pattern(uint8_t pattern);
void Buzzer_Update(void);

#endif // __BUZZER_H
