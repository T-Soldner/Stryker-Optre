class CfgPatches
{
	class Stryker_UNSC_Marine
	{
		author = "Soldner";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","OPTRE_Core"};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class Stryker_Helmets
		{
			label = "Stryker Helmets";
			author = "Soldner";
			options[] = {"camo","role","visor"};
			class camo
			{
				alwaysSelectable = 1;
				label = "Camo";
				values[] = {"urban","arid","woodland"};
				class urban
				{
					label = "Urban";
				};
				class arid
				{
					label = "Arid";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"base","rto","corpsman"};
				class base
				{
					label = "Base";
				};
				class rto
				{
					label = "RTO";
				};
				class corpsman
				{
					label = "Corpsman";
				};
			};
			class visor
			{
				alwaysSelectable = 1;
				label = "Visor";
				values[] = {"no","yes"};
				class no
				{
					label = "No";
				};
				class yes
				{
					label = "Yes";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Stryker_Woodland_NV_Helmet
		{
			model = "Stryker_Helmets";
			camo = "woodland";
			role = "base";
			visor = "no";
		};
		class Stryker_Woodland_Helmet
		{
			model = "Stryker_Helmets";
			camo = "woodland";
			role = "base";
			visor = "yes";
		};
		class Stryker_Woodland_Corpsman_NV_Helmet
		{
			model = "Stryker_Helmets";
			camo = "woodland";
			role = "corpsman";
			visor = "no";
		};
		class Stryker_Woodland_Corpsman_Helmet
		{
			model = "Stryker_Helmets";
			camo = "woodland";
			role = "corpsman";
			visor = "yes";
		};
		class Stryker_Woodland_RTO_NV_Helmet
		{
			model = "Stryker_Helmets";
			camo = "woodland";
			role = "rto";
			visor = "no";
		};
		class Stryker_Woodland_RTO_Helmet
		{
			model = "Stryker_Helmets";
			camo = "woodland";
			role = "rto";
			visor = "yes";
		};
		class Stryker_Urban_NV_Helmet
		{
			model = "Stryker_Helmets";
			camo = "urban";
			role = "base";
			visor = "no";
		};
		class Stryker_Urban_Helmet
		{
			model = "Stryker_Helmets";
			camo = "urban";
			role = "base";
			visor = "yes";
		};
		class Stryker_Urban_Corpsman_NV_Helmet
		{
			model = "Stryker_Helmets";
			camo = "urban";
			role = "corpsman";
			visor = "no";
		};
		class Stryker_Urban_Corpsman_Helmet
		{
			model = "Stryker_Helmets";
			camo = "urban";
			role = "corpsman";
			visor = "yes";
		};
		class Stryker_Urban_RTO_NV_Helmet
		{
			model = "Stryker_Helmets";
			camo = "urban";
			role = "rto";
			visor = "no";
		};
		class Stryker_Urban_RTO_Helmet
		{
			model = "Stryker_Helmets";
			camo = "urban";
			role = "rto";
			visor = "yes";
		};
		class Stryker_Arid_NV_Helmet
		{
			model = "Stryker_Helmets";
			camo = "arid";
			role = "base";
			visor = "no";
		};
		class Stryker_Arid_Helmet
		{
			model = "Stryker_Helmets";
			camo = "arid";
			role = "base";
			visor = "yes";
		};
		class Stryker_Arid_Corpsman_NV_Helmet
		{
			model = "Stryker_Helmets";
			camo = "arid";
			role = "corpsman";
			visor = "no";
		};
		class Stryker_Arid_Corpsman_Helmet
		{
			model = "Stryker_Helmets";
			camo = "arid";
			role = "corpsman";
			visor = "yes";
		};
		class Stryker_Arid_RTO_NV_Helmet
		{
			model = "Stryker_Helmets";
			camo = "arid";
			role = "rto";
			visor = "no";
		};
		class Stryker_Arid_RTO_Helmet
		{
			model = "Stryker_Helmets";
			camo = "arid";
			role = "rto";
			visor = "yes";
		};
	};
};
class cfgWeapons
{
	class HaloInf_Marine_WDL_NV_headgear;
	class HaloInf_Marine_WDL_headgear;
	class Stryker_Woodland_NV_Helmet: HaloInf_Marine_WDL_NV_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (NV)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_green_unsc_co.paa"};
	};
	class Stryker_Woodland_Helmet: HaloInf_Marine_WDL_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_green_unsc_co.paa"};
	};
	class Stryker_Woodland_Corpsman_NV_Helmet: HaloInf_Marine_WDL_NV_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Corpsman/NV)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1","_Visor"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_green_unscM_co.paa"};
	};
	class Stryker_Woodland_Corpsman_Helmet: HaloInf_Marine_WDL_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Corpsman)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_green_unscM_co.paa"};
	};
	class Stryker_Woodland_RTO_NV_Helmet: HaloInf_Marine_WDL_NV_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (RTO/NV)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1","_Visor"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_green_unscR_co.paa"};
	};
	class Stryker_Woodland_RTO_Helmet: HaloInf_Marine_WDL_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (RTO)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_green_unscR_co.paa"};
	};
	class Stryker_Urban_NV_Helmet: HaloInf_Marine_WDL_NV_headgear
	{
		author = "Soldner";
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (NV)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Helmet.paa"};
	};
	class Stryker_Urban_Helmet: HaloInf_Marine_WDL_headgear
	{
		author = "Soldner";
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Helmet.paa"};
	};
	class Stryker_Urban_Corpsman_NV_Helmet: HaloInf_Marine_WDL_NV_headgear
	{
		author = "Soldner";
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Corpsman/NV)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1","_Visor"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Corpsman_Helmet.paa"};
	};
	class Stryker_Urban_Corpsman_Helmet: HaloInf_Marine_WDL_headgear
	{
		author = "Soldner";
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Corpsman)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Corpsman_Helmet.paa"};
	};
	class Stryker_Urban_RTO_NV_Helmet: HaloInf_Marine_WDL_NV_headgear
	{
		author = "Soldner";
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (RTO/NV)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1","_Visor"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_RTO_Helmet.paa"};
	};
	class Stryker_Urban_RTO_Helmet: HaloInf_Marine_WDL_headgear
	{
		author = "Soldner";
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (RTO)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_RTO_Helmet.paa"};
	};
	class Stryker_Arid_NV_Helmet: HaloInf_Marine_WDL_NV_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (NV)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_tan_co.paa"};
	};
	class Stryker_Arid_Helmet: HaloInf_Marine_WDL_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_tan_co.paa"};
	};
	class Stryker_Arid_Corpsman_NV_Helmet: HaloInf_Marine_WDL_NV_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Corpsman/NV)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1","_Visor"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_tan_unscM_co.paa"};
	};
	class Stryker_Arid_Corpsman_Helmet: HaloInf_Marine_WDL_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Corpsman)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_tan_unscM_co.paa"};
	};
	class Stryker_Arid_RTO_NV_Helmet: HaloInf_Marine_WDL_NV_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (RTO/NV)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1","_Visor"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_tan_unscR_co.paa"};
	};
	class Stryker_Arid_RTO_Helmet: HaloInf_Marine_WDL_headgear
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (RTO)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_tan_unscR_co.paa"};
	};
};
class cfgMods
{
	author = "Soldner";
	timepacked = "1702303137";
};
