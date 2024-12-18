class CfgPatches
{
	class Stryker_Sprays
	{
		// Meta information for editor
		name = "Stryker Aux Mod";
		author = "Soldner";
		url = "https://discord.gg/Y6AtjkfaEW";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = { "A3_Data_F_Decade_Loadorder" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};
class cfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class Stryker_SprayCan: CBA_MiscItem 
	{
		author = "Soldner";
		scope = 2;
		displayname = "[Stryker] Spray Paint";
		descriptionShort = "An item that lets you tag walls.";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		icon = "StrykerSprays\Sprays\logo.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
};
class ACE_Tags
{
	//Kaker Sprays
	class Stryker_Logo_Spray
	{
		displayName = "Stryker";
		requiredItem = "Stryker_SprayCan";
		materials[] = {};
		textures[] = { "StrykerSprays\Sprays\logo.paa" };
		icon = "StrykerSprays\Sprays\logo.paa";
	};
	class Stryker_Logo_1A_Spray : Stryker_Logo_Spray
	{
		displayName = "Kronos";
		textures[] = {"StrykerSprays\Sprays\1-A.paa"};
		icon = "StrykerSprays\Sprays\1-A.paa";
	};
	class Stryker_Logo_11_Spray : Stryker_Logo_Spray
	{
		displayName = "Hydra";
		textures[] = {"StrykerSprays\Sprays\1-1.paa"};
		icon = "StrykerSprays\Sprays\1-1.paa";
	};
	class Stryker_Logo_12_Spray : Stryker_Logo_Spray
	{
		displayName = "Phoenix";
		textures[] = {"StrykerSprays\Sprays\1-2.paa"};
		icon = "StrykerSprays\Sprays\1-2.paa";
	};
	class Stryker_Logo_13_Spray : Stryker_Logo_Spray
	{
		displayName = "Misfit";
		textures[] = {"StrykerSprays\Sprays\1-3.paa"};
		icon = "StrykerSprays\Sprays\1-3.paa";
	};
	class Stryker_CCP_Spray : Stryker_Logo_Spray
	{
		displayName = "CCP";
		textures[] = { "StrykerSprays\Sprays\CCP-Logo.paa" };
		icon = "StrykerSprays\Sprays\CCP-Logo.paa";
	};
	class Stryker_Assman_Spray : Stryker_Logo_Spray
	{
		displayName = "Assman";
		textures[] = { "StrykerSprays\Sprays\Sabbath-was-here.paa" };
		icon = "StrykerSprays\Sprays\Sabbath-was-here.paa";
	};
};