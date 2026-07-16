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
for "_index" from 0 to 15 do {
	private _texture = _vehicle getObjectTexture _index;
	if !(_texture isEqualTo "") then {
		_textures pushBack [_index, _texture];
	};
};

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
