params [
	["_depot", objNull, [objNull]],
	["_radius", -1, [0]]
];

if (isNull _depot) exitWith {[]};

if (_radius < 0) then {
	_radius = _depot getVariable ["StrykerRecovery_recoveryRadius", 30];
};

private _wrecks = missionNamespace getVariable ["StrykerRecovery_wrecks", []];

_wrecks select {
	!isNull _x
	&& {_x getVariable ["StrykerRecovery_isWreck", false]}
	&& {!(_x getVariable ["StrykerRecovery_recovered", false])}
	&& {_x distance _depot <= _radius}
}
