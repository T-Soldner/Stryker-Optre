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
	class Stryker_OneOne_SprayCan : CBA_MiscItem
	{
		author = "Soldner";
		scope = 2;
		displayname = "[Stryker] 1-1 Spray Paint";
		descriptionShort = "An item that lets you tag walls.";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		icon = "StrykerSprays\Sprays\logo.paa";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
	class Stryker_OneTwo_SprayCan : CBA_MiscItem
	{
		author = "Soldner";
		scope = 2;
		displayname = "[Stryker] 1-1 Spray Paint";
		descriptionShort = "An item that lets you tag walls.";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		icon = "StrykerSprays\Sprays\logo.paa";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
	class Stryker_OneF_SprayCan : CBA_MiscItem
	{
		author = "Soldner";
		scope = 2;
		displayname = "[Stryker] 1-F Spray Paint";
		descriptionShort = "An item that lets you tag walls.";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		icon = "StrykerSprays\Sprays\logo.paa";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
};
class ACE_Tags
{
	//Main 1-0 Sprays
	class Stryker_Logo_Spray
	{
		displayName = "Stryker";
		requiredItem = "Stryker_SprayCan";
		materials[] = {};
		textures[] = { "StrykerSprays\Sprays\logo.paa" };
		icon = "StrykerSprays\Sprays\logo.paa";
	};
	class Stryker_10_Spray : Stryker_Logo_Spray
	{
		displayName = "Kronos";
		textures[] = {"StrykerSprays\Sprays\1-0.paa"};
		icon = "StrykerSprays\Sprays\1-0.paa";
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

	//1-1 sprays
	class Stryker_Logo_OneOne_Spray
	{
		displayName = "Stryker";
		requiredItem = "Stryker_OneOne_SprayCan";
		materials[] = {};
		textures[] = { "StrykerSprays\Sprays\logo.paa" };
		icon = "StrykerSprays\Sprays\logo.paa";
	};
	class Stryker_OneOne_11_Spray : Stryker_Logo_OneOne_Spray
	{
		displayName = "Hydra";
		textures[] = { "StrykerSprays\Sprays\1-1.paa" };
		icon = "StrykerSprays\Sprays\1-1.paa";
	};
	class Stryker_OneOne_CCP_Spray : Stryker_Logo_OneOne_Spray
	{
		displayName = "CCP";
		textures[] = { "StrykerSprays\Sprays\CCP-Logo.paa" };
		icon = "StrykerSprays\Sprays\CCP-Logo.paa";
	};
	class Stryker_OneOne_StrengthandHonor_Spray : Stryker_Logo_OneOne_Spray
	{
		displayName = "Strength";
		textures[] = { "StrykerSprays\Sprays\StrengthandHonor.paa" };
		icon = "StrykerSprays\Sprays\StrengthandHonor.paa";
	};
	class Stryker_OneOne_Why_Spray : Stryker_Logo_OneOne_Spray
	{
		displayName = "Why we do this";
		textures[] = { "StrykerSprays\Sprays\understand.paa" };
		icon = "StrykerSprays\Sprays\understand.paa";
	};
	class Stryker_OneOne_Fangirl : Stryker_Logo_OneOne_Spray
	{
		displayName = "Fangirl";
		textures[] = { "StrykerSprays\Sprays\fangirl.paa" };
		icon = "StrykerSprays\Sprays\fangirl.paa";
	};
	class Stryker_OneOne_Hydrate : Stryker_Logo_OneOne_Spray
	{
		displayName = "Hydrate";
		textures[] = { "StrykerSprays\Sprays\hydrate.paa" };
		icon = "StrykerSprays\Sprays\hydrate.paa";
	};

	//1-2 sprays
	class Stryker_Logo_OneTwo_Spray
	{
		displayName = "Stryker";
		requiredItem = "Stryker_OneTwo_SprayCan";
		materials[] = {};
		textures[] = { "StrykerSprays\Sprays\logo.paa" };
		icon = "StrykerSprays\Sprays\logo.paa";
	};
	class Stryker_OneTwo_12_Spray : Stryker_Logo_OneTwo_Spray
	{
		displayName = "Phoenix";
		textures[] = { "StrykerSprays\Sprays\1-2.paa" };
		icon = "StrykerSprays\Sprays\1-2.paa";
	};
	class Stryker_OneTwo_CCP_Spray : Stryker_Logo_OneTwo_Spray
	{
		displayName = "CCP";
		textures[] = { "StrykerSprays\Sprays\CCP-Logo.paa" };
		icon = "StrykerSprays\Sprays\CCP-Logo.paa";
	};

	//1-F Sprays
	class Stryker_Logo_OneF_Spray
	{
		displayName = "Stryker";
		requiredItem = "Stryker_OneF_SprayCan";
		materials[] = {};
		textures[] = { "StrykerSprays\Sprays\logo.paa" };
		icon = "StrykerSprays\Sprays\logo.paa";
	};
	class Stryker_OneF_1F_Spray : Stryker_Logo_OneF_Spray
	{
		displayName = "Misfit";
		textures[] = { "StrykerSprays\Sprays\1-F.paa" };
		icon = "StrykerSprays\Sprays\1-F.paa";
	};
	class Stryker_OneF_CCP_Spray : Stryker_Logo_OneF_Spray
	{
		displayName = "CCP";
		textures[] = { "StrykerSprays\Sprays\CCP-Logo.paa" };
		icon = "StrykerSprays\Sprays\CCP-Logo.paa";
	};
	class Stryker_OneF_StrengthandHonor_Spray : Stryker_Logo_OneF_Spray
	{
		displayName = "Strength";
		textures[] = { "StrykerSprays\Sprays\StrengthandHonor.paa" };
		icon = "StrykerSprays\Sprays\StrengthandHonor.paa";
	};
};