params [["_depot", objNull, [objNull]]];

if (isNull _depot || {!alive _depot}) exitWith {false};

(count ([_depot] call StrykerRecovery_fnc_getNearbyWrecks)) > 0
