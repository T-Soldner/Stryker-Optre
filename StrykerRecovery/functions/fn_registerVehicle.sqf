params [
	["_vehicle", objNull, [objNull]],
	["_respawnClass", "", [""]]
];

if (isNull _vehicle) exitWith {false};

if (!isServer) exitWith {
	[_vehicle, _respawnClass] remoteExecCall ["StrykerRecovery_fnc_registerVehicle", 2];
	true
};

if (_respawnClass isEqualTo "") then {
	_respawnClass = typeOf _vehicle;
};

private _textures = [];
{
	if !(_x isEqualTo "") then {
		_textures pushBack [_forEachIndex, _x];
	};
} forEach (getObjectTextures _vehicle);

_vehicle setVariable ["StrykerRecovery_registered", true, true];
_vehicle setVariable ["StrykerRecovery_isWreck", false, true];
_vehicle setVariable ["StrykerRecovery_vehicleClass", _respawnClass, true];
_vehicle setVariable ["StrykerRecovery_textures", _textures, true];

if !(_vehicle getVariable ["StrykerRecovery_hasKilledHandler", false]) then {
	_vehicle addMPEventHandler ["MPKilled", {
		if (isServer) then {
			_this call StrykerRecovery_fnc_handleKilled;
		};
	}];
	_vehicle setVariable ["StrykerRecovery_hasKilledHandler", true, true];
};

true
