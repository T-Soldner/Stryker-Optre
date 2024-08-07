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
			options[] = {"camo","role"};
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
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Stryker_U_Urban_uniform
		{
			model = "Stryker_Uniforms";
			camo = "urban";
			role = "base";
		};
		class Stryker_U_Urban_RTO_uniform
		{
			model = "Stryker_Uniforms";
			camo = "urban";
			role = "rto";
		};
		class Stryker_U_Urban_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			camo = "urban";
			role = "corpsman";
		};
		class Stryker_U_Arid_uniform
		{
			model = "Stryker_Uniforms";
			camo = "arid";
			role = "base";
		};
		class Stryker_U_Arid_RTO_uniform
		{
			model = "Stryker_Uniforms";
			camo = "arid";
			role = "rto";
		};
		class Stryker_U_Arid_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			camo = "arid";
			role = "corpsman";
		};
		class Stryker_U_Woodland_uniform
		{
			model = "Stryker_Uniforms";
			camo = "woodland";
			role = "base";
		};
		class Stryker_U_Woodland_RTO_uniform
		{
			model = "Stryker_Uniforms";
			camo = "woodland";
			role = "rto";
		};
		class Stryker_U_Woodland_Corpsman_uniform
		{
			model = "Stryker_Uniforms";
			camo = "woodland";
			role = "corpsman";
		};
	};
};
class CfgVehicles
{
	class haloinf_Marine_Soldier_base_F;
	class Stryker_Base_Urban: haloinf_Marine_Soldier_base_F
	{
		scope = 2;
		displayName = "[Stryker] Urban";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "Stryker_U_Urban_uniform";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Stryker_RTO_Urban: haloinf_Marine_Soldier_base_F
	{
		scope = 2;
		displayName = "[Stryker] Urban RTO";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor_Rto.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "Stryker_U_Urban_RTO_uniform";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Stryker_Corpsman_Urban: haloinf_Marine_Soldier_base_F
	{
		scope = 2;
		displayName = "[Stryker] Urban Corpsman";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor_corpsman.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "Stryker_U_Urban_Corpsman_uniform";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Stryker_Base_Arid: haloinf_Marine_Soldier_base_F
	{
		scope = 2;
		displayName = "[Stryker] Arid";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "Stryker_U_Arid_uniform";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Stryker_RTO_Arid: haloinf_Marine_Soldier_base_F
	{
		scope = 2;
		displayName = "[Stryker] Arid RTO";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor_Rto.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "Stryker_U_Arid_RTO_uniform";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Stryker_Corpsman_Arid: haloinf_Marine_Soldier_base_F
	{
		scope = 2;
		displayName = "[Stryker] Arid Corpsman";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor_corpsman.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "Stryker_U_Arid_Corpsman_uniform";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Stryker_Base_Woodland: haloinf_Marine_Soldier_base_F
	{
		scope = 2;
		displayName = "[Stryker] Woodland";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_MS_co.paa","\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa","\StrykerGear\Data\Stryker_Woodland_Armor.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "Stryker_U_Woodland_uniform";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Stryker_RTO_Woodland: haloinf_Marine_Soldier_base_F
	{
		scope = 2;
		displayName = "[Stryker] Woodland RTO";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_MS_co.paa","\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa","\StrykerGear\Data\Stryker_Woodland_Armor_Rto.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "Stryker_U_Woodland_RTO_uniform";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Stryker_Corpsman_Woodland: haloinf_Marine_Soldier_base_F
	{
		scope = 2;
		displayName = "[Stryker] Woodland Corpsman";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_MS_co.paa","\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa","\StrykerGear\Data\Stryker_Woodland_Armor_corpsman.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "Stryker_U_Woodland_Corpsman_uniform";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
	class Stryker_U_Urban_uniform: Uniform_Base
	{
		author = "Soldner";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "[Stryker] Urban";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor.paa"};
		class ItemInfo: UniformItem
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor.paa"};
			uniformModel = "-";
			uniformClass = "Stryker_Base_Urban";
			containerClass = "Supply90";
			uniformType = "Neopren";
			mass = 80;
		};
	};
	class Stryker_U_Urban_RTO_uniform: Uniform_Base
	{
		author = "Soldner";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "[Stryker] Urban RTO";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor_Rto.paa"};
		class ItemInfo: UniformItem
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor_Rto.paa"};
			uniformModel = "-";
			uniformClass = "Stryker_RTO_Urban";
			containerClass = "Supply90";
			uniformType = "Neopren";
			mass = 80;
		};
	};
	class Stryker_U_Urban_Corpsman_uniform: Uniform_Base
	{
		author = "Soldner";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "[Stryker] Urban Corpsman";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor_corpsman.paa"};
		class ItemInfo: UniformItem
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Urban_Top.paa","\StrykerGear\Data\Stryker_Urban_Pants.paa","\StrykerGear\Data\Stryker_Urban_Armor_corpsman.paa"};
			uniformModel = "-";
			uniformClass = "Stryker_Corpsman_Urban";
			containerClass = "Supply90";
			uniformType = "Neopren";
			mass = 80;
		};
	};
	class Stryker_U_Arid_uniform: Uniform_Base
	{
		author = "Soldner";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "[Stryker] Arid";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor.paa"};
		class ItemInfo: UniformItem
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor.paa"};
			uniformModel = "-";
			uniformClass = "Stryker_Base_Arid";
			containerClass = "Supply90";
			uniformType = "Neopren";
			mass = 80;
		};
	};
	class Stryker_U_Arid_RTO_uniform: Uniform_Base
	{
		author = "Soldner";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "[Stryker] Arid RTO";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor_Rto.paa"};
		class ItemInfo: UniformItem
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor_Rto.paa"};
			uniformModel = "-";
			uniformClass = "Stryker_RTO_Arid";
			containerClass = "Supply90";
			uniformType = "Neopren";
			mass = 80;
		};
	};
	class Stryker_U_Arid_Corpsman_uniform: Uniform_Base
	{
		author = "Soldner";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "[Stryker] Arid Corpsman";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor_corpsman.paa"};
		class ItemInfo: UniformItem
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = {"\StrykerGear\Data\Stryker_Arid_Top.paa","\StrykerGear\Data\Stryker_Arid_Pants.paa","\StrykerGear\Data\Stryker_Arid_Armor_corpsman.paa"};
			uniformModel = "-";
			uniformClass = "Stryker_Corpsman_Arid";
			containerClass = "Supply90";
			uniformType = "Neopren";
			mass = 80;
		};
	};
	class Stryker_U_Woodland_uniform: Uniform_Base
	{
		author = "Soldner";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "[Stryker] Woodland";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_MS_co.paa","\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa","\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_green_MS_co.paa"};
		class ItemInfo: UniformItem
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = {"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_MS_co.paa","\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa","\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_green_MS_co.paa"};
			uniformModel = "-";
			uniformClass = "Stryker_Base_Woodland";
			containerClass = "Supply90";
			uniformType = "Neopren";
			mass = 80;
		};
	};
	class Stryker_U_Woodland_RTO_uniform: Uniform_Base
	{
		author = "Soldner";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "[Stryker] Woodland RTO";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_MS_co.paa","\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa","\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_green_MR_co.paa"};
		class ItemInfo: UniformItem
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = {"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_MS_co.paa","\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa","\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_green_MR_co.paa"};
			uniformModel = "-";
			uniformClass = "Stryker_RTO_Woodland";
			containerClass = "Supply90";
			uniformType = "Neopren";
			mass = 80;
		};
	};
	class Stryker_U_Woodland_Corpsman_uniform: Uniform_Base
	{
		author = "Soldner";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "[Stryker] Woodland Corpsman";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_MS_co.paa","\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa","\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_green_MC_co.paa"};
		class ItemInfo: UniformItem
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = {"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_MS_co.paa","\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa","\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_green_MC_co.paa"};
			uniformModel = "-";
			uniformClass = "Stryker_Corpsman_Woodland";
			containerClass = "Supply90";
			uniformType = "Neopren";
			mass = 80;
		};
	};
};
class cfgMods
{
	author = "Soldner";
	timepacked = "1702303137";
};
