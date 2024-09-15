class CfgPatches
{
	class StrykerWeapons
	{
		author = "Soldner";
		hideName = 0;
		units[] = {};
		weapons[] = { "Stryker_Soldner_BR55","Stryker_Sabbath_M392_DMR","Stryker_Ishra_M90A","Stryker_Havoc_M392_DMR","Stryker_Oser_BR55"};
		magazines[]=
		{
			"Stryker_200Rnd_95x40_Box_JHP",
			"Stryker_200Rnd_95x40_Box_JHPT",
			"Stryker_200Rnd_95x40_Box_JHPT8",
			"Stryker_200Rnd_95x40_Box_HPSAP",
			"Stryker_200Rnd_95x40_Box_HPSAPT",
			"Stryker_200Rnd_95x40_Box_HPSAPT8",
			"Stryker_200Rnd_95x40_Box_SS",
			"Stryker_200Rnd_95x40_Box_SST",
			"Stryker_200Rnd_95x40_Box_SST8",
			"Stryker_100Rnd_95x40_Box_JHP",
			"Stryker_100Rnd_95x40_Box_JHPT",
			"Stryker_100Rnd_95x40_Box_JHPT8",
			"Stryker_100Rnd_95x40_Box_HPSAP",
			"Stryker_100Rnd_95x40_Box_HPSAPT",
			"Stryker_100Rnd_95x40_Box_HPSAPT8",
			"Stryker_100Rnd_95x40_Box_SS",
			"Stryker_100Rnd_95x40_Box_SST",
			"Stryker_100Rnd_95x40_Box_SST8",
			"Stryker_4Rnd_145x114_HVAP_Mag",
			"Stryker_4Rnd_145x114_APFSDS_Mag"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"Stryker_Core",
			"TCF_MUNITIONS",
			"OPTRE_Weapons"
		};
	};
};

//ace arsenal stuff

class XtdGearModels
{
	class CfgWeapons
	{
		class Stryker_personal_weapons
		{
			label = "Stryker Personal Weapons";
			options[] = {"type"};
			class type
			{
				alwaysSelectable = 1;
				label = "Owner";
				values[] = {"Soldner","Sabbath","Ishra","Havoc","Wizard"};
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
			};
		};
	};		
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Stryker_Soldner_BR55
		{
			model = "Stryker_personal_weapons";
			type = "Soldner";
		};
		class Stryker_Sabbath_M392_DMR
		{
			model = "Stryker_personal_weapons";
			type = "Sabbath";
		};
		class Stryker_Ishra_M90A
		{
			model = "Stryker_personal_weapons";
			type = "Ishra";
		};
		class Stryker_Havoc_M392_DMR
		{
			model = "Stryker_personal_weapons";
			type = "Havoc";
		};
		class Stryker_Oser_BR55
		{
			model = "Stryker_personal_weapons";
			type = "Wizard";
		};
	};
};


class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class UnderBarrelSlot_rail;

