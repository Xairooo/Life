//Spawn Bike
if (isDedicated || isServer) then {
	"do_MakeBike" addPublicVariableEventHandler {
		_parameters = (_this select 1);
		_parameters2  =(_parameters select 1);
		diag_log format ["createVehicleRequested %1 ", _parameters]; 
		veh = createVehicle["Exile_Bike_QuadBike_Blue", _parameters2 , [] ,0 , "NONE"];
	};
};


//Scripts
[] execVM "custom\EnigmaRevive\init.sqf";
[] execVM "ground_fog.sqf";
[] execVM "ETG_LoginrewardScript.sqf";
// Igiload
[] execVM "IgiLoad\IgiLoadInit.sqf";

//Server Info
[] ExecVM "scarCODE\ServerInfoMenu\sqf\initLocal.sqf";