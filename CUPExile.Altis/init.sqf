
//Spawn Bike
if (isDedicated || isServer) then {
	"do_MakeBike" addPublicVariableEventHandler {
		_parameters = (_this select 1);
		_parameters2  =(_parameters select 1);
		diag_log format ["createVehicleRequested %1 ", _parameters]; 
		veh = createVehicle["Exile_Bike_QuadBike_Blue", _parameters2 , [] ,0 , "NONE"];
	};
};

if (isServer) then
{
	ExileServer_EXP_network_playerAnnounce = compileFinal preprocessFileLineNumbers "ExileServer_EXP_network_playerAnnounce.sqf";
};

if !(isServer) then
{
	waitUntil {!isNull (findDisplay 46)};

	{
	    _x params [["_function",""],["_file",""]];
	    _code = compileFinal (preprocessFileLineNumbers _file);
	    missionNamespace setVariable [_function,_code];
	} 
	forEach
	[
	    ["EXP_Player_Announce","addons\PlayerAnnounce\EXP_Player_Announce.sqf"]
	];
	[] call EXP_Player_Announce;
};	


//Scripts
[] execVM "ClaimVehicles_Client\ClaimVehicles_Client_init.sqf";
[] execVM "custom\EnigmaRevive\init.sqf";
[] execVM "custom\Welcome.sqf";
[] execVM "ETG_LoginrewardScript.sqf";
// Igiload
[] execVM "IgiLoad\IgiLoadInit.sqf";

//Server Info
[] ExecVM "scarCODE\ServerInfoMenu\sqf\initLocal.sqf";

fnc_isInsideBuilding = compile preprocessFileLineNumbers "addons\blowout\external\fn_isInsideBuilding.sqf";
fnc_hasAPSI = compile preprocessFileLineNumbers "addons\blowout\external\fn_hasAPSI.sqf";

ns_blow_itemapsi = ["ItemRadio"];
ns_blow_itemtype = 3; // 1=Headgear 2=Vest 3=Item  4=Goggles 5=Uniform
ns_blow_removeapsi = false; // remove/destroy APSI item after storm
ns_blow_delaymod = 0.6; //blowout delay - higher number longer time between blowouts
ns_blow_damage_unprotected = 0.45; //amount of damage blowout causes - value of 1 or higher will kill player!
ns_blow_damage_inbuilding = 0.20; // set to 0 to have player not take damage when in a building regardless of having APSI
ns_blowout = true;//Do not change
ns_blowout_exile = true;//Do not change
ns_blow_prep = false;//Do not change
ns_blow_status = false;//Do not change
ns_blow_action = false;//Do not change
phasAPSI = false;//Do not change

ExileClientXM8IsPowerOn = true;