class CfgPatches
{
	class Stryker_Vehicles
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
		units[] = { "Stryker_M12_FAV","Stryker_M12_LAAG","Stryker_M12_TT","Stryker_M12_AA","Stryker_M12_Gauss","Stryker_M914_RV","Stryker_M12_APC_MED","Stryker_M12_APC","Stryker_M12_Rocket","Stryker_M511_Springbok_Transport","Stryker_M511_Springbok_IFV","Stryker_M511_Springbok_MGS","Stryker_M511_Springbok_AA","Stryker_D77_Pelican","Stryker_UH_Falcon","Stryker_MEU_Wombat","Stryker_MEU_Munin_Mk1"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};
class CfgVehicles
{
	//Warthogs
	
	//Rocket
	class OPTRE_M12A1_LRV;
	class Stryker_M12_Rocket : OPTRE_M12A1_LRV {
		displayName = "[Stryker] M12 Rocket";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Cars";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","camo_details","camo_interior","camo_turret","camo_turret_decals","camo_doors" };
		hiddenSelectionsTextures[] = {
			"StrykerVehicles\Textures\Stryker_M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
			"StrykerVehicles\Textures\Stryker_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
		};
	};

	//APC
	class OPTRE_M12_FAV_APC;
	class Stryker_M12_APC : OPTRE_M12_FAV_APC {
		displayName = "[Stryker] M12 APC";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Cars";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","camo_details","camo_interior","camo_transport_details","camo_net" };
		hiddenSelectionsTextures[] = {
			"StrykerVehicles\Textures\Stryker_M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
			"StrykerVehicles\Textures\Stryker_apc_lopo_co.paa",
			"StrykerVehicles\Textures\Stryker_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa" 
		};
	};

	//APC Medical
	class OPTRE_M12_FAV_APC_MED;
	class Stryker_M12_APC_MED : OPTRE_M12_FAV_APC_MED {
		displayName = "[Stryker] M12 APC MED";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Cars";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","camo_details","camo_interior","camo_transport_details","camo_net","camo_medical" };
		hiddenSelectionsTextures[] = {
			"StrykerVehicles\Textures\Stryker_M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
			"StrykerVehicles\Textures\Stryker_apc_lopo_co.paa",
			"StrykerVehicles\Textures\Stryker_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa"
		};
	};

	//Repair
	class OPTRE_M914_RV;
	class Stryker_M914_RV : OPTRE_M914_RV {
		displayName = "[Stryker] M12 Repair";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		transportRepair = 200000000;
		ace_repair_canRepair = 1;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Cars";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","camo_details","camo_interior","camo_net","camo_doors" };
		hiddenSelectionsTextures[] = {
			"StrykerVehicles\Textures\Stryker_M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"StrykerVehicles\Textures\Stryker_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa" 
		};
	};

	//Gauss
	class OPTRE_M12G1_LRV;
	class Stryker_M12_Gauss : OPTRE_M12G1_LRV {
		displayName = "[Stryker] M12 Gauss";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Cars";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","camo_details","camo_interior","camo_doors" };
		hiddenSelectionsTextures[] = {
			"StrykerVehicles\Textures\Stryker_M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m68_turret_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
			"StrykerVehicles\Textures\Stryker_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"StrykerVehicles\Textures\Stryker_apc_lopo_co.paa"
		};
	};

	//AA
	class OPTRE_M12R_AA;
	class Stryker_M12_AA : OPTRE_M12R_AA {
		displayName = "[Stryker] M12 AA";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Cars";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","camo_details","camo_interior","camo_doors" };
		hiddenSelectionsTextures[] = {
			"StrykerVehicles\Textures\Stryker_M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m79_turret_co.paa",
			"StrykerVehicles\Textures\Stryker_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"StrykerVehicles\Textures\Stryker_apc_lopo_co.paa"
		};
	};

	//TT
	class OPTRE_M813_TT;
	class Stryker_M12_TT : OPTRE_M813_TT {
		displayName = "[Stryker] M12 Troop Transport";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Cars";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","camo_details","camo_interior","camo_net","camo_transport_decal" };
		hiddenSelectionsTextures[] = {
			"StrykerVehicles\Textures\Stryker_M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa",
			"StrykerVehicles\Textures\Stryker_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa" 
		};
	};

	//LAAG
	class OPTRE_M12_LRV;
	class Stryker_M12_LAAG : OPTRE_M12_LRV {
		displayName = "[Stryker] M12 LAAG";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Cars";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","camo_details","camo_interior","camo_turret_decal","camo_sight","camo_doors" };
		hiddenSelectionsTextures[] = {
			"StrykerVehicles\Textures\Stryker_M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa",
			"StrykerVehicles\Textures\Stryker_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa",
			"StrykerVehicles\Textures\Stryker_apc_lopo_co.paa"
		};
	};

	//FAV
	class OPTRE_M12_FAV;
	class Stryker_M12_FAV : OPTRE_M12_FAV {
		displayName = "[Stryker] M12 FAV";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Cars";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","camo_details","camo_interior","camo_doors" };
		hiddenSelectionsTextures[] = {
			"StrykerVehicles\Textures\Stryker_M12HogMaav_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"StrykerVehicles\Textures\Stryker_decals_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa",
			"StrykerVehicles\Textures\Stryker_apc_lopo_co.paa"
		};

	};


	//Springbok
	class DMNS_M511_Springbok_APC;
	class Stryker_M511_Springbok_Transport : DMNS_M511_Springbok_APC {
		displayName = "[Stryker] M511-Springbok (Transport)";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Armored";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","clan","clan_text","insignia","_Ammobox","_Axe","_Cans","_FireExtinguisher","_Shovel" };
		hiddenSelectionsTextures[] = { "StrykerVehicles\Textures\Stryker_M511_Body_co.paa","DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa","DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa","DMNS\DMNS_Armour\M511_Springbok\Data\m511_m247h_co.paa"};
	};

	class DMNS_M511_Springbok_MGS;
	class Stryker_M511_Springbok_MGS : DMNS_M511_Springbok_MGS {
		displayName = "[Stryker] M511-Springbok (MGS)";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Armored";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo7","clan","clan_text","insignia","_Ammobox","_Axe","_Cans","_FireExtinguisher","_Shovel" };
		hiddenSelectionsTextures[] = {"StrykerVehicles\Textures\Stryker_M511_Body_co.paa","DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa","DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa","StrykerVehicles\Textures\Stryker_M511_mgs_co.paa"};
	};

	class DMNS_M511_Springbok_IFV;
	class Stryker_M511_Springbok_IFV : DMNS_M511_Springbok_IFV {
		displayName = "[Stryker] M511-Springbok (IFV)";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Armored";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo5","Camo6","clan","clan_text","insignia","_Ammobox","_Axe","_Cans","_FireExtinguisher","_Shovel" };
		hiddenSelectionsTextures[] = { 
			"StrykerVehicles\Textures\Stryker_M511_Body_co.paa",
			"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa",
			"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa",
			"StrykerVehicles\Textures\Stryker_M511_ifv_co.paa",
			"StrykerVehicles\Textures\Stryker_M511_aa_co.paa"
		};
	};

	class DMNS_M511_Springbok_AA;
	class Stryker_M511_Springbok_AA : DMNS_M511_Springbok_AA {
		displayName = "[Stryker] M511-Springbok (AA)";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Armored";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo8","clan","clan_text","insignia","_Ammobox","_Axe","_Cans","_FireExtinguisher","_Shovel" };
		hiddenSelectionsTextures[] = { 
			"StrykerVehicles\Textures\Stryker_M511_Body_co.paa",
			"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa",
			"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa",
			"StrykerVehicles\Textures\Stryker_M511_aa_co.paa"
		};

	};

	//Falcon
	class OPTRE_UNSC_UH_144S_Falcon_DAP;
	class Stryker_UH_Falcon : OPTRE_UNSC_UH_144S_Falcon_DAP {
		displayName = "[Stryker] UH-144";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Rotary";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelections[] = { "camo1","camo2","camo3","camoGlass","camoGlassPilot","camoDecal" };
		hiddenSelectionsTextures[] = { "StrykerVehicles\Textures\Stryker_falcon_main_co.paa","StrykerVehicles\Textures\Stryker_falcon_attachments_co.paa","\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa","\optre_vehicles_air\falcon\data\falcon_glass_ca.paa","\optre_vehicles_air\falcon\data\falcon_glass_ca.paa","\optre_vehicles_air\falcon\data\decal\unsc_var2\falcon_decal_ca.paa" };
	};

	//Pelican
	class Splits_UNSC_D77_TC_Pelican;
	class Stryker_D77_Pelican : Splits_UNSC_D77_TC_Pelican {
		displayName = "[Stryker] D77-TC Pelican";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Rotary";
		crew = "B_StrykerFaction_Rifleman_01";
		hiddenSelectionsTextures[] = { "StrykerVehicles\Textures\Stryker_body_co.paa", "StrykerVehicles\Textures\Stryker_wings_and_gear_co.paa", "Splits\Splits_Vehicles\Pelican\data\H2_General\weaponry_co.paa" };
	};

	//Wombat Drone
	class Turrets;
	class MainTurret;
	class OPTRE_Wombat_Base;
	class Stryker_MEU_Wombat : OPTRE_Wombat_Base
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soldner";
		displayName = "[Stryker] Hugin Drone";
		fuelCapacity = 2000;
		fuelConsumptionRate = 0.01;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Drones";
		altFullForce = 2500;
		altNoForce = 5000;
		maxHeight = 2500;
		avgHeight = 1250;
		radarTargetSize = 0.01;
		class Components;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
			};
		};
	};

	//Quadcopter Drone
	class Man;
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ITC_Land_Unpack
				{
					class ITC_Land_Unpack_AR2_B;
					class Stryker_MEU_Unpack_Munin
					{
						displayName = "[Stryker] Munin Drone";
						condition = "'Stryker_MEU_Munin_Drone_Item' in (items _player)";
						statement = "['Stryker_MEU_Munin_Drone_Item',_player] call itc_land_packable_fnc_unPack";
						priority = 1;
						showDisabled = 1;
						exceptions[] = { "isNotInside","isNotSitting" };
						enableInside = 0;
					};
				};
			};
		};
	};
	class Turrets;
	class MainTurret;
	class assembleInfo;
	class ViewOptics;
	class Air;
	class Helicopter : Air
	{
		class ACE_Actions
		{
			class ACE_MainActions {};
		};
		class Turrets
		{
			class MainTurret;
		};
	};
	class Helicopter_Base_F : Helicopter
	{
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions {};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret {};
		};
	};
	class UAV_01_base_F : Helicopter_Base_F
	{
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions {};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret {};
		};
	};
	class Stryker_MEU_Munin_Mk1 : UAV_01_base_F
	{
		author = "Soldner";
		displayName = "[Stryker] Munin Drone";
		fuelCapacity = 2000;
		fuelConsumptionRate = 0.01;
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Drones";
		radarTargetSize = 0.01;
		altFullForce = 2500;
		altNoForce = 5000;
		maxHeight = 2500;
		avgHeight = 1250;
		scope = 2;
		scopeCurator = 2;
		side = 1;
		itc_land_PacksTo = "Stryker_MEU_Munin_Drone_Item";
		class Viewoptics : ViewOptics
		{
			minFov = 0.01;
			maxFov = 1.25;
			initFov = 1;
			visionMode[] = { "Normal","Ti" };
			thermalMode[] = { 0,1 };
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
		crew = "B_UAV_AI";
		typicalCargo[] = { "B_UAV_AI" };
		accuracy = 0.5;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		hiddenSelectionsTextures[] = { "StrykerVehicles\Textures\Munin_Drone.paa" };
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions
			{
				class ITC_Land_PackDarter
				{
					displayName = "Repack UAV";
					condition = "((alive _target) && ( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_packable_fnc_Pack";
				};
			};
		};
	};
};
class CfgWeapons
{
	class ITC_Land_UAV_Packed_base;
	class Stryker_MEU_Munin_Drone_Item : ITC_Land_UAV_Packed_base
	{
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayName = "[Stryker] Munin Drone";
		itc_land_unPacksTo = "Stryker_MEU_Munin_Mk1";
	};
};