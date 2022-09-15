#include <cmath>
#include <SADXModLoader.h>

#include "stdafx.h"
#include "Funcs.h"

void LoadTextures(const char* path, const HelperFunctions& helperFunctions)
{
	char pathbuf[MAX_PATH];

	HMODULE DConv = GetModuleHandle(L"DCMods_Main");			// Init Dreamcast Conversion dll
	HMODULE HDGui = GetModuleHandle(L"HD_GUI");					// Init HD GUI

	ReplacePNG_Subtitle("subtitle_eu");

	ReplacePNG_MissionE("MISSION_S_BOX_E");
	ReplacePNG_MissionE("MISSION_S_BOX25MIN_E");
	ReplacePNG_MissionE("MISSION_S_BOX2MIN_E");
	ReplacePNG_MissionE("MISSION_S_BOX3MIN_E");
	ReplacePNG_MissionE("MISSION_S_BOX45MIN_E");
	ReplacePNG_MissionE("MISSION_S_BOX4MIN_E");
	ReplacePNG_MissionE("MISSION_S_BOX5MIN_E");
	ReplacePNG_MissionE("MISSION_S_RINGBOX_E");
	ReplacePNG_MissionE("MISSION_T_BOX_E");

#pragma region Common PVRs 
	ReplacePNG_Common("ABC_TXT");				// File select font
	ReplacePNG_Common("HYOJI_BALLS_E");			// Casinopolis ball counter
	ReplacePNG_Common("B32ASCII");				// Boss name font
	ReplacePNG_Common("ST_064S_SCORE");			// Score in HUD
	ReplacePNG_Common("ST_128S_HPGEJI");		// Tornado's health bar story
#pragma endregion

#pragma region Stages name PVRs
	ReplacePNG_StageE("A_STAGE01_E");			// Amy		| Twinkle Park
	ReplacePNG_StageE("A_STAGE02_E");			// Amy		| Hot Shelter
	ReplacePNG_StageE("A_STAGE03_E");			// Amy		| Final Egg
	ReplacePNG_StageE("B_STAGE01_E");			// Big		| Twinkle Park
	ReplacePNG_StageE("B_STAGE02_E");			// Big		| Icecap
	ReplacePNG_StageE("B_STAGE03_E");			// Big		| Emerald Coast
	ReplacePNG_StageE("B_STAGE04_E");			// Big		| Hot Shelter
	ReplacePNG_StageE("E_STAGE01_E");			// E102		| Final Egg
	ReplacePNG_StageE("E_STAGE02_E");			// E102		| Emerald Coast
	ReplacePNG_StageE("E_STAGE03_E");			// E102		| Windy Valley
	ReplacePNG_StageE("E_STAGE04_E");			// E102		| Red Mountain
	ReplacePNG_StageE("E_STAGE05_E");			// E102		| Hot Shelter
	ReplacePNG_StageE("K_STAGE01_E");			// Knuckles	| Speed Highway
	ReplacePNG_StageE("K_STAGE02_E");			// Knuckles	| Casinopolis
	ReplacePNG_StageE("K_STAGE03_E");			// Knuckles	| Red Mountain
	ReplacePNG_StageE("K_STAGE04_E");			// Knuckles	| Lost World
	ReplacePNG_StageE("K_STAGE05_E");			// Knuckles	| Sky Deck
	ReplacePNG_StageE("M_STAGE01_E");			// Tails	| Windy Valley
	ReplacePNG_StageE("M_STAGE02_E");			// Tails	| Casinopolis
	ReplacePNG_StageE("M_STAGE03_E");			// Tails	| Icecap
	ReplacePNG_StageE("M_STAGE04_E");			// Tails	| Sky Deck
	ReplacePNG_StageE("M_STAGE05_E");			// Tails	| Speed Highway
	ReplacePNG_StageE("ST_STAGE01_E");			// Minigame	| Sky Chase 1
	ReplacePNG_StageE("ST_STAGE02_E");			// Minigame	| Sky Chase 2
	ReplacePNG_StageE("ST_STAGE03_E");			// Minigame	| Twinkle Circuit
	ReplacePNG_StageE("ST_STAGE04_E");			// Minigame	| Sans Hill
	ReplacePNG_StageE("ST_STAGE05_E");			// Minigame	| Hedgehog Hammer
	ReplacePNG_StageE("S_STAGE01_E");			// Sonic	| Emerald Coast
	ReplacePNG_StageE("S_STAGE02_E");			// Sonic	| Windy Valley
	ReplacePNG_StageE("S_STAGE03_E");			// Sonic	| Casinopolis
	ReplacePNG_StageE("S_STAGE04_E");			// Sonic	| Icecap
	ReplacePNG_StageE("S_STAGE05_E");			// Sonic	| Twinkle Park
	ReplacePNG_StageE("S_STAGE06_E");			// Sonic	| Speed Highway
	ReplacePNG_StageE("S_STAGE07_E");			// Sonic	| Red Mountain
	ReplacePNG_StageE("S_STAGE08_E");			// Sonic	| Sky Deck
	ReplacePNG_StageE("S_STAGE09_E");			// Sonic	| Lost World
	ReplacePNG_StageE("S_STAGE10_E");			// Sonic	| Final Egg
	ReplacePNG_StageE("T_EGGCARRIER_E");		// Field	| Egg Carrier
	ReplacePNG_StageE("T_MISTICRUIN_E");		// Field	| Mystic Ruins
	ReplacePNG_StageE("T_STATIONSQUARE_E");		// Field	| Station Square
#pragma endregion

#pragma region Stage missions PVRs
	ReplacePNG_MissionE("MISSION_A_BALRING_E");
	ReplacePNG_MissionE("MISSION_A_BALZERO_E");
	ReplacePNG_MissionE("MISSION_A_FIN_E");
	ReplacePNG_MissionE("MISSION_A_HOT_E");
	ReplacePNG_MissionE("MISSION_A_TWIN_E");
	ReplacePNG_MissionE("MISSION_BIG_1K_E");
	ReplacePNG_MissionE("MISSION_BIG_2K_E");
	ReplacePNG_MissionE("MISSION_BIG_FROG_E");
	ReplacePNG_MissionE("MISSION_G_103RING_E");
	ReplacePNG_MissionE("MISSION_G_103_E");
	ReplacePNG_MissionE("MISSION_G_104RING_E");
	ReplacePNG_MissionE("MISSION_G_104_E");
	ReplacePNG_MissionE("MISSION_G_105RING_E");
	ReplacePNG_MissionE("MISSION_G_105_E");
	ReplacePNG_MissionE("MISSION_G_EME_E");
	ReplacePNG_MissionE("MISSION_G_FIN_E");
	ReplacePNG_MissionE("MISSION_G_FROGRING_E");
	ReplacePNG_MissionE("MISSION_G_FROG_E");
	ReplacePNG_MissionE("MISSION_G_SONICDRING_E");
	ReplacePNG_MissionE("MISSION_G_HOT_E");
	ReplacePNG_MissionE("MISSION_G_RED_E");
	ReplacePNG_MissionE("MISSION_G_SONICD_E");
	ReplacePNG_MissionE("MISSION_G_WIN_E");
	ReplacePNG_MissionE("MISSION_K_1MIN_E");
	ReplacePNG_MissionE("MISSION_K_2MIN_E");
	ReplacePNG_MissionE("MISSION_K_3EME_E");
	ReplacePNG_MissionE("MISSION_K_NOHINT_E");
	ReplacePNG_MissionE("MISSION_S_EGGC_E");
	ReplacePNG_MissionE("MISSION_S_EMECASINO_E");
	ReplacePNG_MissionE("MISSION_S_EMESNOW_E");
	ReplacePNG_MissionE("MISSION_S_EMEWIND_E");
	ReplacePNG_MissionE("MISSION_S_FEGG_E");
	ReplacePNG_MissionE("MISSION_S_ISEKI_E");
	ReplacePNG_MissionE("MISSION_S_TAILS_E");
	ReplacePNG_MissionE("MISSION_T_EMECASINO_E");
	ReplacePNG_MissionE("MISSION_T_EMESNOW_E");
	ReplacePNG_MissionE("MISSION_T_EMEWIND_E");
	ReplacePNG_MissionE("MISSION_T_FASTEGG_E");
	ReplacePNG_MissionE("MISSION_T_FASTSONIC_E");
	ReplacePNG_MissionE("MISSION_T_MISS_E");
	ReplacePNG_MissionE("MISSION_T_RINGEGG_E");
	ReplacePNG_MissionE("MISSION_T_RINGSONIC_E");
#pragma endregion

#pragma region pvmx
	ReplacePVM("AL_ENT_CHAR_E_TEX");
	ReplacePVM("AL_ENT_TITLE_E_TEX");
	ReplacePVM("AL_STG_KINDER_AD_TEX");
	ReplacePVM("AL_TEX_COMMON");
	ReplacePVM("AL_TEX_ENT_COMMON_EN");
	ReplacePVM("AL_TEX_ODEKAKE_MENU_EN");
	ReplacePVM("AVA_CHSEL_E");
	ReplacePVM("AVA_DLG_E");
	ReplacePVM("AVA_EMBLEMVIEW_E");
	ReplacePVM("AVA_FILESEL_E");
	ReplacePVM("AVA_FSDLG_E");
	ReplacePVM("AVA_GTITLE0_E");

	if (HDGui) ReplacePVM_DC("AVA_OPTION_E");
	else ReplacePVM("AVA_OPTION_E");

	ReplacePVM("AVA_SNDTEST_E");
	ReplacePVM("AVA_STNAM_E");
	ReplacePVM("AVA_TITLE_E");
	ReplacePVM("AVA_TRIALACTSEL_E");
	ReplacePVM("AVA_VMSSEL_E");
	ReplacePVM("BOARD_SCORE");
	ReplacePVM("B_CHNAM_E");
	ReplacePVM("CON_REGULAR_E");
	ReplacePVM("GAMEOVER_E");
	ReplacePVM("GGMENU_TEXLIST_US");
	ReplacePVM("GG_TEXLIST_US");
	ReplacePVM("MAP_MR_A");
	ReplacePVM("MAP_PAST_E");
	ReplacePVM("MAP_PAST_S");
	ReplacePVM("MAP_SS");
	ReplacePVM("MILESRACE");
	ReplacePVM("MIS_C_EN");
	ReplacePVM("MIS_P");
	ReplacePVM("MOGURATATAKI");
	ReplacePVM("M_CHNAM");
	ReplacePVM("OBJ_AL_RACE_E");
	ReplacePVM("OBJ_AL_RACE");

	if (DConv == nullptr)
		ReplacePVM("OBJ_CASINO_E");

	ReplacePVM("OBJ_MINI_CART");
	ReplacePVM("PRESSSTART");
	ReplacePVM("SCORE_ACT_E");
	ReplacePVM("SCORE_BOARD_E");
	ReplacePVM("SCORE_BOSS_E");
	ReplacePVM("SCORE_CART_E");
	ReplacePVM("SCORE_MOLE_E");
	ReplacePVM("SCORE_RESULT_E");
	ReplacePVM("SCORE_SHOOT_E");
	ReplacePVM("TIMEOVER");
	ReplacePVM("TUTOMSG_AMY_E");
	ReplacePVM("TUTOMSG_BIG_E");
	ReplacePVM("TUTOMSG_E102_E");
	ReplacePVM("TUTOMSG_KNUCKLES_E");
	ReplacePVM("TUTOMSG_SONIC_E");
	ReplacePVM("TUTOMSG_TAILS_E");
	ReplacePVM("TUTO_CMN_E");
	ReplacePVM("TX_CHNAM_E");
	#pragma endregion

}