class CfgWeapons
{
	//Soldner BR55
	class OPTRE_BR55;
	class Stryker_Soldner_BR55 : OPTRE_BR55
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		baseWeapon = "Stryker_Soldner_BR55";
		displayName = "[Stryker] Soldner's BR55";
		scope = 2;
		scopearsenal = 2;
		canShootInWater = 1;
		magazineWell[] += {"MEU_rifle_uw"};
		magazines[] = { ,"OPTRE_36Rnd_95x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_HPSAP" };
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Soldner_br55_1_co.paa","StrykerWeapons\data\Soldner_br55_2_co.paa" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "MEU_REC_HOLO_MEU","MEU_REC_HOLO_DMR","MEU_REC_HOLO_Gre_DMR","MEU_REC_HOLO_RED_DMR" };
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = {"optre_ma5suppressor"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "OPTRE_BMR_Laser","optre_m45_flashlight"};
			};
			class UnderBarrelSlot_rail : UnderBarrelSlot_rail
			{
				compatibleitems[] = {"OPTRE_BR45Grip"};
			};
		};
	};
	
	class Stryker_Oser_BR55 : OPTRE_BR55
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		baseWeapon = "Stryker_Oser_BR55";
		displayName = "[Stryker] Oser's BR55";
		scope = 2;
		scopearsenal = 2;
		canShootInWater = 1;
		magazineWell[] += {"MEU_rifle_uw"};
		magazines[] = { "OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_JHP","OPTRE_36Rnd_95x40_Mag_JHPT","OPTRE_36Rnd_95x40_Mag_HPSAP","OPTRE_36Rnd_95x40_Mag_HPSAPT","OPTRE_36Rnd_95x40_Mag_SS" };
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Oser_br55_1_co.paa","StrykerWeapons\data\Oser_br55_2_co.paa" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "MEU_REC_HOLO_RED_DMR" };
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

	//Sabbath M392 DMR
	class OPTRE_M392_DMR;
	class Stryker_Sabbath_M392_DMR : OPTRE_M392_DMR
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		baseWeapon = "Stryker_Sabbath_M392_DMR";
		scope = 2;
		scopearsenal = 2;
		displayName = "Sabbath's M392 DMR";
		canShootInWater = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"StrykerWeapons\data\sabbath_M392_CO.paa"};
		magazines[] += {"OPTRE_15Rnd_762x51_Mag", "OPTRE_15Rnd_762x51_Mag_Tracer", "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow", "OPTRE_15Rnd_762x51_Mag_AP", "OPTRE_15Rnd_762x51_Mag_APT", "OPTRE_15Rnd_762x51_Mag_JHP", "OPTRE_15Rnd_762x51_Mag_JHPT", "OPTRE_15Rnd_762x51_Mag_SS", "OPTRE_15Rnd_762x51_Mag_SST", "OPTRE_15Rnd_762x51_Mag_FS", "OPTRE_15Rnd_762x51_Mag_FST", "OPTRE_15Rnd_DMR_762x51_Mag_AP", "OPTRE_15Rnd_DMR_762x51_Mag_APT", "OPTRE_15Rnd_DMR_762x51_Mag_JHP", "OPTRE_15Rnd_DMR_762x51_Mag_JHPT", "OPTRE_15Rnd_DMR_762x51_Mag_SS", "OPTRE_15Rnd_DMR_762x51_Mag_SST", "OPTRE_15Rnd_DMR_762x51_Mag_FS", "OPTRE_15Rnd_DMR_762x51_Mag_FST"};
		class WeaponSlotsInfo
		{
			mass = 40;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_65_TI_blk_F","OPTRE_MA5Suppressor","OPTRE_MA37KSuppressor"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M12_Optic","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_BR45_Scope","MEU_REC_HOLO_DMR","MEU_REC_HOLO_Gre_DMR","MEU_REC_HOLO_RED_DMR" };
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"acc_pointer_IR","optre_m45_flashlight_red","optre_bmr_laser"};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	//Havoc M392
	class Stryker_Havoc_M392_DMR : OPTRE_M392_DMR
	{
		dlc = "Stryker Aux Mod";
		author = "Soldner";
		baseWeapon = "Stryker_Havoc_M392_DMR";
		scope = 2;
		scopearsenal = 2;
		displayName = "Havoc's M392 DMR";
		canShootInWater = 1;
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\havoc_M392_CO.paa" };
		magazines[] += {"OPTRE_15Rnd_762x51_Mag", "OPTRE_15Rnd_762x51_Mag_Tracer", "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow", "OPTRE_15Rnd_762x51_Mag_AP", "OPTRE_15Rnd_762x51_Mag_APT", "OPTRE_15Rnd_762x51_Mag_JHP", "OPTRE_15Rnd_762x51_Mag_JHPT", "OPTRE_15Rnd_762x51_Mag_SS", "OPTRE_15Rnd_762x51_Mag_SST", "OPTRE_15Rnd_762x51_Mag_FS", "OPTRE_15Rnd_762x51_Mag_FST", "OPTRE_15Rnd_DMR_762x51_Mag_AP", "OPTRE_15Rnd_DMR_762x51_Mag_APT", "OPTRE_15Rnd_DMR_762x51_Mag_JHP", "OPTRE_15Rnd_DMR_762x51_Mag_JHPT", "OPTRE_15Rnd_DMR_762x51_Mag_SS", "OPTRE_15Rnd_DMR_762x51_Mag_SST", "OPTRE_15Rnd_DMR_762x51_Mag_FS", "OPTRE_15Rnd_DMR_762x51_Mag_FST"};
		class WeaponSlotsInfo
		{
			mass = 40;
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
				compatibleitems[] = {};
			};
		};
	};
	//Ishra's M90
	class OPTRE_M90A;
	class Stryker_Ishra_M90A : OPTRE_M90A
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		displayName = "M90A CAWS Shotgun";
		baseWeapon = "Stryker_Ishra_M90A";
		canShootInWater = 1;
		scope = 2;
		scopearsenal = 2;
		magazines[] = { "Meu_6Rnd_8Gauge_Super_Incendiary" };
		magazineWell[] = { "MEU_shotgun_uw","MEU_Shotgun_Mags" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "muzzle_snds_h_mg_blk_f","muzzle_snds_l","optre_ma5suppressor","optre_m7_silencer","optre_m6_silencer","ace_muzzle_mzls_b","muzzle_snds_b","OPTRE_MA37KSuppressor","muzzle_snds_65_TI_blk_F","OPTRE_srs99d_suppressor","OPTRE_srs99d_suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "OPTRE_M7_Flashlight","OPTRE_M7_Laser","OPTRE_M7_Vis_Red_Laser","OPTRE_BMR_Laser","OPTRE_BMR_MEQ_Flashlight","OPTRE_BMR_Vis_Red_Laser","optre_m12_laser","OPTRE_M12_Vis_Red_Laser","OPTRE_M12_Flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M6C_Laser","OPTRE_M6C_Vis_Red_Laser","OPTRE_M6C_Flashlight","OPTRE_M6G_Laser","OPTRE_M6G_Vis_Red_Laser","OPTRE_M6G_Flashlight","acc_pointer_ir","acc_flashlight","ace_acc_pointer_green","acc_pointer_vis_red","MEU_M12_Vis_Laser","MEU_BMR_Vis_Laser","MEU_M7_Vis_Laser","MEU_M6G_Laser" };
			};
		};
		hiddenSelections[] = { "camo","camo_reticle" };
		hiddenSelectionsTextures[] = { "StrykerWeapons\data\Ishra_m90_co.paa","#(argb,8,8,3)color(0.945098,0.215686,0.215686,1.0,co)"};
	};
};

