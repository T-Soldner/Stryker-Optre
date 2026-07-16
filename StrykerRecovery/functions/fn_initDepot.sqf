params [["_depotOrArgs", objNull, [objNull, []]]];

private _depot = _depotOrArgs;
if (_depotOrArgs isEqualType []) then {
	_depot = _depotOrArgs param [0, objNull, [objNull]];
};

if (isNull _depot) exitWith {};

private _configRadius = getNumber (configFile >> "CfgVehicles" >> typeOf _depot >> "StrykerRecovery_recoveryRadius");
if (_configRadius <= 0) then {
	_configRadius = 30;
};

if !(_depot getVariable ["StrykerRecovery_depotInitialized", false]) then {
	_depot setVariable ["StrykerRecovery_depotInitialized", true, true];
	_depot setVariable ["StrykerRecovery_isDepot", true, true];
	_depot setVariable ["StrykerRecovery_recoveryRadius", _depot getVariable ["StrykerRecovery_recoveryRadius", _configRadius], true];
};

if (!hasInterface) exitWith {};
if (_depot getVariable ["StrykerRecovery_depotAceActionAdded", false]) exitWith {};
_depot setVariable ["StrykerRecovery_depotAceActionAdded", true, false];

[
	{!isNil "ace_interact_menu_fnc_createAction" && {!isNull (_this select 0)}},
	{
		params ["_depot"];

		private _action = [
			"StrykerRecovery_RecoverNearestWreck",
			"Recover Nearby Wreck",
			"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\repair_ca.paa",
			{
				params ["_target", "_player"];
				[_target, _player] call StrykerRecovery_fnc_recoverNearestWreck;
			},
			{
				params ["_target"];
				!isNull _target && {alive _target}
			}
		] call ace_interact_menu_fnc_createAction;

		[_depot, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
	},
	[_depot]
] call CBA_fnc_waitUntilAndExecute;
