class CfgPatches
{
	class Stryker_Units
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
		units[] = { "B_StrykerFaction_Rifleman_01","B_StrykerFaction_Squad_Leader_01","B_StrykerFaction_Team_Lead_01","B_StrykerFaction_Anti_Tank_01","B_StrykerFaction_Radio_Operator_01","B_StrykerFaction_Grenadier_01","B_StrykerFaction_Autorifleman_01","B_StrykerFaction_Marksman_01","B_StrykerFaction_Corpsman_01","B_StrykerFaction_Combat_Engineer_01" };
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};

class CfgFactionClasses {
	class Stryker_Faction {
		displayName = "Stryker MEU";
		side = 1;
		flag = "";
		icon = "";
		priority = 0;
	};
};

class CfgVehicles {
	class OPTRE_UNSC_Soldier_Base;
	class B_Soldier_F_OCimport_01 : OPTRE_UNSC_Soldier_Base { scope = 0; class EventHandlers; };
	class B_Soldier_F_OCimport_02 : B_Soldier_F_OCimport_01 {
		class EventHandlers;
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest : HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 5;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 5;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 5;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm : HitHands
			{
				material = -1;
				name = "hand_l";
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg : HitLegs
			{
				material = -1;
				name = "leg_l";
				radius = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};

	class B_StrykerFaction_Rifleman_01 : B_Soldier_F_OCimport_02 {
		editorPreview = StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Rifleman_01.JPG;
		author = "Soldner";								// The name of the author of the asset, which is displayed in the editor.
		scope = 2;										// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;								// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		displayName = "Rifleman";
		side = 1;
		faction = "Stryker_Faction";
		editorCategory = "Stryker_MEU_EdCat";
		editorSubCategory = "Stryker_MEU_EdSubCat_Men";

		identityTypes[] = { "NoGlasses" };

		uniformClass = "Stryker_U_Woodland_uniform";

		linkedItems[] = { "MA_TGE_InvisVest","Stryker_Woodland_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C","MineDetector" };
		respawnlinkedItems[] = { "MA_TGE_InvisVest","Stryker_Woodland_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C","MineDetector" };

		weapons[] = { "Stryker_MA37_ai","Stryker_M6G_ai","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_MA37_ai","Stryker_M6G_ai","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell"};
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };

		backpack = "Halo_Rucksack_01";
	};

	class B_StrykerFaction_Autorifleman_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Autorifleman_01.JPG";
		displayName = "Autorifleman";

		weapons[] = { "Stryker_M247_ai","Stryker_M6G_ai","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_M247_ai","Stryker_M6G_ai","OPTRE_Binoculars" };

		magazines[] = { "MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };
		respawnMagazines[] = { "MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","MEU_100Rnd_762x51_AP_HV_Box","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };

		backpack = "Halo_Rucksack_02";
	};

	class B_StrykerFaction_Marksman_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Marksman_01.JPG";
		displayName = "Marksman";

		weapons[] = { "Stryker_M392_DMR_ai","Stryker_M6G_ai","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_M392_DMR_ai","Stryker_M6G_ai","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };
		respawnMagazines[] = { "OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","OPTRE_15Rnd_DMR_762x51_Mag_AP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };
	};

	class B_StrykerFaction_Corpsman_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Corpsman_01.JPG";
		displayName = "Corpsman";
		attendant = 1;

		uniformClass = "Stryker_U_Woodland_Corpsman_uniform";

		linkedItems[] = { "MA_TGE_InvisVest","Stryker_Woodland_Corpsman_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C","Medikit","MineDetector" };
		respawnlinkedItems[] = { "MA_TGE_InvisVest","Stryker_Woodland_Corpsman_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C","Medikit","MineDetector" };

		weapons[] = { "Stryker_MA37_ai","Stryker_M6G_ai","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_MA37_ai","Stryker_M6G_ai","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };
	};

	class B_StrykerFaction_Combat_Engineer_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Combat_Engineer_01.JPG";
		displayName = "Combat Engineer";
		engineer = 1;
		canDeactivateMines = 1;

		linkedItems[] = { "MA_TGE_InvisVest","Stryker_Woodland_Corpsman_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C","ToolKit","MineDetector"};
		respawnlinkedItems[] = { "MA_TGE_InvisVest","Stryker_Woodland_Corpsman_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C","ToolKit","MineDetector" };

		weapons[] = { "Stryker_M90A_ai","Stryker_M6G_ai","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_M90A_ai","Stryker_M6G_ai","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };
		respawnMagazines[] = { "OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Pellet","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };
	};

	class B_StrykerFaction_Grenadier_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Grenadier_01.JPG";
		displayName = "Grenadier";

		weapons[] = { "Stryker_MA37GL_ai","Stryker_M6G_ai","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_MA37GL_ai","Stryker_M6G_ai","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell"};
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };
	};

	class B_StrykerFaction_Radio_Operator_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Radio_Operator_01.JPG";
		displayName = "Radio Operator";

		weapons[] = { "Stryker_MA37_ai","Stryker_M6G_ai","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_MA37_ai","Stryker_M6G_ai","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };

		backpack = "Halo_LR";
	};

	class B_StrykerFaction_Anti_Tank_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Anti_Tank_01.JPG";
		displayName = "Anti-Tank";

		weapons[] = { "Stryker_MA37_ai","Stryker_M41_SSR","Stryker_M6G_ai","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_MA37_ai","Stryker_M41_SSR","Stryker_M6G_ai","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell"};
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };

