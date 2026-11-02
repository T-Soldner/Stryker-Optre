// Release version: MAJOR.MINOR.FEATURE.REVISION
// MAJOR: breaking compatibility or dependency restructuring.
// MINOR: a new PBO or major subsystem; reset FEATURE and REVISION to 0.
// FEATURE: substantial content in an existing PBO, such as a new vehicle, faction, or system; reset REVISION to 0.
// REVISION: routine arsenal, texture, balance, and config updates.
#define STRYKER_VERSION 1.0
#define STRYKER_VERSION_STR "1.0.0.1"
#define STRYKER_VERSION_AR 1,0,0,1

class CfgPatches
{
	class Stryker_Core
	{
		// Meta information for editor
		name = "Stryker Aux Mod";
		author = "Soldner";
		url = "https://discord.gg/Y6AtjkfaEW";
		version = STRYKER_VERSION;
		versionStr = STRYKER_VERSION_STR;
		versionAr[] = {STRYKER_VERSION_AR};

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = {
			"1st_MEU_patch_main_loadingScreens"
			// we dont actually extend anything from 1MEU, this is just to ensure our loading screen overwrites theirs
		};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};
class CfgSettings
{
	class CBA
	{
		class Versioning
		{
			class Stryker
			{
				main_addon = "Stryker_Core";
			};
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class Stryker_Core: Mod_Base
	{
		logo = "StrykerCore\textures\logo.paa";
		picture = "StrykerCore\textures\logo.paa";
		name = "Project Harvest Armory";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class Stryker_Core
		{
			list[] = {"Stryker_Core"};
		};
	};
};
class CfgEditorCategories
{
	class Stryker_MEU_EdCat
	{
		displayName = "Stryker MEU";
	};
};
class CfgEditorSubcategories
{
	class Stryker_MEU_EdSubCat_Men
	{
		displayName = "Infantry";
	};
	class Stryker_MEU_EdSubCat_Cars
	{
		displayName = "Cars";
	};
	class Stryker_MEU_EdSubCat_Armored
	{
		displayName = "Armored";
	};
	class Stryker_MEU_EdSubCat_Rotary
	{
		displayName = "Rotary";
	};
	class Stryker_MEU_EdSubCat_Drones
	{
		displayName = "Drones";
	};
	class Stryker_MEU_EdSubCat_Supplies
	{
		displayName = "Supplies";
	};
};
class RscPicture{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{};
class RscStandardDisplay{};
class RscDisplayMain: RscStandardDisplay
{
	class Controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscActivePicture
		{
			text="\StrykerCore\textures\logo.paa";
		};
	};
	enableDisplay=0;
	delete Spotlight;
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\StrykerCore\textures\strykerbg.paa";
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			idd=250;
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\StrykerCore\textures\Stryker1.paa";
				};
			};
		};
		class Loading_West1: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text = "\StrykerCore\textures\Stryker1.paa";
				};
			};
		};
		class Loading_West2: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text = "\StrykerCore\textures\Stryker1.paa";
				};
			};
		};
		class Loading_East1: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\StrykerCore\textures\Stryker1.paa";
				};
			};
		};
		class Loading_East2: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text = "\StrykerCore\textures\Stryker1.paa";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\StrykerCore\textures\Stryker1.paa";
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\StrykerCore\textures\strykerbg.paa";
		};
	};
};
class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers
{
	class LoadingPic: RscPicture
	{
		idc=1;
		x="SafeZoneX";
		y="SafeZoneY";
		h="SafeZoneH";
		w="SafeZoneW";
		text="\StrykerCore\textures\strykerbg.paa";
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\StrykerCore\textures\strykerbg.paa";
		};
	};
};