class CfgMagazineWells
{
	class MEU_AR_95x40
	{
		rnd200_mags_reskin[]=
		{
			"Stryker_200Rnd_95x40_Box_JHP",
			"Stryker_200Rnd_95x40_Box_JHPT",
			"Stryker_200Rnd_95x40_Box_JHPT8",
			"Stryker_200Rnd_95x40_Box_HPSAP",
			"Stryker_200Rnd_95x40_Box_HPSAPT",
			"Stryker_200Rnd_95x40_Box_HPSAPT8",
			"Stryker_200Rnd_95x40_Box_SS",
			"Stryker_200Rnd_95x40_Box_SST",
			"Stryker_200Rnd_95x40_Box_SST8"
		};
		rnd100_mags_reskin[]=
		{
			"Stryker_100Rnd_95x40_Box_JHP",
			"Stryker_100Rnd_95x40_Box_JHPT",
			"Stryker_100Rnd_95x40_Box_JHPT8",
			"Stryker_100Rnd_95x40_Box_HPSAP",
			"Stryker_100Rnd_95x40_Box_HPSAPT",
			"Stryker_100Rnd_95x40_Box_HPSAPT8",
			"Stryker_100Rnd_95x40_Box_SS",
			"Stryker_100Rnd_95x40_Box_SST",
			"Stryker_100Rnd_95x40_Box_SST8"
		};
	};
	
