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
		class Stryker_Uniforms
		{
			label = "Stryker Uniforms";
			author = "Soldner";
			options[] = {"squad","camo","role"};
			class squad {
				alwaysSelectable = 1;
				label = "Squad";
				values[] = { "base","oneOne","oneTwo","oneThree" };
				class base
				{
					label = "Base";
				};
				class oneOne
				{
					label = "1-1";
				};
				class oneTwo
				{
					label = "1-2";
				};
				class oneThree
				{
					label = "1-3";
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
				values[] = { "Soldner" };
				class Soldner
				{
					label = "Soldner";
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
		class Stryker_U_oneThree_Woodland_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneThree";
			camo = "woodland";
			role = "base";
		};
		class Stryker_U_oneThree_Woodland_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneThree";
			camo = "woodland";
			role = "corpsman";
		};
		class Stryker_U_oneThree_Urban_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneThree";
			camo = "urban";
			role = "base";
		};
		class Stryker_U_oneThree_Urban_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneThree";
			camo = "urban";
			role = "corpsman";
		};
		class Stryker_U_oneThree_Arid_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneThree";
			camo = "arid";
			role = "base";
		};
		class Stryker_U_oneThree_Arid_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			squad = "oneThree";
			camo = "arid";
			role = "corpsman";
		};

		//custom uniform/armor
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
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "Stryker_U_Base";
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ItemRadio" };
	};

	//base
	class Stryker_Woodland: Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Woodland_uniform";
	};
	class Stryker_Corpsman_Woodland : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] Woodland Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Woodland_Corpsman_uniform";
	};
	class Stryker_Urban : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Urban_uniform";
	};
	class Stryker_Corpsman_Urban : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] Urban Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Urban_Corpsman_uniform";
	};
	class Stryker_Arid : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Arid_uniform";
	};
	class Stryker_Corpsman_Arid : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] Arid Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Arid_Corpsman_uniform";
	};

	//One-One
	class Stryker_oneOne_Woodland : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-1 Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Woodland_uniform";
	};
	class Stryker_oneOne_Corpsman_Woodland : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-1 Woodland Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Woodland_Corpsman_uniform";
	};
	class Stryker_oneOne_Urban : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-1 Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Urban_uniform";
	};
	class Stryker_oneOne_Corpsman_Urban : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-1 Urban Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Urban_Corpsman_uniform";
	};
	class Stryker_oneOne_Arid : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-1 Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Arid_uniform";
	};
	class Stryker_oneOne_Corpsman_Arid : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-1 Arid Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneOne_Armor.paa" };
		uniformClass = "Stryker_U_oneOne_Arid_Corpsman_uniform";
	};

	//One-Two
	class Stryker_oneTwo_Woodland : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-2 Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Woodland_uniform";
	};
	class Stryker_oneTwo_Corpsman_Woodland : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-2 Woodland Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Woodland_Corpsman_uniform";
	};
	class Stryker_oneTwo_Urban : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-2 Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Urban_uniform";
	};
	class Stryker_oneTwo_Corpsman_Urban : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-2 Urban Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Urban_Corpsman_uniform";
	};
	class Stryker_oneTwo_Arid : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-2 Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Arid_uniform";
	};
	class Stryker_oneTwo_Corpsman_Arid : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-2 Arid Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneTwo_Armor.paa" };
		uniformClass = "Stryker_U_oneTwo_Arid_Corpsman_uniform";
	};

	//One-Three
	class Stryker_oneThree_Woodland : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-3 Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneThree_Armor.paa" };
		uniformClass = "Stryker_U_oneThree_Woodland_uniform";
	};
	class Stryker_oneThree_Corpsman_Woodland : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-3 Woodland Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Woodland_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Stryker_Woodland_oneThree_Armor.paa" };
		uniformClass = "Stryker_U_oneThree_Woodland_Corpsman_uniform";
	};
	class Stryker_oneThree_Urban : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-3 Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneThree_Armor.paa" };
		uniformClass = "Stryker_U_oneThree_Urban_uniform";
	};
	class Stryker_oneThree_Corpsman_Urban : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-3 Urban Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Urban_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_oneThree_Armor.paa" };
		uniformClass = "Stryker_U_oneThree_Urban_Corpsman_uniform";
	};
	class Stryker_oneThree_Arid : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-3 Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneThree_Armor.paa" };
		uniformClass = "Stryker_U_oneThree_Arid_uniform";
	};
	class Stryker_oneThree_Corpsman_Arid : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] 1-3 Arid Corpsman";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Stryker_Arid_Corpsman_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_oneThree_Armor.paa" };
		uniformClass = "Stryker_U_oneThree_Arid_Corpsman_uniform";
	};

	//custom uniform/armor
	class Soldner_Woodland : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] Soldner's Woodland";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Woodland_Top.paa","\StrykerGear\Data\Stryker_Woodland_Pants.paa","\StrykerGear\Data\Soldner_Woodland_Armor.paa" };
		uniformClass = "Stryker_U_Soldner_Woodland_uniform";
	};
	class Soldner_Urban : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] Soldner's Urban";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Soldner_Urban_Armor.paa" };
		uniformClass = "Stryker_U_Soldner_Urban_uniform";
	};
	class Soldner_Arid : Stryker_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayName = "[Stryker] Soldner's Arid";
		hiddenSelections[] = { "Camo1","Camo2","Camo3" };
		hiddenSelectionsTextures[] = { "\StrykerGear\Data\Soldner_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Soldner_Arid_Armor.paa" };
		uniformClass = "Stryker_U_Soldner_Arid_uniform";
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

	//1-3
	class Stryker_U_oneThree_Woodland_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-3 Woodland";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneThree_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneThree_Woodland_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-3 Woodland Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneThree_Corpsman_Woodland";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneThree_Urban_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-3 Urban";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneThree_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneThree_Urban_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-3 Urban Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneThree_Corpsman_Urban";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneThree_Arid_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-3 Arid";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneThree_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};
	class Stryker_U_oneThree_Arid_Corpsman_uniform : Stryker_U_Base
	{
		scope = 2;
		allowedSlots[] = { 901 };
		displayName = "[Stryker] 1-3 Arid Corpsman";
		class ItemInfo : UniformItem
		{
			uniformClass = "Stryker_oneThree_Corpsman_Arid";
			containerClass = "Supply100";
			uniformType = "Neopren";
		};
	};

	//custom uniform/armor
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
		displayName = "[Stryker] Soldner' Urban";
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
};