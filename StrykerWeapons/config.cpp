class CfgPatches
{
	class Stryker_Weapons
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

//ace arsenal stuff

class XtdGearModels
{
	class CfgWeapons
	{
		class Stryker_Base_Weapons {
			label = "Stryker MOS Weapons";
			options[] = { "type" };
			class type {
				alwaysSelectable = 1;
				label = "Type";
				values[] = { "MA37","MA37GL","GPMG","M392","M90A","BR55" };
				class MA37
				{
					label = "MA37";
				};
				class MA37GL
				{
					label = "MA37 GL";
				};
				class GPMG
				{
					label = "M247";
				};
				class M392
				{
					label = "M392";
				};
				class M90A
				{
					label = "M90A";
				};
				class BR55
				{
					label = "BR55";
				};
			};
		};
		class Stryker_Sidearms {
			label = "Stryker Sidearms";
			options[] = { "type" };
			class type {
				alwaysSelectable = 1;
				label = "Type";
				values[] = { "M6G","M7" };
				class M6G
				{
					label = "M6G";
				};
				class M7
				{
					label = "M7 Folded";
				};
			};
		};
		class Stryker_personal_weapons	{
			label = "Stryker Personal Weapons";
			options[] = {"type"};
			class type
			{
				alwaysSelectable = 1;
				label = "Owner";
				values[] = { "Soldner","Sabbath","Ishra","Havoc","Wizard","Aturr","Grimshaw","Lancer" };
				class Soldner
				{
					label = "Soldner";
				};
				class Sabbath
				{
					label = "Sabbath";
				};
				class Ishra
				{
					label = "Ishra";
				};
				class Havoc
				{
					label = "Havoc";
				};
				class Wizard
				{
					label = "Wizard";
				};
				class Aturr
				{
					label = "Aturr";
				};
				class Grimshaw
				{
					label = "Grimshaw";
				};
				class Lancer
				{
					label = "Lancer";
				};
			};
		};
	};		
};
class XtdGearInfos
{
	class CfgWeapons
	{
		//Stryker MOS
		class Stryker_MA37 {
			model = "Stryker_Base_Weapons";
			type = "MA37";
		};
		class Stryker_MA37GL {
			model = "Stryker_Base_Weapons";
			type = "MA37GL";
		};
		class Stryker_M247 {
			model = "Stryker_Base_Weapons";
			type = "GPMG";
		};
		class Stryker_M392_DMR {
			model = "Stryker_Base_Weapons";
			type = "M392";
		};
		class Stryker_M90A {
			model = "Stryker_Base_Weapons";
			type = "M90A";
		};
		class Stryker_BR55 {
			model = "Stryker_Base_Weapons";
			type = "BR55";
		};

		//Sidearms
		class Stryker_M6G {
			model = "Stryker_Sidearms";
			type = "M6G";
		};
		class Stryker_M7_Folded {
			model = "Stryker_Sidearms";
			type = "M7";
		};

		//customs
		class Stryker_Soldner_BR55 {
			model = "Stryker_personal_weapons";
			type = "Soldner";
		};
		class Stryker_Sabbath_M392_DMR {
			model = "Stryker_personal_weapons";
			type = "Sabbath";
		};
		class Stryker_Ishra_M90A {
			model = "Stryker_personal_weapons";
			type = "Ishra";
		};
		class Stryker_Havoc_M392_DMR {
			model = "Stryker_personal_weapons";
			type = "Havoc";
		};
		class Stryker_Oser_BR55 {
			model = "Stryker_personal_weapons";
			type = "Wizard";
		};
		class Stryker_Aturr_BR55 {
			model = "Stryker_personal_weapons";
			type = "Aturr";
		};
		class Stryker_Grimshaw_MA37 {
			model = "Stryker_personal_weapons";
			type = "Grimshaw";
		};
		class Stryker_Lancer_MA37 {
			model = "Stryker_personal_weapons";
			type = "Lancer";
		};
	};
};

class WeaponSlotsInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class UnderBarrelSlot_rail;
class InventoryOpticsItem_Base_F;

class CfgWeapons
{
	//Optre inherits
	class OPTRE_MA37;
	class OPTRE_MA37GL;
	class OPTRE_M247;
	class OPTRE_BR55;
	class OPTRE_M392_DMR;
	class OPTRE_M90A;
	class OPTRE_MA37_Smartlink_Scope;
	class OPTRE_M41_SSR;
	class OPTRE_M6G;
	class OPTRE_M7_Folded;

	//4x Scope
	class Stryker_MA37_Smartlink_Scope : OPTRE_MA37_Smartlink_Scope
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		displayName = "4x Smart Link Scope";
		descriptionShort = "4x Smart Linked Scope";
		model = "OPTRE_Weapons\AR\MA37_2x_Scope.p3d";
		inertia = 0.1;
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 4;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class MA37_Irons
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = { "" };
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 600;
					discreteDistance[] = { 100,200,300,400,500,600 };
					discreteDistanceInitIndex = 0;
				};
				class MA37_Sight : MA37_Irons
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.0525;
					opticsZoomInit = 0.125;
					discretefov[] = { 0.125,0.0525 };
					discreteinitIndex = 0;
					discreteDistance[] = { 100,300,400,500,600,700,800,900,1000 };
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "eye";
					modelOptics[] = { "\OPTRE_Weapons\smg\M7_Optic_2x.p3d","\OPTRE_Weapons\smg\M7_Optic_4x.p3d" };
					visionMode[] = { "Normal","NVG","TI"};
				};
			};
		};
	};

	//Stryker MOS Weapons
	//MA37
	class Stryker_MA37 : OPTRE_MA37
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		displayName = "[Stryker] MA37 ICWS Assault Rifle";
		baseWeapon = "Stryker_MA37";
		magazineWell[] = { "MEU_rifle_uw" };
		magazines[] = { "OPTRE_32Rnd_762x51_Mag_UW","OPTRE_32Rnd_762x51_Mag_AP","OPTRE_32Rnd_762x51_Mag_APT","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHPT"};
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Stryker_ma37_co.paa","StrykerWeapons\data\Stryker_ammocounter37_co.paa" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot {
				compatibleitems[] = { "OPTRE_MA37_Smartlink_Scope","Stryker_MA37_Smartlink_Scope"};
			};
			class MuzzleSlot : MuzzleSlot {
				compatibleitems[] = { "optre_ma5suppressor" };
			};
			class PointerSlot : PointerSlot {
				compatibleitems[] = { "OPTRE_M7_Flashlight","OPTRE_M7_Laser","OPTRE_BMR_Laser","optre_m12_laser","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M6C_Laser","OPTRE_M6G_Laser","acc_pointer_ir","ace_acc_pointer_green","MEU_M6G_Laser" };
			};
			class UnderBarrelSlot_rail : UnderBarrelSlot_rail {
				compatibleitems[] = {};
			};
		};
		class FlashLight{};
	};
	class Stryker_MA37_ai : Stryker_MA37
	{
		_generalMacro = "Stryker_MA37_ai";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_MA37_Smartlink_Scope";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "optre_bmr_laser";
			};
		};
	};

	//MA37GL
	class Stryker_MA37GL : OPTRE_MA37GL
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		displayName = "[Stryker] MA37 + M301 GL Assault Rifle";
		baseWeapon = "Stryker_MA37GL";
		magazineWell[] = { "MEU_rifle_uw" };
		magazines[] = { "OPTRE_32Rnd_762x51_Mag_UW","OPTRE_32Rnd_762x51_Mag_AP","OPTRE_32Rnd_762x51_Mag_APT","OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHPT" };
		hiddenSelections[] = { "camo","camo1"/*,"camo2","camo3","camo_reticle"*/ };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Stryker_ma37_co.paa","StrykerWeapons\data\Stryker_ammocounter37_co.paa"/*,"optre_weapons\ar\data\smartlink_co.paa","optre_weapons\ar\data\cover_co.paa","optre_weapons\ar\data\r_ar_ca.paa"*/ };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot {
				compatibleitems[] = { "OPTRE_MA37_Smartlink_Scope","Stryker_MA37_Smartlink_Scope" };
			};
			class MuzzleSlot : MuzzleSlot {
				compatibleitems[] = { "optre_ma5suppressor" };
			};
			class PointerSlot : PointerSlot {
				compatibleitems[] = { "OPTRE_M7_Flashlight","OPTRE_M7_Laser","OPTRE_BMR_Laser","optre_m12_laser","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M6C_Laser","OPTRE_M6G_Laser","acc_pointer_ir","ace_acc_pointer_green","MEU_M6G_Laser" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
		class FlashLight {};
	};
	class Stryker_MA37GL_ai : Stryker_MA37GL
	{
		_generalMacro = "Stryker_MA37GL_ai";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_MA37_Smartlink_Scope";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "optre_bmr_laser";
			};
		};
	};
	
	//GPMG
	class Stryker_M247: OPTRE_M247 {
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		baseWeapon = "Stryker_M247";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[Stryker] M247 General Purpose Machine Gun";
		magazines[] = { "MEU_100Rnd_762x51_AP_HV_Box","MEU_400Rnd_762x51_AP_HV_Box"};
		magazineWell[] = { "MEU_rifle_uw" };
		baseWeapon = "OPTRE_M247";
		hiddenSelections[] = { "mainbody1","mainbody2","stock" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Stryker_M247_mainbody1_CO.paa","StrykerWeapons\data\Stryker_M247_mainbody2_CO.paa","StrykerWeapons\data\Stryker_M247_stock_CO.paa" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "MEU_OPTRE_M250_Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "MEU_REC_HOLO","MEU_REC_HOLO_Red","MEU_REC_HOLO_Gre","MEU_REC_HOLO_Desert","MEU_REC_HOLO_UNSC","MEU_REC_HOLO_Snow","MEU_REC_HOLO_MEU","MEU_Evo_Sight","MEU_Evo_Sight_Riser","optic_Yorris","optic_DMS","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_MRCO","optic_Arco","optic_Arco_ghex_F","optic_Arco_blk_F","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Hamr_khk_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","optic_ico_01_black_f","OPTRE_BR45_Scope","Decimator_Test_Optic","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","xm250_scope" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "OPTRE_BMR_Laser","OPTRE_BMR_MEQ_Flashlight","OPTRE_BMR_Vis_Red_Laser","optre_m45_flashlight","acc_pointer_ir","acc_flashlight" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_f_blk","bipod_02_f_blk","bipod_03_f_blk" };
			};
		};
	};
	class Stryker_M247_ai : Stryker_M247
	{
		_generalMacro = "Stryker_M247_ai";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "xm250_scope";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "optre_bmr_laser";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_f_blk";
			};
		};
	};

	//M392
	class Stryker_M392_DMR : OPTRE_M392_DMR
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		baseWeapon = "Stryker_M392_DMR";
		displayName = "[Stryker] M392";
		scope = 2;
		scopearsenal = 2;
		canShootInWater = 1;
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Stryker_M392_CO.paa" };
		magazines[] = { "OPTRE_15Rnd_DMR_762x51_Mag_AP", "OPTRE_15Rnd_DMR_762x51_Mag_APT", "OPTRE_15Rnd_DMR_762x51_Mag_JHP", "OPTRE_15Rnd_DMR_762x51_Mag_JHPT"};
		magazineWell[] = { "MEU_marksmen_uw" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "muzzle_snds_65_TI_blk_F","OPTRE_MA5Suppressor","OPTRE_MA37KSuppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M12_Optic","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_BR45_Scope","MEU_REC_HOLO_DMR","MEU_REC_HOLO_Gre_DMR","MEU_REC_HOLO_RED_DMR" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "acc_pointer_IR","optre_m45_flashlight_red","optre_bmr_laser" };
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk" };
			};
		};
	};
	class Stryker_M392_DMR_ai : Stryker_M392_DMR
	{
		_generalMacro = "Stryker_M392_DMR_ai";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M393_Scope";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "optre_bmr_laser";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_f_blk";
			};
		};
	};

	//M90
	class Stryker_M90A : OPTRE_M90A
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		displayName = "[Stryker] M90A";
		baseWeapon = "Stryker_M90A";
		canShootInWater = 1;
		scope = 2;
		scopearsenal = 2;
		magazines[] = {"OPTRE_12Rnd_8Gauge_Pellet","OPTRE_12Rnd_8Gauge_Slug","OPTRE_12Rnd_8Gauge_Beanbag","OPTRE_12Rnd_8Gauge_Incendiary" };
		magazineWell[] = { "MEU_shotgun_uw" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = {};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "OPTRE_BMR_Laser","OPTRE_BMR_MEQ_Flashlight","optre_m12_laser","OPTRE_M12_Flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M6C_Flashlight","OPTRE_M6G_Laser","acc_pointer_ir","acc_flashlight","ace_acc_pointer_green" };
			};
		};
		hiddenSelections[] = { "camo","camo_reticle" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Stryker_m90_co.paa","#(argb,8,8,3)color(0.945098,0.215686,0.215686,1.0,co)" };
	};
	class Stryker_M90A_ai : Stryker_M90A
	{
		_generalMacro = "Stryker_M90A_ai";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "optre_m45_flashlight";
			};
		};
	};

	//BR55
	class Stryker_BR55 : OPTRE_BR55 {
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		baseWeapon = "Stryker_BR55";
		displayName = "[Stryker] BR55";
		scope = 2;
		scopearsenal = 2;
		canShootInWater = 1;
		magazineWell[] = {"MEU_rifle_uw"};
		magazines[] = { "OPTRE_36Rnd_95x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_JHPT","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAPT" };
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Stryker_br55_1_co.paa","StrykerWeapons\data\Stryker_br55_2_co.paa" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M12_Optic","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_BR45_Scope","MEU_REC_HOLO_DMR","MEU_REC_HOLO_Gre_DMR","MEU_REC_HOLO_RED_DMR" };
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "optre_ma5suppressor" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "OPTRE_BMR_Laser","optre_m45_flashlight" };
			};
			class UnderBarrelSlot_rail : UnderBarrelSlot_rail
			{
				compatibleitems[] = { "OPTRE_BR45Grip" };
			};
		};
	};
	class Stryker_BR55_ai : Stryker_BR55
	{
		_generalMacro = "Stryker_BR55_ai";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "MEU_REC_HOLO_DMR";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "optre_bmr_laser";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "OPTRE_BR45Grip";
			};
		};
	};

	//SPNKR
	class Stryker_M41_SSR : OPTRE_M41_SSR
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		scope = 2;
		scopeArsenal = 2;
		displayname = "[Stryker] M41 SSR";
		baseWeapon = "Stryker_M41_SSR";
		hiddenSelections[] = { "camo","camo_tubes","camo_details" };
		hiddenSelectionsTextures[] = { "optre_weapons\rockets\data\launcher_co.paa","optre_weapons\rockets\data\tubes_co.paa","StrykerWeapons\data\logos_ca.paa" };
	};

	//M6G
	class Stryker_M6G : OPTRE_M6G
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Stryker_M6G_CO.paa" };
		displayName = "[Stryker] M6G Magnum";
		magazines[] = { "TCF_12Rnd_127x40_Mag_NARQ","TCF_12Rnd_127x40_Mag_JHP","TCF_12Rnd_127x40_Mag_AP","TCF_12Rnd_127x40_Mag_JHPT","TCF_12Rnd_127x40_Mag_APT" };
		magazineWell[] = {};
		baseWeapon = "Stryker_M6G";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot : CowsSlot {
				compatibleitems[] = { "OPTRE_M6G_Scope" };
			};
			class MuzzleSlot : MuzzleSlot {
				compatibleitems[] = { "OPTRE_M6_silencer" };
			};
			class PointerSlot : PointerSlot {
				compatibleitems[] = { "OPTRE_M6G_Flashlight" };
			};
			class UnderBarrelSlot : UnderBarrelSlot {
				compatibleitems[] = {};
			};
		};
	};
	class Stryker_M6G_ai : Stryker_M6G
	{
		_generalMacro = "Stryker_M6G_ai";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M6G_Scope";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6G_Flashlight";
			};
		};
	};

	//Folded M7
	class Stryker_M7_Folded : OPTRE_M7_Folded
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		displayName = "[Stryker] M7 (Folded)";
		baseWeapon = "Stryker_M7_Folded";
		magazines[] = { "MEU_60Rnd_5x23mm_Mag_JHP","MEU_60Rnd_5x23mm_Mag_JHPT","MEU_60Rnd_5x23mm_Mag_AP","MEU_60Rnd_5x23mm_Mag_APT" };
		magazineWell[] = { "MEU_smg_uw" };
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Stryker_m7_co.paa","OPTRE_Weapons\smg\data\m7_magazine_co.paa" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot : CowsSlot {
				compatibleitems[] = { "OPTRE_M7_Sight" };
			};
			class MuzzleSlot : MuzzleSlot {
				compatibleitems[] = { "OPTRE_M7_silencer" };
			};
			class PointerSlot : PointerSlot {
				compatibleitems[] = { "OPTRE_M7_Flashlight","OPTRE_M7_Laser" };
			};
			class UnderBarrelSlot : UnderBarrelSlot {
				compatibleitems[] = {};
			};
		};
	};

	//Custom Weapons
	//Ksiazek MA37
	
	//Soldner BR55
	class Stryker_Soldner_BR55 : Stryker_BR55
	{
		baseWeapon = "Stryker_Soldner_BR55";
		displayName = "[Stryker] Soldner's BR55";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Soldner_br55_1_co.paa","StrykerWeapons\data\Soldner_br55_2_co.paa" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "MEU_REC_HOLO_DMR" };
			};
		};
	};

	//Oser BR55
	class Stryker_Oser_BR55 : Stryker_BR55
	{
		baseWeapon = "Stryker_Oser_BR55";
		displayName = "[Stryker] Oser's BR55";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Oser_br55_1_co.paa","StrykerWeapons\data\Oser_br55_2_co.paa" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "MEU_REC_HOLO_RED_DMR","MEU_REC_HOLO_DMR" };
			};
		};
	};

	//Aturr BR55
	class Stryker_Aturr_BR55 : Stryker_BR55
	{
		baseWeapon = "Stryker_Aturr_BR55";
		displayName = "[Stryker] Aturr's BR55";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Aturr_br55_1_co.paa","StrykerWeapons\data\Aturr_br55_2_co.paa" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "MEU_REC_HOLO_DMR","MEU_REC_HOLO_DMR","optic_Nightstalker" };
			};
		};
	};

	//Sabbath M392 DMR
	class Stryker_Sabbath_M392_DMR : Stryker_M392_DMR
	{
		baseWeapon = "Stryker_Sabbath_M392_DMR";
		displayName = "[Stryker] Sabbath's M392";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"StrykerWeapons\data\sabbath_M392_CO.paa"};
	};

	//Havoc M392
	class Stryker_Havoc_M392_DMR : Stryker_M392_DMR
	{
		baseWeapon = "Stryker_Havoc_M392_DMR";
		displayName = "[Stryker] Havoc's M392";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\havoc_M392_CO.paa" };
	};

	//Ishra's M90
	class Stryker_Ishra_M90A : Stryker_M90A
	{
		displayName = "[Stryker] Ishra's M90A";
		baseWeapon = "Stryker_Ishra_M90A";
		hiddenSelections[] = { "camo","camo_reticle" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Ishra_m90_co.paa","#(argb,8,8,3)color(0.945098,0.215686,0.215686,1.0,co)"};
	};

	//Grimshaw MA37
	class Stryker_Grimshaw_MA37 : Stryker_MA37
	{
		baseWeapon = "Stryker_Grimshaw_MA37";
		displayName = "[Stryker] Grimshaw's MA37";
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Grimshaw_ma37_co.paa","StrykerWeapons\data\Grimshaw_ammocounter37_co.paa" };
	};

	//Grimshaw MA37
	class Stryker_Lancer_MA37 : Stryker_MA37
	{
		baseWeapon = "Stryker_Lancer_MA37";
		displayName = "[Stryker] Lancer's MA37";
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Lancer_ma37_co.paa","StrykerWeapons\data\Lancer_ammocounter37_co.paa" };
	};
};

class CfgMagazineWells
{
	//Add stuff to already existing magazineWells here
};

class CfgMagazines
{
	// sniper ammo
	/*class OPTRE_4Rnd_145x114_APFSDS_Mag;
	class OPTRE_4Rnd_145x114_HVAP_Mag;
	
	class Stryker_4Rnd_145x114_HVAP_Mag : OPTRE_4Rnd_145x114_APFSDS_Mag {
		displayname="4Rnd 14.5x114mm HVAP Magazine (C/No Tracers)";
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	
	class Stryker_4Rnd_145x114_APFSDS_Mag : OPTRE_4Rnd_145x114_APFSDS_Mag {
		displayname="4Rnd 14.5x114mm APFSDS Magazine (C/No Tracers)";
		tracersEvery=0;
		lastRoundsTracer=0;
	};*/
};