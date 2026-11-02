params [
	["_unit", objNull, [objNull]],
	["_permission", "none", [""]]
];

if (isNull _unit || {!local _unit}) exitWith {};

private _message = switch (toLower _permission) do {
	case "medic": {
		_unit setVariable ["ace_medical_medicClass", 1, true];
		_unit setVariable ["ACE_IsEngineer", 0, true];
		_unit setVariable ["ACE_isEOD", 0, true];
		_unit setUnitTrait ["Medic", true];
		_unit setUnitTrait ["Engineer", false];
		"Medic permissions granted; engineer permissions removed."
	};
	case "engineer": {
		_unit setVariable ["ace_medical_medicClass", 0, true];
		_unit setVariable ["ACE_IsEngineer", 1, true];
		_unit setVariable ["ACE_isEOD", 0, true];
		_unit setUnitTrait ["Medic", false];
		_unit setUnitTrait ["Engineer", true];
		"Engineer permissions granted; medic permissions removed."
	};
	default {
		_unit setVariable ["ace_medical_medicClass", 0, true];
		_unit setVariable ["ACE_IsEngineer", 0, true];
		_unit setVariable ["ACE_isEOD", 0, true];
		_unit setUnitTrait ["Medic", false];
		_unit setUnitTrait ["Engineer", false];
		"Medic, engineer, and EOD permissions removed."
	};
};

systemChat format ["[Stryker Arsenal] %1", _message];
