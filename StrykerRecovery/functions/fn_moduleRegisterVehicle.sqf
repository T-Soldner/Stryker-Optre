params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

if (!_activated || {!isServer}) exitWith {};

{
	if (!isNull _x && {_x isKindOf "AllVehicles"} && {!(_x isKindOf "Man")}) then {
		[_x] call StrykerRecovery_fnc_registerVehicle;
	};
} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};