	class OPTRE_Magwell_M73
	{
		rnd200_mags_reskin[]=
		{
			"Stryker_200Rnd_95x40_Box_JHP",
			"Stryker_200Rnd_95x40_Box_JHPT",
			"Stryker_200Rnd_95x40_Box_JHPT8",
			"Stryker_200Rnd_95x40_Box_HPSAP",
			"Stryker_200Rnd_95x40_Box_HPSAPT",
			"Stryker_200Rnd_95x40_Box_HPSAPT8",
			"Stryker_200Rnd_95x40_Box_SS",
			"Stryker_200Rnd_95x40_Box_SST",
			"Stryker_200Rnd_95x40_Box_SST8"
		};
		rnd100_mags_reskin[]=
		{
			"Stryker_100Rnd_95x40_Box_JHP",
			"Stryker_100Rnd_95x40_Box_JHPT",
			"Stryker_100Rnd_95x40_Box_JHPT8",
			"Stryker_100Rnd_95x40_Box_HPSAP",
			"Stryker_100Rnd_95x40_Box_HPSAPT",
			"Stryker_100Rnd_95x40_Box_HPSAPT8",
			"Stryker_100Rnd_95x40_Box_SS",
			"Stryker_100Rnd_95x40_Box_SST",
			"Stryker_100Rnd_95x40_Box_SST8"
		};
	}
	
	class OPTRE_Magwell_SRS99D {
		sniper_no_tracers[]=
		{
			"Stryker_4Rnd_145x114_HVAP_Mag",
			"Stryker_4Rnd_145x114_APFSDS_Mag"
		};
	};

	class OPTRE_Magwell_M392_DMR {
		stryker_M392[] =
		{
			"Stryker_Havoc_15Rnd_762x51_Mag"
		};
	};
};

class CfgMagazines
{
	// BEGIN autogen

	class OPTRE_200Rnd_95x40_Box_Tracer;
	class Stryker_200Rnd_95x40_Box_HPSAPT: OPTRE_200Rnd_95x40_Box_Tracer {
		displayname="200rd 9.5x40mm HP-SAP Box Magazine (Tracers/*)";
		descriptionShort="200rd 9.5x40mm HP-SAP Box Magazine (Tracers/*)";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_200_hpsapt_co.paa"};
	};

	class OPTRE_200Rnd_95x40_Box_Tracer;
	class Stryker_200Rnd_95x40_Box_HPSAPT8: OPTRE_200Rnd_95x40_Box_Tracer {
		displayname="200rd 9.5x40mm HP-SAP Box Magazine (Tracers/8)";
		descriptionShort="200rd 9.5x40mm HP-SAP Box Magazine (Tracers/8)";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_200_hpsapt8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class OPTRE_200Rnd_95x40_Box;
	class Stryker_200Rnd_95x40_Box_HPSAP: OPTRE_200Rnd_95x40_Box {
		displayname="200rd 9.5x40mm HP-SAP Box Magazine";
		descriptionShort="200rd 9.5x40mm HP-SAP Box Magazine";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_200_hpsap_co.paa"};
	};

	class OPTRE_100Rnd_95x40_Box_Tracer;
	class Stryker_100Rnd_95x40_Box_HPSAPT: OPTRE_100Rnd_95x40_Box_Tracer {
		displayname="100rd 9.5x40mm HP-SAP Box Magazine (Tracers/*)";
		descriptionShort="100rd 9.5x40mm HP-SAP Box Magazine (Tracers/*)";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_100_hpsapt_co.paa"};
	};

	class OPTRE_100Rnd_95x40_Box_Tracer;
	class Stryker_100Rnd_95x40_Box_HPSAPT8: OPTRE_100Rnd_95x40_Box_Tracer {
		displayname="100rd 9.5x40mm HP-SAP Box Magazine (Tracers/8)";
		descriptionShort="100rd 9.5x40mm HP-SAP Box Magazine (Tracers/8)";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_100_hpsapt8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class OPTRE_100Rnd_95x40_Box;
	class Stryker_100Rnd_95x40_Box_HPSAP: OPTRE_100Rnd_95x40_Box {
		displayname="100rd 9.5x40mm HP-SAP Box Magazine";
		descriptionShort="100rd 9.5x40mm HP-SAP Box Magazine";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_100_hpsap_co.paa"};
	};

	class TCF_200Rnd_95x40_Box_JHPT;
	class Stryker_200Rnd_95x40_Box_JHPT: TCF_200Rnd_95x40_Box_JHPT {
		displayname="200rd 9.5x40mm JHP Box Magazine (Tracers/*)";
		descriptionShort="200rd 9.5x40mm JHP Box Magazine (Tracers/*)";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_200_jhpt_co.paa"};
	};

