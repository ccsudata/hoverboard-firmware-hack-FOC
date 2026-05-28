/*
 * Project-local CMSIS system file for hovercar-gd32.
 *
 * This file exists so that the project can override the default
 * library SystemInit path without modifying the official CMSIS source.
 */

#include "defines.h"
#include "gd32f10x.h"

uint32_t SystemCoreClock = SYSTEM_CORE_CLOCK;

void My_SystemInit(void) {
    /* Boot using IRC8M -> PLL 72MHz. */
    rcu_osci_on(RCU_IRC8M);
    while (rcu_osci_stab_wait(RCU_IRC8M) == ERROR);

    rcu_ahb_clock_config(RCU_AHB_CKSYS_DIV1);
    rcu_apb1_clock_config(RCU_APB1_CKAHB_DIV2);
    rcu_apb2_clock_config(RCU_APB2_CKAHB_DIV1);

    rcu_pll_config(RCU_PLLSRC_IRC8M_DIV2, RCU_PLL_MUL18);
    rcu_osci_on(RCU_PLL_CK);
    while (rcu_osci_stab_wait(RCU_PLL_CK) == ERROR);

    fmc_wscnt_set(2);

    rcu_system_clock_source_config(RCU_CKSYSSRC_PLL);
    while (rcu_system_clock_source_get() != RCU_SCSS_PLL);

    SystemCoreClock = SYSTEM_CORE_CLOCK;
}

void SystemInit(void) {
    My_SystemInit();
}

void SystemCoreClockUpdate(void) {
    SystemCoreClock = SYSTEM_CORE_CLOCK;
}
