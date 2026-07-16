params [
	["_vehicle", objNull, [objNull]]
];

if (!isServer || {isNull _vehicle}) exitWith {};
if !(_vehicle getVariable ["StrykerRecovery_registered", false]) exitWith {};

_vehicle setVariable ["StrykerRecovery_isWreck", true, true];
_vehicle setVariable ["StrykerRecovery_recovered", false, true];

private _wrecks = missionNamespace getVariable ["StrykerRecovery_wrecks", []];
_wrecks = _wrecks select {
	!isNull _x
	&& {!(_x getVariable ["StrykerRecovery_recovered", false])}
};
_wrecks pushBackUnique _vehicle;

missionNamespace setVariable ["StrykerRecovery_wrecks", _wrecks, true];