	class TCF_200Rnd_95x40_Box_JHPT;
	class Stryker_200Rnd_95x40_Box_JHPT8: TCF_200Rnd_95x40_Box_JHPT {
		displayname="200rd 9.5x40mm JHP Box Magazine (Tracers/8)";
		descriptionShort="200rd 9.5x40mm JHP Box Magazine (Tracers/8)";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_200_jhpt8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class TCF_200Rnd_95x40_Box_JHP;
	class Stryker_200Rnd_95x40_Box_JHP: TCF_200Rnd_95x40_Box_JHP {
		displayname="200rd 9.5x40mm JHP Box Magazine";
		descriptionShort="200rd 9.5x40mm JHP Box Magazine";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_200_jhp_co.paa"};
	};

	class TCF_100Rnd_95x40_Box_JHPT;
	class Stryker_100Rnd_95x40_Box_JHPT: TCF_100Rnd_95x40_Box_JHPT {
		displayname="100rd 9.5x40mm JHP Box Magazine (Tracers/*)";
		descriptionShort="100rd 9.5x40mm JHP Box Magazine (Tracers/*)";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_100_jhpt_co.paa"};
	};

	class TCF_100Rnd_95x40_Box_JHPT;
	class Stryker_100Rnd_95x40_Box_JHPT8: TCF_100Rnd_95x40_Box_JHPT {
		displayname="100rd 9.5x40mm JHP Box Magazine (Tracers/8)";
		descriptionShort="100rd 9.5x40mm JHP Box Magazine (Tracers/8)";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_100_jhpt8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class TCF_100Rnd_95x40_Box_JHP;
	class Stryker_100Rnd_95x40_Box_JHP: TCF_100Rnd_95x40_Box_JHP {
		displayname="100rd 9.5x40mm JHP Box Magazine";
		descriptionShort="100rd 9.5x40mm JHP Box Magazine";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_100_jhp_co.paa"};
	};

	class TCF_200Rnd_95x40_Box_SST;
	class Stryker_200Rnd_95x40_Box_SST: TCF_200Rnd_95x40_Box_SST {
		displayname="200rd 9.5x40mm SS Box Magazine (Tracers/*)";
		descriptionShort="200rd 9.5x40mm SS Box Magazine (Tracers/*)";
		
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_200_sst_co.paa"};
	};

	class TCF_200Rnd_95x40_Box_SST;
	class Stryker_200Rnd_95x40_Box_SST8: TCF_200Rnd_95x40_Box_SST {
		displayname="200rd 9.5x40mm SS Box Magazine (Tracers/8)";
		descriptionShort="200rd 9.5x40mm SS Box Magazine (Tracers/8)";
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_200_sst8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class TCF_200Rnd_95x40_Box_SS;
	class Stryker_200Rnd_95x40_Box_SS: TCF_200Rnd_95x40_Box_SS {
		displayname="200rd 9.5x40mm SS Box Magazine";
		descriptionShort="200rd 9.5x40mm SS Box Magazine";
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_200_ss_co.paa"};
	};

	class TCF_100Rnd_95x40_Box_SST;
	class Stryker_100Rnd_95x40_Box_SST: TCF_100Rnd_95x40_Box_SST {
		displayname="100rd 9.5x40mm SS Box Magazine (Tracers/*)";
		descriptionShort="100rd 9.5x40mm SS Box Magazine (Tracers/*)";
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_100_sst_co.paa"};
	};

	class TCF_100Rnd_95x40_Box_SST;
	class Stryker_100Rnd_95x40_Box_SST8: TCF_100Rnd_95x40_Box_SST {
		displayname="100rd 9.5x40mm SS Box Magazine (Tracers/8)";
		descriptionShort="100rd 9.5x40mm SS Box Magazine (Tracers/8)";
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_100_sst8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class TCF_100Rnd_95x40_Box_SS;
	class Stryker_100Rnd_95x40_Box_SS: TCF_100Rnd_95x40_Box_SS {
		displayname="100rd 9.5x40mm SS Box Magazine";
		descriptionShort="100rd 9.5x40mm SS Box Magazine";
		picture="StrykerWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"StrykerWeapons\data\Ammo\95x40_100_ss_co.paa"};
	};
	
	// END autogen
	
	
	// sniper ammo
	class OPTRE_4Rnd_145x114_APFSDS_Mag;
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
	};
};