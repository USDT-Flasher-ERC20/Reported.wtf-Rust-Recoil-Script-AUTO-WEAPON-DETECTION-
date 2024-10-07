#pragma once

#include "Archivex.hpp"

#include <iostream>
#include <windows.h>
#include <thread>
#include <random>
#include <d3d9.h>
#include <dinput.h>
#include <Mmsystem.h>
#include <mciapi.h>
#include <Mmsystem.h>
#include <TlHelp32.h>
#include <mciapi.h>
#include <strsafe.h> 
#include <windows.h>
#include <string>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <ctime>
#include <time.h>
#include <cctype>
#include <iomanip>
#include <sstream>
#include <string>
#include <regex>
#include <ProcessSnapshot.h>
#include <filesystem>
#include <ShlObj_core.h>
#include <Windows.h>
#include <iostream>
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <iostream>
#include <string>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#include <Windows.h>
#include <Mmsystem.h>
#include <Windows.h>
#include <mmstream.h>
#include <fstream>
#include <iostream>
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <iostream>
#include <string>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#include <Windows.h>
#include <Mmsystem.h>
#include <Windows.h>
#include <mmstream.h>
#include <fstream>
#include <wingdi.h>
#include <sapi.h>

#include "imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_dx9.h"
#include "imgui-docking/imgui_internal.h"
#include "imgui-docking/imgui_impl_win32.h"

class c_config
{
private:
	std::filesystem::path path;
	std::vector<std::string> configs;

public:
	void run();
	void run2();
	void load(size_t id);
	void save(size_t id) const;
	void add(std::string name);
	void remove(size_t id);
	void rename(size_t item, std::string new_name);
	void reset();

	constexpr auto& get_configs() { return configs; };
	constexpr auto& get_path() { return path; };

	struct
	{
		//Settings
		float game_sensitivity{ 0.5f };
		float game_fov{ 90.0f };
		int currentColumn{ 0 };
		int hsbind{ VK_INSERT };
		int closebind{ VK_END };

		//Guns
		bool ak_active{ false };
		bool lr_active{ false };
		bool mp5_active = { false };
		bool custom_active{ false };
		bool thompson_active{ false };
		bool semi_active{ false };
		bool m249_active{ false };

		int akbind{ 0 };//Ak47
		int lrbind{ 0 };//Lr300
		int mpbind{ 0 };//Mp5a4
		int csbind{ 0 };//Custom Smg
		int tmbind{ 0 };//Thommy Smg
		int smbind{ 0 };//Semi Rifle
		int m2bind{ 0 };//M249
		//////////////////////////////////

		//Barrels
		bool silencer_active{ false };
		bool boost_active{ false };
		bool break_active{ false };

		int slbind{ 0 };//Silencer
		int mbbind{ 0 };//Muzzle Boost
		int bbind{ 0 };//Muzzle Break
		//////////////////////////////////////

		//Scopes
		bool holo_active{ false };
		bool simple_active{ false };
		bool sniper_active{ false };
		bool x16_active{ false };

		int hhbind{ 0 };//Holo Sight
		int ssbind{ 0 };//Simple Sight
		int xxbind{ 0 };//8x
		int x16bind{ 0 };//16x
		/////////////////////////////

		//Recoil
		bool recoil{ true };
		bool legitmode{ false };
		bool autodetect{ false };
		bool hipfire{ false };
		bool randomxy_active = { false };
		float XCONTROL{ 1 };
		float YCONTROL{ 1 };
		float XSCALE{ 1 };
		float YSCALE{ 1 };

		//Misc
		bool antiafk{ false };
		bool auto_upgrade{ false };
		bool showing{ true };
		bool watermark{ false };
		bool crosshair{ false };
		bool ttsenabled{ false };
		bool auto_lock{ false };

		//Weapon Selection
		int selectedItemWP{ 0 };
		int selectedItemSC{ 0 };
		int selectedItemBR{ 0 };
		const char* Active_Weapon{ "NONE" };
		const char* Active_Scopes{ "NONE" };
		const char* Active_Barrel{ "NONE" };

		int codekey{ 0 };
		int upgradebind{ 0 };
		int code1{ 0 };
		int code2{ 0 };
		int code3{ 0 };
		int code4{ 0 };

		int switchUpgrade{ 1 };
		const char* upgrade[5]{
			"None\0",
			"Wood\0",
			"Stone\0",
			"Sheet Metal\0",
			"Armoured\0",
		};

		int switchCrosshair{ 0 };
		const char* crosshairType[5]{
			"None\0",
			"Dot\0",
			"Money\0",
			"Cross\0",
			"Circle\0",
		};
		bool hideonads{ false };
		float crosshaircolor[4] = { 1.f, 1.f, 1.f, 1.f };
	} Includes;
}; inline auto config = c_config();