#ifndef GUARD_EV_IV_DISPLAY_SCREEN_H
#define GUARD_EV_IV_DISPLAY_SCREEN_H

#include "global.h"

#include "main.h"
#include "script.h"
#include "sound.h"

// [ESP] ------------------------------------------------------------ 
// Cambiar FLAG_SYS_POKEMON_GET por la flag que quieras usar.
// ejemplo: FLAG_EV_IV ?= 0x200
// [ENG] ------------------------------------------------------------
// Change FLAG_SYS_POKEMON_GET to the flag you want to use.
// example: FLAG_EV_IV ?= 0x200
#define FLAG_EV_IV FLAG_SYS_POKEMON_GET

extern const u8 gText_PokeSum_EvIv[];

void CB2_ShowEvIv_PlayerParty(void);
void Show_EvIv(struct Pokemon * party, u8 cursorPos, u8 lastIdx, MainCallback savedCallback, bool8 isBoxMon, bool8 return_summary_screen);
void CB2_ShowEvIv_SummaryScreen(void);
void CloseSummaryScreen_AndCallEvIv(u8 taskId);
void EvIv_SummaryScreen_Callback(u8 cursorPos);

#endif // GUARD_EV_IV_DISPLAY_SCREEN_H