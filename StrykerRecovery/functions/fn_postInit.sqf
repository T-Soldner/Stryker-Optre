if (!isServer) exitWith {};

[] spawn {
	waitUntil {time > 0};

	{
		if (_x getVariable ["StrykerRecovery_canRecover", false]) then {
			[_x] call StrykerRecovery_fnc_registerVehicle;
		};
	} forEach vehicles;
};
