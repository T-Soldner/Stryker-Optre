params [
	["_depot", objNull, [objNull]],
	["_player", objNull, [objNull]]
];

if (isNull _depot) exitWith {};

if (!isServer) exitWith {
	[_depot, _player] remoteExecCall ["StrykerRecovery_fnc_recoverNearestWreck", 2];
};

private _nearbyWrecks = [_depot] call StrykerRecovery_fnc_getNearbyWrecks;
if (_nearbyWrecks isEqualTo []) exitWith {
	if (!isNull _player) then {
		["No recoverable wreck is close enough to the recovery vehicle."] remoteExecCall ["systemChat", owner _player];
	};
};

private _wreck = objNull;
private _bestDistance = 1e9;

{
	private _distance = _x distance _depot;
	if (_distance < _bestDistance) then {
		_wreck = _x;
		_bestDistance = _distance;
	};
} forEach _nearbyWrecks;

if (isNull _wreck) exitWith {};

private _className = _wreck getVariable ["StrykerRecovery_vehicleClass", typeOf _wreck];
private _displayName = getText (configFile >> "CfgVehicles" >> _className >> "displayName");
if (_displayName isEqualTo "") then {
	_displayName = _className;
};

private _textures = _wreck getVariable ["StrykerRecovery_textures", []];
private _spawnPos = _depot modelToWorld [0, -18, 0];
_spawnPos set [2, 0];

_wreck setVariable ["StrykerRecovery_recovered", true, true];

private _newVehicle = createVehicle [_className, _spawnPos, [], 0, "NONE"];
_newVehicle setDir (getDir _depot);
_newVehicle setPosATL _spawnPos;
_newVehicle setDamage 0;
_newVehicle setFuel 1;
_newVehicle setVehicleAmmo 1;

{
	_newVehicle setObjectTextureGlobal [_x select 0, _x select 1];
} forEach _textures;

deleteVehicle _wreck;

private _wrecks = (missionNamespace getVariable ["StrykerRecovery_wrecks", []]) - [_wreck];
missionNamespace setVariable ["StrykerRecovery_wrecks", _wrecks, true];

[_newVehicle, _className] call StrykerRecovery_fnc_registerVehicle;

private _message = format ["Recovered %1.", _displayName];
if (!isNull _player) then {
	[_message] remoteExecCall ["systemChat", owner _player];
} else {
	[_message] remoteExecCall ["systemChat", 0];
};
