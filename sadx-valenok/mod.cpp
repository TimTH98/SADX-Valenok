#include "stdafx.h"
#include <SADXModLoader.h>
#include <cmath>

#include "Funcs.h"
#include "VariousText.h"
#include "LoadTextures.h"

void LoadChaoGardenHintMessages()
{
	WriteData((HintText_Entry**)0x9BF070, (HintText_Entry*)&ChaoGardenMessages_English);
	WriteData((HintText_Entry**)0x9BF084, (HintText_Entry*)&ChaoGardenMessages_English);
	WriteData((HintText_Entry**)0x9BF098, (HintText_Entry*)&ChaoGardenMessages_English);
	WriteData((HintText_Entry**)0x9BF0AC, (HintText_Entry*)&ChaoGardenMessages_English);
}

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		char pathbuf[MAX_PATH];
		HMODULE DConv = GetModuleHandle(L"DCMods_Main");			// Init Dreamcast Conversion dll
		HMODULE HDGui = GetModuleHandle(L"HD_GUI");					// Init HD GUI

		if (DConv) WriteData<5>((void*)0x423795, 0x90);

		IncludeText();
		LoadChaoGardenHintMessages();
		BossHelps();
		MissionText();
		GG_Games();	

		LoadTextures(path, helperFunctions);
	} 
	
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}