		backpack = "Halo_Rucksack_02";
	};

	class B_StrykerFaction_Team_Lead_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Team_Lead_01.JPG";
		displayName = "Team Lead";

		weapons[] = { "Stryker_BR55_ai","Stryker_M6G_ai","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_BR55_ai","Stryker_M6G_ai","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_M9_Frag","SmokeShell","SmokeShell" };

		magazines[] = { "OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP" };
	};

	class B_StrykerFaction_Squad_Leader_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Squad_Leader_01.JPG";
		displayName = "Squad Leader";

		weapons[] = { "Stryker_BR55_ai","Stryker_M6G_ai","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_BR55_ai","Stryker_M6G_ai","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP" };
	};
};

class CfgGroups {
	class WEST {

		class Stryker_Faction {
			name = "Stryker";

			class Infantry {
				name = "Infantry";

				class b_strykerfaction_infantry_sentry {
					name = "Sentry";
					side = 1;
					faction = "Stryker_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_StrykerFaction_Grenadier_01";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Rifleman_01";
					};
				};

				class b_strykerfaction_infantry_fireteam {
					name = "Fireteam";
					side = 1;
					faction = "Stryker_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_StrykerFaction_Team_Lead_01";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Corpsman_01";
					};
					class Unit2 {
						position[] = { -5,-5,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Autorifleman_01";
					};
					class Unit3 {
						position[] = { 10,-10,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Grenadier_01";
					};
				};

				class b_strykerfaction_infantry_squad {
					name = "Squad";
					side = 1;
					faction = "Stryker_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_StrykerFaction_Squad_Leader_01";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Radio_Operator_01";
					};
					class Unit2 {
						position[] = { -5,-5,0 };
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_StrykerFaction_Team_Lead_01";
					};
					class Unit3 {
						position[] = { 10,-10,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Corpsman_01";
					};
					class Unit4 {
						position[] = { -10,-10,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Autorifleman_01";
					};
					class Unit5 {
						position[] = { 15,-15,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Marksman_01";
					};
					class Unit6 {
						position[] = { -15,-15,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Combat_Engineer_01";
					};
					class Unit7 {
						position[] = { 20,-20,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Grenadier_01";
					};
					class Unit8 {
						position[] = { -20,-20,0 };
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_StrykerFaction_Team_Lead_01";
					};
					class Unit9 {
						position[] = { 25,-25,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Anti_Tank_01";
					};
					class Unit10 {
						position[] = { -25,-25,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Grenadier_01";
					};
					class Unit11 {
						position[] = { 30,-30,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Combat_Engineer_01";
					};
					class Unit12 {
						position[] = { -30,-30,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Corpsman_01";
					};
					class Unit13 {
						position[] = { 35,-35,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_StrykerFaction_Marksman_01";
					};
				};
			};
		};
	};
};

