class CfgPatches
{
	class Stryker_Gear_Uniforms
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
class XtdGearModels
{
	class CfgWeapons
	{
		class Stryker_Uniforms
		{
			label = "Stryker Uniforms";
			author = "Soldner";
			options[] = {"squad","camo","role"};
			class squad {
				alwaysSelectable = 1;
				label = "Squad";
				values[] = {"oneA","oneOne","oneTwo","base"};
				class oneA
				{
					label = "1-A";
				};
				class oneOne
				{
					label = "1-1";
				};
				class oneTwo
				{
					label = "1-2";
				};
				class base
				{
					label = "Unassigned";
				};
			};
			class camo
			{
				alwaysSelectable = 1;
				label = "Camo";
				values[] = {"woodland","urban","arid"};
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
		};
		class Stryker_Custom_Uniforms
		{
			label = "Stryker Customs";
			author = "Soldner";
			options[] = { "camo","owner" };
			class camo
			{
				alwaysSelectable = 1;
				label = "Camo";
				values[] = { "woodland","urban","arid" };
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
				values[] = { "Soldner","Havoc","Saunder","Fangirl","Marshall","Timber","Reject","Wolf","Milkshake","Vyke","Aturr","Ksiazek" };
				class Soldner {
					label = "Soldner";
				};
				class Havoc {
					label = "Havoc";
				};
				class Saunder {
					label = "Saunder";
				};
				class Fangirl {
					label = "Fangirl";
				};
				class Marshall {
					label = "Marshall";
				};
				class Timber {
					label = "Timber";
				};
				class Reject {
					label = "Reject";
				};
				class Wolf {
					label = "Wolf";
				};
				class Milkshake {
					label = "Milkshake";
				};
				class Vyke {
					label = "Vyke";
				};
				class Aturr {
					label = "Aturr";
				};
				class Ksiazek {
					label = "Ksiazek";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Stryker_U_Woodland_uniform
		{
			model = "Stryker_Uniforms";
			squad = "base";
			camo = "woodland";
			role = "base";
		};
		class Stryker_U_Woodland_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "base";
			camo = "woodland";
			role = "corpsman";
		};
		class Stryker_U_Urban_uniform
		{
			model = "Stryker_Uniforms";
			squad = "base";
			camo = "urban";
			role = "base";
		};
		class Stryker_U_Urban_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "base";
			camo = "urban";
			role = "corpsman";
		};
		class Stryker_U_Arid_uniform
		{
			model = "Stryker_Uniforms";
			squad = "base";
			camo = "arid";
			role = "base";
		};
		class Stryker_U_Arid_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "base";
			camo = "arid";
			role = "corpsman";
		};
		class Stryker_U_oneA_Woodland_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneA";
			camo = "woodland";
			role = "base";
		};
		class Stryker_U_oneA_Woodland_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneA";
			camo = "woodland";
			role = "corpsman";
		};
		class Stryker_U_oneA_Urban_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneA";
			camo = "urban";
			role = "base";
		};
		class Stryker_U_oneA_Urban_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneA";
			camo = "urban";
			role = "corpsman";
		};
		class Stryker_U_oneA_Arid_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneA";
			camo = "arid";
			role = "base";
		};
		class Stryker_U_oneA_Arid_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneA";
			camo = "arid";
			role = "corpsman";
		};
		class Stryker_U_oneOne_Woodland_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneOne";
			camo = "woodland";
			role = "base";
		};
		class Stryker_U_oneOne_Woodland_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneOne";
			camo = "woodland";
			role = "corpsman";
		};
		class Stryker_U_oneOne_Urban_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneOne";
			camo = "urban";
			role = "base";
		};
		class Stryker_U_oneOne_Urban_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneOne";
			camo = "urban";
			role = "corpsman";
		};
		class Stryker_U_oneOne_Arid_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneOne";
			camo = "arid";
			role = "base";
		};
		class Stryker_U_oneOne_Arid_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneOne";
			camo = "arid";
			role = "corpsman";
		};
		class Stryker_U_oneTwo_Woodland_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneTwo";
			camo = "woodland";
			role = "base";
		};
		class Stryker_U_oneTwo_Woodland_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneTwo";
			camo = "woodland";
			role = "corpsman";
		};
		class Stryker_U_oneTwo_Urban_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneTwo";
			camo = "urban";
			role = "base";
		};
		class Stryker_U_oneTwo_Urban_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneTwo";
			camo = "urban";
			role = "corpsman";
		};
		class Stryker_U_oneTwo_Arid_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneTwo";
			camo = "arid";
			role = "base";
		};
		class Stryker_U_oneTwo_Arid_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneTwo";
			camo = "arid";
			role = "corpsman";
		};

		//custom uniform/armor
		//Soldner
		class Stryker_U_Soldner_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Soldner";
		};
		class Stryker_U_Soldner_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Soldner";
		};
		class Stryker_U_Soldner_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Soldner";
		};

		//Havoc
		class Stryker_U_Havoc_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Havoc";
		};
		class Stryker_U_Havoc_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Havoc";
		};
		class Stryker_U_Havoc_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Havoc";
		};

		//Saunder
		class Stryker_U_Saunder_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Saunder";
		};
		class Stryker_U_Saunder_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Saunder";
		};
		class Stryker_U_Saunder_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Saunder";
		};

		//Fangirl
		class Stryker_U_Fangirl_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Fangirl";
		};
		class Stryker_U_Fangirl_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Fangirl";
		};
		class Stryker_U_Fangirl_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Fangirl";
		};

		//Marshall
		class Stryker_U_Marshall_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Marshall";
		};
		class Stryker_U_Marshall_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Marshall";
		};
		class Stryker_U_Marshall_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Marshall";
		};

		//Timber
		class Stryker_U_Timber_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Timber";
		};
		class Stryker_U_Timber_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Timber";
		};
		class Stryker_U_Timber_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Timber";
		};

		//Reject
		class Stryker_U_Reject_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Reject";
		};
		class Stryker_U_Reject_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Reject";
		};
		class Stryker_U_Reject_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Reject";
		};

		//Wolf
		class Stryker_U_Wolf_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Wolf";
		};
		class Stryker_U_Wolf_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Wolf";
		};
		class Stryker_U_Wolf_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Wolf";
		};

		//Milkshake
		class Stryker_U_Milkshake_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Milkshake";
		};
		class Stryker_U_Milkshake_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Milkshake";
		};
		class Stryker_U_Milkshake_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Milkshake";
		};

		//Vyke
		class Stryker_U_Vyke_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Vyke";
		};
		class Stryker_U_Vyke_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Vyke";
		};
		class Stryker_U_Vyke_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Vyke";
		};

		//Aturr
		class Stryker_U_Aturr_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Aturr";
		};
		class Stryker_U_Aturr_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Aturr";
		};
		class Stryker_U_Aturr_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Aturr";
		};

		//Ksiazek
		class Stryker_U_Ksiazek_Woodland_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "woodland";
			owner = "Ksiazek";
		};
		class Stryker_U_Ksiazek_Urban_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "urban";
			owner = "Ksiazek";
		};
		class Stryker_U_Ksiazek_Arid_uniform
		{
			model = "Stryker_Custom_Uniforms";
			camo = "arid";
			owner = "Ksiazek";
		};
	};
};
class CfgVehicles
{
	class haloinf_Marine_Soldier_base_F;
	class Stryker_Base : haloinf_Marine_Soldier_base_F
	{
		scope = 1;
		scopearsenal = 1;
		scopecurator = 1;
		displayName = "[Stryker] Urban";
		picture = "";
		uniformClass = "Stryker_U_Base";
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ItemRadio" };
	};

