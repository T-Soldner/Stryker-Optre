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
				class woodland
				{
					label = "Woodland";
				};
				class urban
				{
					label = "Urban";
				};
				class arid
				{
					label = "Arid";
				};
			};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"base","corpsman"};
				class base
				{
					label = "Base";
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
		class Stryker_Custom_Helmets
		{
			label = "Stryker Custom Helmets";
			author = "Soldner";
			options[] = { "camo","owner","visor" };
			class camo
			{
				alwaysSelectable = 1;
				label = "Camo";
				values[] = { "urban","arid","woodland" };
				class woodland
				{
					label = "Woodland";
				};
				class urban
				{
					label = "Urban";
				};
				class arid
				{
					label = "Arid";
				};
			};
			class owner
			{
				alwaysSelectable = 1;
				label = "Owner";
				values[] = { "Soldner","Havoc"};
				class Soldner
				{
					label = "Soldner";
				};
				class Havoc
				{
					label = "Havoc";
				};
			};
			class visor
			{
				alwaysSelectable = 1;
				label = "Visor";
				values[] = { "no","yes" };
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
		//Customs
		//Soldner
		class Soldner_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Soldner";
			visor = "no";
		};
		class Soldner_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Soldner";
			visor = "yes";
		};
		class Soldner_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Soldner";
			visor = "no";
		};
		class Soldner_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Soldner";
			visor = "yes";
		};
		class Soldner_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Soldner";
			visor = "no";
		};
		class Soldner_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Soldner";
			visor = "yes";
		};
		//Havoc
		class Havoc_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Havoc";
			visor = "no";
		};
		class Havoc_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Havoc";
			visor = "yes";
		};
		class Havoc_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Havoc";
			visor = "no";
		};
		class Havoc_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Havoc";
			visor = "yes";
		};
		class Havoc_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Havoc";
			visor = "no";
		};
		class Havoc_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Havoc";
			visor = "yes";
		};
	};
};
class cfgWeapons
{
	class HaloInf_Marine_WDL_NV_headgear;
	class HaloInf_Marine_WDL_headgear;
	class Stryker_Base_helmet : HaloInf_Marine_WDL_headgear {
		author = "Soldner";
		scope = 1;
		displayName = "[Stryker] Base";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
	};
	class Stryker_Base_NV_helmet : HaloInf_Marine_WDL_NV_headgear {
		author = "Soldner";
		scope = 1;
		displayName = "[Stryker] Base (NV)";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
	};
	class Stryker_Woodland_NV_Helmet: Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (NV)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Helmet.paa" };
	};
	class Stryker_Woodland_Helmet: Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Helmet.paa" };
	};
	class Stryker_Woodland_Corpsman_NV_Helmet: Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Corpsman/NV)";
		hiddenSelections[] = {"Camo1","_Visor"};
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Corpsman_Helmet.paa" };
	};
	class Stryker_Woodland_Corpsman_Helmet: Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Corpsman)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Corpsman_Helmet.paa" };
	};
	class Stryker_Urban_NV_Helmet: Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (NV)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Helmet.paa"};
	};
	class Stryker_Urban_Helmet: Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Helmet.paa"};
	};
	class Stryker_Urban_Corpsman_NV_Helmet: Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Corpsman/NV)";
		hiddenSelections[] = {"Camo1","_Visor"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Corpsman_Helmet.paa"};
	};
	class Stryker_Urban_Corpsman_Helmet: Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Corpsman)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Corpsman_Helmet.paa"};
	};
	class Stryker_Arid_NV_Helmet: Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (NV)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Helmet.paa" };
	};
	class Stryker_Arid_Helmet: Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Helmet.paa" };
	};
	class Stryker_Arid_Corpsman_NV_Helmet: Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Corpsman/NV)";
		hiddenSelections[] = {"Camo1","_Visor"};
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Corpsman_Helmet.paa" };
	};
	class Stryker_Arid_Corpsman_Helmet: Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Corpsman)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Corpsman_Helmet.paa" };
	};

	//Custom Helmets
	//Soldner
	class Soldner_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Soldner/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Woodland_Helmet.paa" };
	};
	class Soldner_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Soldner)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Woodland_Helmet.paa" };
	};
	class Soldner_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		author = "Soldner";
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Soldner/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Urban_Helmet.paa" };
	};
	class Soldner_Urban_Helmet : Stryker_Base_helmet
	{
		author = "Soldner";
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Soldner)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Urban_Helmet.paa" };
	};
	class Soldner_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Soldner/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Arid_Helmet.paa" };
	};
	class Soldner_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Soldner)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Arid_Helmet.paa" };
	};

	//Havoc
	class Havoc_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Havoc/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Havoc_Woodland_Helmet.paa" };
	};
	class Havoc_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Havoc)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Havoc_Woodland_Helmet.paa" };
	};
	class Havoc_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		author = "Havoc";
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Havoc/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Havoc_Urban_Helmet.paa" };
	};
	class Havoc_Urban_Helmet : Stryker_Base_helmet
	{
		author = "Havoc";
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Havoc)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Havoc_Urban_Helmet.paa" };
	};
	class Havoc_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Havoc/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Havoc_Arid_Helmet.paa" };
	};
	class Havoc_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Havoc)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Havoc_Arid_Helmet.paa" };
	};
};
