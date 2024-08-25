class CfgPatches
{
	class Stryker_patch_vehicle
	{
		author = "Soldner";
		requiredAddons[] = {"Stryker_Core"};
		requiredVersion = 0.1;
		units[] = {"Stryker_MEU_Wombat"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	//Wombat Drone
	class OPTRE_Wombat_Base;
	class Stryker_MEU_Wombat : OPTRE_Wombat_Base
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soldner";
		displayName = "[Stryker] Hugin Drone";
		fuelCapacity = 2000;
		fuelConsumptionRate = 0.01;
		editorCategory = "Stryker_EdCat_MEU";
		editorSubcategory = "Stryker_EdSubCat_Drones";
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
		editorCategory = "Stryker_EdCat_MEU";
		editorSubcategory = "Stryker_EdSubCat_Drones";
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