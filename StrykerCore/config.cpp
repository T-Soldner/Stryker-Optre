#define _ARMA_

class CfgPatches
{
	class Stryker_Core
	{
		author = "Stryker Mod Team";
		name = "Stryker Mod Core";
		url = "https://discord.gg/Y6AtjkfaEW";
		units[] = {""};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"1st_MEU_patch_main_loadingScreens"
			// we dont actually extend anything from 1MEU, this is just to ensure our loading screen overwrites theirs
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
	class Stryker_MEU_EdSubCat_Drones
	{
		displayName = "Drones";
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
					text="\StrykerCore\textures\Stryker2.paa";
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
					text="\StrykerCore\textures\Stryker2.paa";
				};
			};
		};
		class Loading_West3 : LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc = 1;
					x = "SafeZoneX";
					y = "SafeZoneY";
					h = "SafeZoneH";
					w = "SafeZoneW";
					text = "\StrykerCore\textures\Stryker3.paa";
				};
			};
		};
		class Loading_West4 : LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc = 1;
					x = "SafeZoneX";
					y = "SafeZoneY";
					h = "SafeZoneH";
					w = "SafeZoneW";
					text = "\StrykerCore\textures\Stryker4.paa";
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
					text="\StrykerCore\textures\Stryker2.paa";
				};
			};
		};
		class Loading_East3 : LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc = 1;
					x = "SafeZoneX";
					y = "SafeZoneY";
					h = "SafeZoneH";
					w = "SafeZoneW";
					text = "\StrykerCore\textures\Stryker3.paa";
				};
			};
		};
		class Loading_East4 : LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc = 1;
					x = "SafeZoneX";
					y = "SafeZoneY";
					h = "SafeZoneH";
					w = "SafeZoneW";
					text = "\StrykerCore\textures\Stryker4.paa";
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
