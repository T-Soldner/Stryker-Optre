#define _ARMA_

class CfgPatches
{
	class Stryker_Units
	{
		author = "Soldner";
		name = "Stryker Units";
		url = "https://discord.gg/Y6AtjkfaEW";
		units[] = {"B_StrykerFaction_Rifleman_01","B_StrykerFaction_Squad_Leader_01","B_StrykerFaction_Team_Lead_01","B_StrykerFaction_Anti_Tank_01","B_StrykerFaction_Radio_Operator_01","B_StrykerFaction_Grenadier_01","B_StrykerFaction_Autorifleman_01","B_StrykerFaction_Marksman_01","B_StrykerFaction_Corpsman_01","B_StrykerFaction_Combat_Engineer_01"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Stryker_Core"};
	};
};

class CfgFactionClasses {
	class Stryker_Faction {
		displayName = "Stryker MEU";
		side = 1;
		flag = "";
		icon = "";
		priority = 3;
	};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	class OPTRE_UNSC_Soldier_Base;
	class B_Soldier_F_OCimport_01 : OPTRE_UNSC_Soldier_Base { scope = 0; class EventHandlers; };
	class B_Soldier_F_OCimport_02 : B_Soldier_F_OCimport_01 {
		class EventHandlers;
		editorCategory = "Stryker_EdCat";
		editorSubCategory = "Stryker_EdSubCat_Men";
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
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		side = 1;
		faction = "Stryker_Faction";
		editorCategory = "Stryker_EdCat_MEU";
		editorSubCategory = "StrykerMEU_EdSubCat_Men";

		identityTypes[] = { "NoGlasses",0, };

		uniformClass = "Stryker_U_Woodland_uniform";

		linkedItems[] = { "MA_TGE_InvisVest","Stryker_Woodland_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C" };
		respawnlinkedItems[] = { "MA_TGE_InvisVest","Stryker_Woodland_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C" };

		weapons[] = { "Stryker_MA37","Stryker_M6G","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_MA37","Stryker_M6G","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP" };

		backpack = "Halo_Rucksack_01";

		ALiVE_orbatCreator_loadout[] = { {"Stryker_MA37","","","Stryker_MA37_Smartlink_Scope",{"OPTRE_32Rnd_762x51_Mag_JHP",32},{},""},{},{"Stryker_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"TCF_12Rnd_127x40_Mag_JHP",8},{},""},{"Stryker_U_Woodland_uniform",{{"OPTRE_Biofoam",1},{"OPTRE_M2_Smoke",3,1},{"OPTRE_M9_Frag",2,1}}},{"MA_TGE_InvisVest",{{"TCF_32Rnd_762x51_Mag_JHP",10,32},{"TCF_12Rnd_127x40_Mag_JHP",2,12}}},{"Halo_Rucksack_01",{}},"Stryker_Woodland_Helmet","G_Combat",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C"} };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			

			class ALiVE_orbatCreator {
				init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class B_StrykerFaction_Autorifleman_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Autorifleman_01.JPG";
		displayName = "Autorifleman";

		weapons[] = { "Stryker_M247","Stryker_M6G","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_M247","Stryker_M6G","OPTRE_Binoculars" };

