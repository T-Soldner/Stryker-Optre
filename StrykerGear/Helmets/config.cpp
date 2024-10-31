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
					label = "Marine";
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
				values[] = { "Soldner","Havoc","Saunder","Marshall","Fangirl","Reject","Greene","Ishra","Ksiazek","Sabbath","Aturr","Timber"};
				class Soldner
				{
					label = "Soldner";
				};
				class Havoc
				{
					label = "Havoc";
				};
				class Saunder
				{
					label = "Saunder";
				};
				class Marshall
				{
					label = "Marshall";
				};
				class Fangirl
				{
					label = "Fangirl";
				};
				class Reject
				{
					label = "Reject";
				};
				class Greene
				{
					label = "Greene";
				};
				class Ishra
				{
					label = "Ishra";
				};
				class Ksiazek
				{
					label = "Ksiazek";
				};
				class Sabbath
				{
					label = "Sabbath";
				};
				class Aturr
				{
					label = "Aturr";
				};
				class Timber
				{
					label = "Timber";
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

		//Saunder
		class Saunder_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Saunder";
			visor = "no";
		};
		class Saunder_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Saunder";
			visor = "yes";
		};
		class Saunder_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Saunder";
			visor = "no";
		};
		class Saunder_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Saunder";
			visor = "yes";
		};
		class Saunder_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Saunder";
			visor = "no";
		};
		class Saunder_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Saunder";
			visor = "yes";
		};

		//Marshall
		class Marshall_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Marshall";
			visor = "no";
		};
		class Marshall_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Marshall";
			visor = "yes";
		};
		class Marshall_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Marshall";
			visor = "no";
		};
		class Marshall_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Marshall";
			visor = "yes";
		};
		class Marshall_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Marshall";
			visor = "no";
		};
		class Marshall_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Marshall";
			visor = "yes";
		};

		//Fangirl
		class Fangirl_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Fangirl";
			visor = "no";
		};
		class Fangirl_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Fangirl";
			visor = "yes";
		};
		class Fangirl_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Fangirl";
			visor = "no";
		};
		class Fangirl_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Fangirl";
			visor = "yes";
		};
		class Fangirl_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Fangirl";
			visor = "no";
		};
		class Fangirl_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Fangirl";
			visor = "yes";
		};

		//Reject
		class Reject_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Reject";
			visor = "no";
		};
		class Reject_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Reject";
			visor = "yes";
		};
		class Reject_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Reject";
			visor = "no";
		};
		class Reject_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Reject";
			visor = "yes";
		};
		class Reject_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Reject";
			visor = "no";
		};
		class Reject_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Reject";
			visor = "yes";
		};

		//Greene
		class Greene_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Greene";
			visor = "no";
		};
		class Greene_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Greene";
			visor = "yes";
		};
		class Greene_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Greene";
			visor = "no";
		};
		class Greene_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Greene";
			visor = "yes";
		};
		class Greene_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Greene";
			visor = "no";
		};
		class Greene_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Greene";
			visor = "yes";
		};

		//Ishra
		class Ishra_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Ishra";
			visor = "no";
		};
		class Ishra_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Ishra";
			visor = "yes";
		};
		class Ishra_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Ishra";
			visor = "no";
		};
		class Ishra_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Ishra";
			visor = "yes";
		};
		class Ishra_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Ishra";
			visor = "no";
		};
		class Ishra_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Ishra";
			visor = "yes";
		};

		//Ksiazek
		class Ksiazek_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Ksiazek";
			visor = "no";
		};
		class Ksiazek_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Ksiazek";
			visor = "yes";
		};
		class Ksiazek_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Ksiazek";
			visor = "no";
		};
		class Ksiazek_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Ksiazek";
			visor = "yes";
		};
		class Ksiazek_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Ksiazek";
			visor = "no";
		};
		class Ksiazek_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Ksiazek";
			visor = "yes";
		};

		//Sabbath
		class Sabbath_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Sabbath";
			visor = "no";
		};
		class Sabbath_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Sabbath";
			visor = "yes";
		};
		class Sabbath_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Sabbath";
			visor = "no";
		};
		class Sabbath_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Sabbath";
			visor = "yes";
		};
		class Sabbath_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Sabbath";
			visor = "no";
		};
		class Sabbath_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Sabbath";
			visor = "yes";
		};

		//Aturr
		class Aturr_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Aturr";
			visor = "no";
		};
		class Aturr_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Aturr";
			visor = "yes";
		};
		class Aturr_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Aturr";
			visor = "no";
		};
		class Aturr_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Aturr";
			visor = "yes";
		};
		class Aturr_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Aturr";
			visor = "no";
		};
		class Aturr_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Aturr";
			visor = "yes";
		};

		//Timber
		class Timber_Woodland_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Timber";
			visor = "no";
		};
		class Timber_Woodland_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "woodland";
			owner = "Timber";
			visor = "yes";
		};
		class Timber_Urban_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Timber";
			visor = "no";
		};
		class Timber_Urban_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "urban";
			owner = "Timber";
			visor = "yes";
		};
		class Timber_Arid_NV_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Timber";
			visor = "no";
		};
		class Timber_Arid_Helmet
		{
			model = "Stryker_Custom_Helmets";
			camo = "arid";
			owner = "Timber";
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
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Soldner/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Urban_Helmet.paa" };
	};
	class Soldner_Urban_Helmet : Stryker_Base_helmet
	{
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
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Havoc/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Havoc_Urban_Helmet.paa" };
	};
	class Havoc_Urban_Helmet : Stryker_Base_helmet
	{
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

	//Saunder
	class Saunder_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Saunder/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Saunder_Woodland_Helmet.paa" };
	};
	class Saunder_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Saunder)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Saunder_Woodland_Helmet.paa" };
	};
	class Saunder_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Saunder/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Saunder_Urban_Helmet.paa" };
	};
	class Saunder_Urban_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Saunder)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Saunder_Urban_Helmet.paa" };
	};
	class Saunder_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Saunder/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Saunder_Arid_Helmet.paa" };
	};
	class Saunder_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Saunder)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Saunder_Arid_Helmet.paa" };
	};

	//Marshall
	class Marshall_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Marshall/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Marshall_Woodland_Helmet.paa" };
	};
	class Marshall_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Marshall)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Marshall_Woodland_Helmet.paa" };
	};
	class Marshall_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Marshall/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Marshall_Urban_Helmet.paa" };
	};
	class Marshall_Urban_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Marshall)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Marshall_Urban_Helmet.paa" };
	};
	class Marshall_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Marshall/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Marshall_Arid_Helmet.paa" };
	};
	class Marshall_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Marshall)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Marshall_Arid_Helmet.paa" };
	};

	//Fangirl
	class Fangirl_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Fangirl/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Fangirl_Woodland_Helmet.paa" };
	};
	class Fangirl_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Fangirl)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Fangirl_Woodland_Helmet.paa" };
	};
	class Fangirl_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Fangirl/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Fangirl_Urban_Helmet.paa" };
	};
	class Fangirl_Urban_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Fangirl)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Fangirl_Urban_Helmet.paa" };
	};
	class Fangirl_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Fangirl/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Fangirl_Arid_Helmet.paa" };
	};
	class Fangirl_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Fangirl)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Fangirl_Arid_Helmet.paa" };
	};

	//Reject
	class Reject_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Reject/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Reject_Woodland_Helmet.paa" };
	};
	class Reject_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Reject)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Reject_Woodland_Helmet.paa" };
	};
	class Reject_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Reject/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Reject_Urban_Helmet.paa" };
	};
	class Reject_Urban_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Reject)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Reject_Urban_Helmet.paa" };
	};
	class Reject_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Reject/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Reject_Arid_Helmet.paa" };
	};
	class Reject_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Reject)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Reject_Arid_Helmet.paa" };
	};

	//Greene
	class Greene_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Greene/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Greene_Woodland_Helmet.paa" };
	};
	class Greene_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Greene)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Greene_Woodland_Helmet.paa" };
	};
	class Greene_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Greene/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Greene_Urban_Helmet.paa" };
	};
	class Greene_Urban_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Greene)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Greene_Urban_Helmet.paa" };
	};
	class Greene_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Greene/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Greene_Arid_Helmet.paa" };
	};
	class Greene_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Greene)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Greene_Arid_Helmet.paa" };
	};

	//Ishra
	class Ishra_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Ishra/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ishra_Woodland_Helmet.paa" };
	};
	class Ishra_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Ishra)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ishra_Woodland_Helmet.paa" };
	};
	class Ishra_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Ishra/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ishra_Urban_Helmet.paa" };
	};
	class Ishra_Urban_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Ishra)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ishra_Urban_Helmet.paa" };
	};
	class Ishra_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Ishra/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ishra_Arid_Helmet.paa" };
	};
	class Ishra_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Ishra)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ishra_Arid_Helmet.paa" };
	};

	//Ksiazek
	class Ksiazek_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Ksiazek/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ksiazek_Woodland_Helmet.paa" };
	};
	class Ksiazek_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Ksiazek)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ksiazek_Woodland_Helmet.paa" };
	};
	class Ksiazek_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Ksiazek/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ksiazek_Urban_Helmet.paa" };
	};
	class Ksiazek_Urban_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Ksiazek)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ksiazek_Urban_Helmet.paa" };
	};
	class Ksiazek_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Ksiazek/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ksiazek_Arid_Helmet.paa" };
	};
	class Ksiazek_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Ksiazek)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ksiazek_Arid_Helmet.paa" };
	};

	//Sabbath
	class Sabbath_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Sabbath/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Sabbath_Woodland_Helmet.paa" };
	};
	class Sabbath_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Sabbath)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Sabbath_Woodland_Helmet.paa" };
	};
	class Sabbath_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Sabbath/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Sabbath_Urban_Helmet.paa" };
	};
	class Sabbath_Urban_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Sabbath)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Sabbath_Urban_Helmet.paa" };
	};
	class Sabbath_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Sabbath/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Sabbath_Arid_Helmet.paa" };
	};
	class Sabbath_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Sabbath)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Sabbath_Arid_Helmet.paa" };
	};

	//Aturr
	class Aturr_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Aturr/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Aturr_Woodland_Helmet.paa" };
	};
	class Aturr_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Aturr)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Aturr_Woodland_Helmet.paa" };
	};
	class Aturr_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Aturr/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Aturr_Urban_Helmet.paa" };
	};
	class Aturr_Urban_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Aturr)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Aturr_Urban_Helmet.paa" };
	};
	class Aturr_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Aturr/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Aturr_Arid_Helmet.paa" };
	};
	class Aturr_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Aturr)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Aturr_Arid_Helmet.paa" };
	};

	//Timber
	class Timber_Woodland_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Timber/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Timber_Woodland_Helmet.paa" };
	};
	class Timber_Woodland_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Woodland CH252 (Timber)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Timber_Woodland_Helmet.paa" };
	};
	class Timber_Urban_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Timber/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Timber_Urban_Helmet.paa" };
	};
	class Timber_Urban_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Urban CH252 (Timber)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Timber_Urban_Helmet.paa" };
	};
	class Timber_Arid_NV_Helmet : Stryker_Base_NV_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Timber/NV)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Timber_Arid_Helmet.paa" };
	};
	class Timber_Arid_Helmet : Stryker_Base_helmet
	{
		scope = 2;
		displayName = "[Stryker] UNSC Arid CH252 (Timber)";
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Timber_Arid_Helmet.paa" };
	};
};