	//base
	class Stryker_Woodland: Stryker_Base
	{
		displayName = "[Stryker] Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Woodland_uniform";
	};
	class Stryker_Corpsman_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Woodland Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Woodland_Corpsman_uniform";
	};
	class Stryker_Urban : Stryker_Base
	{
		displayName = "[Stryker] Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Urban_uniform";
	};
	class Stryker_Corpsman_Urban : Stryker_Base
	{
		displayName = "[Stryker] Urban Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Urban_Corpsman_uniform";
	};
	class Stryker_Arid : Stryker_Base
	{
		displayName = "[Stryker] Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Arid_uniform";
	};
	class Stryker_Corpsman_Arid : Stryker_Base
	{
		displayName = "[Stryker] Arid Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Arid_Corpsman_uniform";
	};
	
	//One-A
	class Stryker_oneA_Woodland : Stryker_Base
	{
		displayName = "[Stryker] 1-A Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneA_Armor.paa" };
		uniformClass = "Stryker_U_oneA_Woodland_uniform";
	};
	class Stryker_oneA_Corpsman_Woodland : Stryker_Base
	{
		displayName = "[Stryker] 1-A Woodland Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneA_Armor.paa" };
		uniformClass = "Stryker_U_oneA_Woodland_Corpsman_uniform";
	};
	class Stryker_oneA_Urban : Stryker_Base
	{
		displayName = "[Stryker] 1-A Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneA_Armor.paa" };
		uniformClass = "Stryker_U_oneA_Urban_uniform";
	};
	class Stryker_oneA_Corpsman_Urban : Stryker_Base
	{
		displayName = "[Stryker] 1-A Urban Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneA_Armor.paa" };
		uniformClass = "Stryker_U_oneA_Urban_Corpsman_uniform";
	};
	class Stryker_oneA_Arid : Stryker_Base
	{
		displayName = "[Stryker] 1-A Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneA_Armor.paa" };
		uniformClass = "Stryker_U_oneA_Arid_uniform";
	};
	class Stryker_oneA_Corpsman_Arid : Stryker_Base
	{
		displayName = "[Stryker] 1-A Arid Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneA_Armor.paa" };
		uniformClass = "Stryker_U_oneA_Arid_Corpsman_uniform";
	};

	//One-One
	class Stryker_oneOne_Woodland : Stryker_Base
	{
		displayName = "[Stryker] 1-1 Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Woodland_uniform";
	};
	class Stryker_oneOne_Corpsman_Woodland : Stryker_Base
	{
		displayName = "[Stryker] 1-1 Woodland Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Woodland_Corpsman_uniform";
	};
	class Stryker_oneOne_Urban : Stryker_Base
	{
		displayName = "[Stryker] 1-1 Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Urban_uniform";
	};
	class Stryker_oneOne_Corpsman_Urban : Stryker_Base
	{
		displayName = "[Stryker] 1-1 Urban Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Urban_Corpsman_uniform";
	};
	class Stryker_oneOne_Arid : Stryker_Base
	{
		displayName = "[Stryker] 1-1 Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Arid_uniform";
	};
	class Stryker_oneOne_Corpsman_Arid : Stryker_Base
	{
		displayName = "[Stryker] 1-1 Arid Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Arid_Corpsman_uniform";
	};

	//One-Two
	class Stryker_oneTwo_Woodland : Stryker_Base
	{
		displayName = "[Stryker] 1-2 Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Woodland_uniform";
	};
	class Stryker_oneTwo_Corpsman_Woodland : Stryker_Base
	{
		displayName = "[Stryker] 1-2 Woodland Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Woodland_Corpsman_uniform";
	};
	class Stryker_oneTwo_Urban : Stryker_Base
	{
		displayName = "[Stryker] 1-2 Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Urban_uniform";
	};
	class Stryker_oneTwo_Corpsman_Urban : Stryker_Base
	{
		displayName = "[Stryker] 1-2 Urban Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Urban_Corpsman_uniform";
	};
	class Stryker_oneTwo_Arid : Stryker_Base
	{
		displayName = "[Stryker] 1-2 Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Arid_uniform";
	};
	class Stryker_oneTwo_Corpsman_Arid : Stryker_Base
	{
		displayName = "[Stryker] 1-2 Arid Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Arid_Corpsman_uniform";
	};

	//custom uniform/armor
	//Soldner
	class Soldner_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Soldner's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Soldner_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Soldner_Woodland_uniform";
	};
	class Soldner_Urban : Stryker_Base
	{
		displayName = "[Stryker] Soldner's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Soldner_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Soldner_Urban_uniform";
	};
	class Soldner_Arid : Stryker_Base
	{
		displayName = "[Stryker] Soldner's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Soldner_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Soldner_Arid_uniform";
	};

	//Havoc
	class Havoc_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Havoc's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Havoc_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Havoc_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Havoc_Woodland_uniform";
	};
	class Havoc_Urban : Stryker_Base
	{
		displayName = "[Stryker] Havoc's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Havoc_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Havoc_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Havoc_Urban_uniform";
	};
	class Havoc_Arid : Stryker_Base
	{
		displayName = "[Stryker] Havoc's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Havoc_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Havoc_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Havoc_Arid_uniform";
	};

	//Saunder
	class Saunder_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Saunder's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Saunder_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Saunder_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Saunder_Woodland_uniform";
	};
	class Saunder_Urban : Stryker_Base
	{
		displayName = "[Stryker] Saunder's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Saunder_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Saunder_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Saunder_Urban_uniform";
	};
	class Saunder_Arid : Stryker_Base
	{
		displayName = "[Stryker] Saunder's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Saunder_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Saunder_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Saunder_Arid_uniform";
	};

	//Fangirl
	class Fangirl_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Fangirl's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Fangirl_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Fangirl_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Fangirl_Woodland_uniform";
	};
	class Fangirl_Urban : Stryker_Base
	{
		displayName = "[Stryker] Fangirl's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Fangirl_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Fangirl_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Fangirl_Urban_uniform";
	};
	class Fangirl_Arid : Stryker_Base
	{
		displayName = "[Stryker] Fangirl's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Fangirl_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Fangirl_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Fangirl_Arid_uniform";
	};

	//Marshall
	class Marshall_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Marshall's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Marshall_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Marshall_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Marshall_Woodland_uniform";
	};
	class Marshall_Urban : Stryker_Base
	{
		displayName = "[Stryker] Marshall's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Marshall_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Marshall_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Marshall_Urban_uniform";
	};
	class Marshall_Arid : Stryker_Base
	{
		displayName = "[Stryker] Marshall's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Marshall_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Marshall_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Marshall_Arid_uniform";
	};

	//Timber
	class Timber_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Timber's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Timber_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_Timber_Woodland_uniform";
	};
	class Timber_Urban : Stryker_Base
	{
		displayName = "[Stryker] Timber's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Timber_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_Timber_Urban_uniform";
	};
	class Timber_Arid : Stryker_Base
	{
		displayName = "[Stryker] Timber's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Timber_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_Timber_Arid_uniform";
	};

	//Reject
	class Reject_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Reject's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Reject_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_Reject_Woodland_uniform";
	};
	class Reject_Urban : Stryker_Base
	{
		displayName = "[Stryker] Reject's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Reject_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_Reject_Urban_uniform";
	};
	class Reject_Arid : Stryker_Base
	{
		displayName = "[Stryker] Reject's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Reject_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_Reject_Arid_uniform";
	};

	//Wolf
	class Wolf_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Wolf's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Wolf_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Wolf_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Wolf_Woodland_uniform";
	};
	class Wolf_Urban : Stryker_Base
	{
		displayName = "[Stryker] Wolf's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Wolf_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Wolf_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Wolf_Urban_uniform";
	};
	class Wolf_Arid : Stryker_Base
	{
		displayName = "[Stryker] Wolf's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Wolf_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Wolf_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Wolf_Arid_uniform";
	};

	//Milkshake
	class Milkshake_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Milkshake's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Milkshake_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Milkshake_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Milkshake_Woodland_uniform";
	};
	class Milkshake_Urban : Stryker_Base
	{
		displayName = "[Stryker] Milkshake's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Milkshake_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Milkshake_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Milkshake_Urban_uniform";
	};
	class Milkshake_Arid : Stryker_Base
	{
		displayName = "[Stryker] Milkshake's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Milkshake_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Milkshake_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Milkshake_Arid_uniform";
	};

	//Vyke
	class Vyke_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Vyke's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Vyke_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_Vyke_Woodland_uniform";
	};
	class Vyke_Urban : Stryker_Base
	{
		displayName = "[Stryker] Vyke's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Vyke_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_Vyke_Urban_uniform";
	};
	class Vyke_Arid : Stryker_Base
	{
		displayName = "[Stryker] Vyke's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Vyke_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_Vyke_Arid_uniform";
	};

	//Aturr
	class Aturr_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Aturr's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Aturr_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Aturr_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Aturr_Woodland_uniform";
	};
	class Aturr_Urban : Stryker_Base
	{
		displayName = "[Stryker] Aturr's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Aturr_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Aturr_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Aturr_Urban_uniform";
	};
	class Aturr_Arid : Stryker_Base
	{
		displayName = "[Stryker] Aturr's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Aturr_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Aturr_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Aturr_Arid_uniform";
	};

	//Ksiazek
	class Ksiazek_Woodland : Stryker_Base
	{
		displayName = "[Stryker] Ksiazek's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ksiazek_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Ksiazek_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Ksiazek_Woodland_uniform";
	};
	class Ksiazek_Urban : Stryker_Base
	{
		displayName = "[Stryker] Ksiazek's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ksiazek_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Ksiazek_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Ksiazek_Urban_uniform";
	};
	class Ksiazek_Arid : Stryker_Base
	{
		displayName = "[Stryker] Ksiazek's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Ksiazek_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Ksiazek_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Ksiazek_Arid_uniform";
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class Stryker_U_Base : Uniform_Base
	{
		scope = 1;
		author = "Soldner";
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Urban";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Stryker_Base";
			containerClass = "Supply100";
			uniformType = "Neopren";
			mass = 80;
		};
	};

	//base
	class Stryker_U_Woodland_uniform: Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Woodland";
		class ItemInfo: UniformItem
		{
			uniformClass = "Stryker_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Woodland_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Woodland Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_Corpsman_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Urban_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Urban Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_Corpsman_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Arid_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Arid Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_Corpsman_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//1-A
	class Stryker_U_oneA_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-A Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneA_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneA_Woodland_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-A Woodland Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneA_Corpsman_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneA_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-A Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneA_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneA_Urban_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-A Urban Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneA_Corpsman_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneA_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-A Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneA_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneA_Arid_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-A Arid Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneA_Corpsman_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//1-1
	class Stryker_U_oneOne_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-1 Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneOne_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneOne_Woodland_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-1 Woodland Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneOne_Corpsman_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneOne_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-1 Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneOne_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneOne_Urban_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-1 Urban Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneOne_Corpsman_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneOne_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-1 Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneOne_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneOne_Arid_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-1 Arid Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneOne_Corpsman_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//1-2
	class Stryker_U_oneTwo_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-2 Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneTwo_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneTwo_Woodland_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-2 Woodland Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneTwo_Corpsman_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneTwo_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-2 Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneTwo_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneTwo_Urban_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-2 Urban Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneTwo_Corpsman_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneTwo_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-2 Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneTwo_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneTwo_Arid_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-2 Arid Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneTwo_Corpsman_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//custom uniform/armor
	//Soldner
	class Stryker_U_Soldner_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Soldner's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Soldner_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Soldner_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Soldner's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Soldner_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Soldner_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Soldner's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Soldner_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Havoc
	class Stryker_U_Havoc_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Havoc's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Havoc_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Havoc_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Havoc's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Havoc_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Havoc_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Havoc's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Havoc_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Saunder
	class Stryker_U_Saunder_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Saunder's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Saunder_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Saunder_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Saunder's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Saunder_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Saunder_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Saunder's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Saunder_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Fangirl
	class Stryker_U_Fangirl_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Fangirl's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Fangirl_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Fangirl_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Fangirl's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Fangirl_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Fangirl_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Fangirl's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Fangirl_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Marshall
	class Stryker_U_Marshall_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Marshall's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Marshall_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Marshall_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Marshall's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Marshall_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Marshall_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Marshall's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Marshall_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Timber
	class Stryker_U_Timber_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Timber's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Timber_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Timber_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Timber's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Timber_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Timber_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Timber's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Timber_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Reject
	class Stryker_U_Reject_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Reject's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Reject_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Reject_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Reject's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Reject_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Reject_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Reject's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Reject_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Wolf
	class Stryker_U_Wolf_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Wolf's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Wolf_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Wolf_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Wolf's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Wolf_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Wolf_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Wolf's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Wolf_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Milkshake
	class Stryker_U_Milkshake_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Milkshake's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Milkshake_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Milkshake_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Milkshake's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Milkshake_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Milkshake_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Milkshake's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Milkshake_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Vyke
	class Stryker_U_Vyke_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Vyke's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Vyke_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Vyke_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Vyke's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Vyke_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Vyke_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Vyke's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Vyke_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Aturr
	class Stryker_U_Aturr_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Aturr's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Aturr_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Aturr_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Aturr's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Aturr_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Aturr_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Aturr's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Aturr_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//Ksiazek
	class Stryker_U_Ksiazek_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Ksiazek's Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Ksiazek_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Ksiazek_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Ksiazek's Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Ksiazek_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_Ksiazek_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] Ksiazek's Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Ksiazek_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
};