		magazines[] = { "MEU_100Rnd_762x51_AP_HV_Box","TCF_12Rnd_127x40_Mag_JHP","MEU_100Rnd_762x51_AP_HV_Box","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "MEU_100Rnd_762x51_AP_HV_Box","TCF_12Rnd_127x40_Mag_JHP","MEU_100Rnd_762x51_AP_HV_Box","TCF_12Rnd_127x40_Mag_JHP" };

		ALiVE_orbatCreator_loadout[] = { {"Stryker_M247","","OPTRE_M45_Flashlight","Optre_Recon_Sight_Green",{"MEU_100Rnd_762x51_AP_HV_Box",100},{},"bipod_01_F_blk"},{},{"Stryker_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"TCF_12Rnd_127x40_Mag_JHP",8},{},""},{"Stryker_U_Woodland_uniform",{{"OPTRE_Biofoam",1},{"MEU_100Rnd_762x51_AP_HV_Box",2,100}}},{"MA_TGE_InvisVest",{{"TCF_12Rnd_127x40_Mag_JHP",2,12},{"MEU_100Rnd_762x51_AP_HV_Box",3,100}}},{"Halo_Rucksack_01",{}},"Stryker_Woodland_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C"} };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			

			class ALiVE_orbatCreator {
				init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class B_StrykerFaction_Marksman_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Marksman_01.JPG";
		displayName = "Marksman";

		weapons[] = { "Stryker_M392_DMR","Stryker_M6G","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_M392_DMR","Stryker_M6G","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_15Rnd_DMR_762x51_Mag_AP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_15Rnd_DMR_762x51_Mag_AP","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_15Rnd_DMR_762x51_Mag_AP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_15Rnd_DMR_762x51_Mag_AP","TCF_12Rnd_127x40_Mag_JHP" };

		ALiVE_orbatCreator_loadout[] = { {"Stryker_M392_DMR","","OPTRE_DMR_Light","OPTRE_M392_Scope",{"OPTRE_15Rnd_DMR_762x51_Mag_AP",15},{},""},{},{"Stryker_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"TCF_12Rnd_127x40_Mag_JHP",8},{},""},{"Stryker_U_Woodland_uniform",{{"OPTRE_Biofoam",1},{"TCF_15Rnd_762x51_Mag_AP",10,15}}},{"MA_TGE_InvisVest",{{"TCF_12Rnd_127x40_Mag_JHP",2,12},{"OPTRE_M2_Smoke",2,1},{"OPTRE_M9_Frag",2,1}}},{"Halo_Rucksack_01",{}},"Stryker_Woodland_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C"} };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			

			class ALiVE_orbatCreator {
				init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class B_StrykerFaction_Corpsman_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Corpsman_01.JPG";
		displayName = "Corpsman";
		attendant = 1;

		uniformClass = "Stryker_U_Woodland_Corpsman_uniform";

		linkedItems[] = { "MA_TGE_InvisVest","Stryker_Woodland_Corpsman_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C" };
		respawnlinkedItems[] = { "MA_TGE_InvisVest","Stryker_Woodland_Corpsman_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C" };

		weapons[] = { "Stryker_MA37","Stryker_M6G","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_MA37","Stryker_M6G","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP" };

		ALiVE_orbatCreator_loadout[] = { {"Stryker_MA37","","","Stryker_MA37_Smartlink_Scope",{"OPTRE_32Rnd_762x51_Mag_JHP",32},{},""},{},{"Stryker_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"TCF_12Rnd_127x40_Mag_JHP",8},{},""},{"Stryker_U_Woodland_Corpsman_uniform",{{"OPTRE_Biofoam",1},{"OPTRE_M9_Frag",2,1},{"OPTRE_M2_Smoke",2,1},{"OPTRE_M2_Smoke_Blue",2,1},{"OPTRE_M2_Smoke_Purple",2,1}}},{"MA_TGE_InvisVest",{{"TCF_32Rnd_762x51_Mag_JHP",10,32},{"TCF_12Rnd_127x40_Mag_JHP",2,12}}},{"Halo_Rucksack_01",{{"ACE_fieldDressing",2},{"ACE_elasticBandage",2},{"ACE_packingBandage",1},{"ACE_quikclot",1}}},"Stryker_Woodland_Corpsman_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C"} };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			

			class ALiVE_orbatCreator {
				init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class B_StrykerFaction_Combat_Engineer_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Combat_Engineer_01.JPG";
		displayName = "Combat Engineer";
		engineer = true;

		weapons[] = { "Stryker_M90A","Stryker_M6G","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_M90A","Stryker_M6G","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_12Rnd_8Gauge_Pellet","TCF_12Rnd_127x40_Mag_JHP","OPTRE_12Rnd_8Gauge_Pellet","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_12Rnd_8Gauge_Pellet","TCF_12Rnd_127x40_Mag_JHP","OPTRE_12Rnd_8Gauge_Pellet","TCF_12Rnd_127x40_Mag_JHP" };

		ALiVE_orbatCreator_loadout[] = { {"Stryker_M90A","","","",{"OPTRE_12Rnd_8Gauge_Pellet",6},{},""},{},{"Stryker_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"TCF_12Rnd_127x40_Mag_JHP",8},{},""},{"Stryker_U_Woodland_uniform",{{"OPTRE_Biofoam",1},{"OPTRE_12Rnd_8Gauge_Slugs",5,12}}},{"MA_TGE_InvisVest",{{"TCF_12Rnd_127x40_Mag_JHP",2,12},{"OPTRE_12Rnd_8Gauge_Pellets",4,12}}},{"Halo_Rucksack_01",{{"ACE_M26_Clacker",1},{"ACE_DefusalKit",1},{"C7_Remote_Mag",4,1},{"C12_Remote_Mag",1,1}}},"Stryker_Woodland_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C"} };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			

			class ALiVE_orbatCreator {
				init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class B_StrykerFaction_Grenadier_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Grenadier_01.JPG";
		displayName = "Grenadier";

		weapons[] = { "Stryker_MA37GL","Stryker_M6G","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_MA37GL","Stryker_M6G","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","1Rnd_HE_Grenade_shell","TCF_12Rnd_127x40_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","1Rnd_HE_Grenade_shell","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","1Rnd_HE_Grenade_shell","TCF_12Rnd_127x40_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","1Rnd_HE_Grenade_shell","TCF_12Rnd_127x40_Mag_JHP" };

		ALiVE_orbatCreator_loadout[] = { {"Stryker_MA37GL","","","",{"OPTRE_32Rnd_762x51_Mag_JHP",32},{"1Rnd_HE_Grenade_shell",1},""},{},{"Stryker_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"TCF_12Rnd_127x40_Mag_JHP",8},{},""},{"Stryker_U_Woodland_uniform",{{"OPTRE_Biofoam",1},{"1Rnd_HE_Grenade_shell",3,1},{"TCF_32Rnd_762x51_Mag_JHP",7,32}}},{"MA_TGE_InvisVest",{{"TCF_12Rnd_127x40_Mag_JHP",2,12},{"TCF_32Rnd_762x51_Mag_JHP",3,32},{"1Rnd_HEDP_MEU_shell",6,1}}},{"Halo_Rucksack_01",{}},"Stryker_Woodland_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C"} };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			

			class ALiVE_orbatCreator {
				init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class B_StrykerFaction_Radio_Operator_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Radio_Operator_01.JPG";
		displayName = "Radio Operator";

		weapons[] = { "Stryker_MA37","Stryker_M6G","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_MA37","Stryker_M6G","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP" };

		backpack = "Halo_LR";

		ALiVE_orbatCreator_loadout[] = { {"Stryker_MA37","","","Stryker_MA37_Smartlink_Scope",{"OPTRE_32Rnd_762x51_Mag_JHP",32},{},""},{},{"Stryker_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"TCF_12Rnd_127x40_Mag_JHP",8},{},""},{"Stryker_U_Woodland_uniform",{{"OPTRE_Biofoam",1},{"OPTRE_M2_Smoke",4,1},{"OPTRE_M9_Frag",2,1}}},{"MA_TGE_InvisVest",{{"TCF_32Rnd_762x51_Mag_JHP",10,32},{"TCF_12Rnd_127x40_Mag_JHP",2,12}}},{"Halo_LR",{}},"Stryker_Woodland_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C"} };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			

			class ALiVE_orbatCreator {
				init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class B_StrykerFaction_Anti_Tank_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Anti_Tank_01.JPG";
		displayName = "Anti-Tank";

		weapons[] = { "Stryker_MA37","Stryker_M41_SSR","Stryker_M6G","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_MA37","Stryker_M41_SSR","Stryker_M6G","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_M41_Twin_HEAT","TCF_12Rnd_127x40_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_M41_Twin_HEAT","TCF_12Rnd_127x40_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHP","TCF_12Rnd_127x40_Mag_JHP" };

		backpack = "Halo_Rucksack_02";

		ALiVE_orbatCreator_loadout[] = { {"Stryker_MA37","","","Stryker_MA37_Smartlink_Scope",{"OPTRE_32Rnd_762x51_Mag_JHP",32},{},""},{"OPTRE_M41_Twin_HEAT","","","",{"OPTRE_M41_Twin_HEAT",2},{},""},{"Stryker_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"TCF_12Rnd_127x40_Mag_JHP",8},{},""},{"Stryker_U_Woodland_uniform",{{"OPTRE_Biofoam",1},{"OPTRE_M2_Smoke",3,1},{"OPTRE_M9_Frag",2,1}}},{"MA_TGE_InvisVest",{{"TCF_32Rnd_762x51_Mag_JHP",10,32},{"TCF_12Rnd_127x40_Mag_JHP",2,12},{"OPTRE_M41_Twin_AI",1,2}}},{"Halo_Rucksack_02",{{"OPTRE_M41_Twin_HEAT_Thermal",4,2}}},"Stryker_Woodland_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C"} };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			

			class ALiVE_orbatCreator {
				init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class B_StrykerFaction_Team_Lead_01 : B_StrykerFaction_Rifleman_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Team_Lead_01.JPG";
		displayName = "Team Lead";

		weapons[] = { "Stryker_BR55","Stryker_M6G","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_BR55","Stryker_M6G","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP" };

		ALiVE_orbatCreator_loadout[] = { {"Stryker_BR55","","","OPTRE_BR55HB_Scope",{"OPTRE_36Rnd_95x40_Mag_HPSAP",36},{},""},{},{"Stryker_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"TCF_12Rnd_127x40_Mag_JHP",8},{},""},{"Stryker_U_Woodland_uniform",{{"OPTRE_Biofoam",1},{"OPTRE_M2_Smoke",3,1},{"OPTRE_M9_Frag",2,1},{"TCF_36Rnd_95x40_Mag_JHP",7,36}}},{"MA_TGE_InvisVest",{{"TCF_12Rnd_127x40_Mag_JHP",2,12},{"TCF_36Rnd_95x40_Mag_JHP",2,36},{"OPTRE_M9_Frag",2,1},{"SmokeShell",2,1}}},{"Halo_Rucksack_01",{}},"Stryker_Woodland_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C"} };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			

			class ALiVE_orbatCreator {
				init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class B_StrykerFaction_Squad_Leader_01 : B_StrykerFaction_Team_Lead_01 {
		editorPreview = "StrykerUnits\strykerfaction\data\preview\B_StrykerFaction_Squad_Leader_01.JPG";
		displayName = "Squad Leader";

		weapons[] = { "Stryker_BR55","Stryker_M6G","OPTRE_Binoculars" };
		respawnWeapons[] = { "Stryker_BR55","Stryker_M6G","OPTRE_Binoculars" };

		magazines[] = { "OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP" };
		respawnMagazines[] = { "OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_HPSAP","TCF_12Rnd_127x40_Mag_JHP" };

		ALiVE_orbatCreator_loadout[] = { {"Stryker_BR55","","","OPTRE_BR55HB_Scope",{"OPTRE_36Rnd_95x40_Mag_HPSAP",36},{},""},{},{"Stryker_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"TCF_12Rnd_127x40_Mag_JHP",8},{},""},{"Stryker_U_Woodland_uniform",{{"OPTRE_Biofoam",1},{"OPTRE_M2_Smoke",3,1},{"OPTRE_M9_Frag",2,1},{"TCF_36Rnd_95x40_Mag_JHP",7,36}}},{"MA_TGE_InvisVest",{{"TCF_12Rnd_127x40_Mag_JHP",2,12},{"TCF_36Rnd_95x40_Mag_JHP",2,36},{"OPTRE_M9_Frag",2,1},{"SmokeShell",2,1}}},{"Halo_Rucksack_01",{}},"Stryker_Woodland_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVGT_C"} };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			

			class ALiVE_orbatCreator {
				init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

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

