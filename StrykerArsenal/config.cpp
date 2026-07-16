class CfgPatches
{
	class Stryker_Arsenal
	{
		name = "Stryker Arsenal";
		author = "Soldner";
		url = "https://discord.gg/Y6AtjkfaEW";
		requiredVersion = 1.60;
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Supplies_F_Heli_CargoNets",
			"Stryker_Core",
			"OPTRE_Misc",
			"ace_arsenal",
			"ace_interact_menu",
			"ace_dragging",
			"ace_cargo",
			"cba_xeh"
		};
		units[] = { "Stryker_Limited_Arsenal_Box" };
		weapons[] = {};
	};
};

class CfgFunctions
{
	class Stryker
	{
		class Arsenal
		{
			file = "StrykerArsenal\functions";
			class initLimitedArsenal {};
		};
	};
};

class Extended_Init_EventHandlers
{
	class Stryker_Limited_Arsenal_Box
	{
		class StrykerArsenal_initLimitedArsenal
		{
			init = "_this spawn { sleep 0.1; _this call Stryker_fnc_initLimitedArsenal; }";
		};
	};

};

class CfgVehicles
{
	class OPTRE_RS_ConsoleDoor;

	class Stryker_Limited_Arsenal_Box: OPTRE_RS_ConsoleDoor
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Stryker Limited ACE Arsenal";
		author = "Soldner";
		editorCategory = "Stryker_MEU_EdCat";
		editorSubcategory = "Stryker_MEU_EdSubCat_Supplies";
		side = 3;
		armor = 4000;

		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
		ace_cargo_canLoad = 0;
		ace_cargo_size = -1;

		class EventHandlers
		{
			init = "_this spawn { sleep 0.2; _this call Stryker_fnc_initLimitedArsenal; }";
		};

		class ACE_Actions
		{
			class ACE_MainActions
			{
				distance = 6;
				position = "[0,0,0.2]";
				selection = "";
				displayName = "Interactions";
				condition = "true";
			};
		};

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};

};
