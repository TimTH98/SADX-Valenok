#include "stdafx.h"
#include <SADXModLoader.h>
#include <cmath>

#include "Funcs.h"
#include "VariousText.h"
#include "LoadTextures.h"

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		char pathbuf[MAX_PATH];
		HMODULE DConv = GetModuleHandle(L"DCMods_Main");			// Init Dreamcast Conversion dll
		HMODULE HDGui = GetModuleHandle(L"HD_GUI");					// Init HD GUI

		IncludeText();
		LoadDCChaoGardenText();
		BossHelps();
		MissionText();
		GG_Games();	

		if (HDGui) LoadTextures(path, helperFunctions);
	} 
	
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}