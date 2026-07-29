class CfgPatches
{
	class Stryker_Recovery
	{
		author = "Stryker MEU";
		name = "Stryker MEU Recovery";
		requiredAddons[] =
		{
			"Stryker_Core",
			"OPTRE_Vehicles_Tracked",
			"A3_Modules_F",
			"ace_common",
			"ace_interact_menu",
			"cba_xeh"
		};
		requiredVersion = 0.1;
		units[] =
		{
			"Stryker_Recovery_Elephant",
			"Stryker_Module_RegisterRecoverableVehicle"
		};
		weapons[] = {};
	};
};

class CfgFactionClasses
{
	class Stryker_MEU_Modules
	{
		displayName = "Stryker MEU";
		priority = 2;
		side = 7;
	};
};

class CfgFunctions
{
	class StrykerRecovery
	{
		class Recovery
		{
			file = "StrykerRecovery\functions";
			class canRecoverNearby {};
			class getNearbyWrecks {};
			class handleKilled {};
			class initDepot {};
			class moduleRegisterVehicle {};
			class postInit { postInit = 1; };
			class recoverNearestWreck {};
			class registerVehicle {};
		};
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription;
	};

	class OPTRE_M313_UNSC;
	class Stryker_Recovery_Elephant: OPTRE_M313_UNSC
	{
		author = "Stryker MEU";
		displayName = "Stryker Recovery Elephant";
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Armored";
		scope = 2;
		scopeCurator = 2;
		side = 1;

		ace_repair_canRepair = 1;
		transportRepair = 200000000;

		StrykerRecovery_isDepot = 1;
		StrykerRecovery_recoveryRadius = 50;
	};

	class Stryker_Module_RegisterRecoverableVehicle: Module_F
	{
		author = "Stryker MEU";
		category = "Stryker_MEU_Modules";
		displayName = "Register Recoverable Vehicle";
		function = "StrykerRecovery_fnc_moduleRegisterVehicle";
		functionPriority = 1;
		icon = "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\repair_ca.paa";
		isDisposable = 0;
		isGlobal = 1;
		isTriggerActivated = 0;
		scope = 2;
		scopeCurator = 2;

		class ModuleDescription: ModuleDescription
		{
			description = "Sync vehicles to this module to let a Stryker Recovery Elephant recover them after they are destroyed.";
			sync[] = {};
		};
	};
};

class Extended_Init_EventHandlers
{
	class Stryker_Recovery_Elephant
	{
		class StrykerRecovery_InitDepot
		{
			init = "_this call StrykerRecovery_fnc_initDepot";
		};
	};
};
