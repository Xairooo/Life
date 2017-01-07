/**
 * ExileServer_object_player_createBambi
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionID","_requestingPlayer","_spawnLocationMarkerName","_bambiPlayer","_accountData","_direction","_position","_spawnAreaPosition","_spawnAreaRadius","_clanID","_clanData","_clanGroup","_player","_devFriendlyMode","_devs","_parachuteNetID","_spawnType","_parachuteObject"];
_sessionID = _this select 0;
_requestingPlayer = _this select 1;
_spawnLocationMarkerName = _this select 2;
_bambiPlayer = _this select 3;
_accountData = _this select 4;
_direction = random 360;
if ((count ExileSpawnZoneMarkerPositions) isEqualTo 0) then 
{
	_position = call ExileClient_util_world_findCoastPosition;
	if ((toLower worldName) isEqualTo "namalsk") then 
	{
		while {(_position distance2D [76.4239, 107.141, 0]) < 100} do 
		{
			_position = call ExileClient_util_world_findCoastPosition;
		};
	};
	if ((toLower worldName) isEqualTo "esseker") then
	{
		_spawnCenter = [6049.26,6239.63,0];	
		_min = 2000; 								
		_max = 6000; 							
		_mindist = 5; 																
		_water = 0; 							
		_shoremode = 0; 						
		_blackList = 
		[
			[[0, 0],[0,0]]
		]; 

		_position = [_spawnCenter,_min,_max,_mindist,_water,10,_shoremode,_blackList] call BIS_fnc_findSafePos;
	};	
}
else 
{
	_spawnAreaPosition = getMarkerPos _spawnLocationMarkerName;
	_markerText = markerText _spawnLocationMarkerName;

	//_spawnAreaRadius = getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "spawnZoneRadius");
	//_position = [_spawnAreaPosition, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;

	_position = [_spawnAreaPosition,_markerText] call JohnO_fnc_getSpawnPositionInRegion;
	
	/*
	while {surfaceIsWater _position} do 
	{
		_position = [_spawnAreaPosition, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
	};
	*/
};
_name = name _requestingPlayer;
_clanID = (_accountData select 3);
if !((typeName _clanID) isEqualTo "SCALAR") then
{
	_clanID = -1;
	_clanData = [];
}
else
{
	_clanData = missionNamespace getVariable [format ["ExileServer_clan_%1",_clanID],[]];
	if(isNull (_clanData select 5))then
	{
		_clanGroup = createGroup independent;
		_clanData set [5,_clanGroup];
		_clanGroup setGroupIdGlobal [_clanData select 0];
		missionNameSpace setVariable [format ["ExileServer_clan_%1",_clanID],_clanData];
	}
	else
	{
		_clanGroup = (_clanData select 5);
	};
	[_player] joinSilent _clanGroup;
};
_bambiPlayer setPosATL [_position select 0,_position select 1,0];
_bambiPlayer disableAI "FSM";
_bambiPlayer disableAI "MOVE";
_bambiPlayer disableAI "AUTOTARGET";
_bambiPlayer disableAI "TARGET";
_bambiPlayer disableAI "CHECKVISIBLE";
_bambiPlayer setDir _direction;
_bambiPlayer setName _name;
_bambiPlayer setVariable ["ExileMoney", 0, true]; 
_bambiPlayer setVariable ["ExileScore", (_accountData select 0)];
_bambiPlayer setVariable ["ExileKills", (_accountData select 1)];
_bambiPlayer setVariable ["ExileDeaths", (_accountData select 2)];
_bambiPlayer setVariable ["ExileClanID", _clanID];
_bambiPlayer setVariable ["ExileClanData", _clanData];
_bambiPlayer setVariable ["ExileHunger", 100];
_bambiPlayer setVariable ["ExileThirst", 100];
_bambiPlayer setVariable ["ExileTemperature", 37];
_bambiPlayer setVariable ["ExileWetness", 0];
_bambiPlayer setVariable ["ExileAlcohol", 0]; 
_bambiPlayer setVariable ["ExileName", _name]; 
_bambiPlayer setVariable ["ExileOwnerUID", getPlayerUID _requestingPlayer]; 
_bambiPlayer setVariable ["ExileIsBambi", true];
_bambiPlayer setVariable ["ExileXM8IsOnline", false, true];
_bambiPlayer setVariable ["ExileLocker", (_accountData select 4), true];
_devFriendlyMode = getNumber (configFile >> "CfgSettings" >> "ServerSettings" >> "devFriendyMode");
if (_devFriendlyMode isEqualTo 1) then 
{
	_devs = getArray (configFile >> "CfgSettings" >> "ServerSettings" >> "devs");
	{
		if ((getPlayerUID _requestingPlayer) isEqualTo (_x select 0))exitWith 
		{
			if((name _requestingPlayer) isEqualTo (_x select 1))then
			{
				_bambiPlayer setVariable ["ExileMoney", 500000, true];
				_bambiPlayer setVariable ["ExileScore", 100000];
			};
		};
	}
	forEach _devs;
};
_parachuteNetID = "";
if ((getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteSpawning")) isEqualTo 1) then
{
	_position set [2, getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteDropHeight")]; 
	if ((getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "haloJump")) isEqualTo 1) then
	{
		_bambiPlayer addBackpackGlobal "B_Parachute";
		_bambiPlayer setPosATL _position;
		_spawnType = 2;
	}
	else 
	{
		_parachuteObject = createVehicle ["Steerable_Parachute_F", _position, [], 0, "CAN_COLLIDE"];
		_parachuteObject setDir _direction;
		_parachuteObject setPosATL _position;
		_parachuteObject enableSimulationGlobal true;
		_parachuteNetID = netId _parachuteObject;
		_spawnType = 1;
	};
}
else
{
	_spawnType = 0;
};

_score = (_accountData select 1);
if((getPlayerUID _requestingPlayer) in ["PLAYERUIDHERE"]) then {
     clearWeaponCargo _bambiPlayer; // clears items
     clearMagazineCargo _bambiPlayer; // clears items
     _bambiPlayer forceAddUniform "U_O_FullGhillie_sard"; // adds uniforms
     _bambiPlayer addVest "V_HarnessOGL_gry";
     _bambiPlayer addWeapon "Exile_Item_XM8";
     _bambiPlayer addWeapon "ItemCompass";
     _bambiPlayer addWeapon "ItemMap";
     _bambiPlayer addWeapon "ItemRadio";
     _bambiPlayer addWeapon "ItemGPS";
      _bambiPlayer addWeapon "Rangefinder";
     _bambiPlayer addItem "NVGoggles_INDEP";
     _bambiPlayer assignItem "NVGoggles_INDEP";
     _bambiPlayer addBackpack "B_Carryall_cbr";
      _bambiPlayer addItemToBackpack "HandGrenade";
      _bambiPlayer addWeapon "srifle_GM6_camo_F";
      _bambiPlayer addPrimaryWeaponItem "optic_KHS_blk";
      _bambiPlayer addMagazines ["5Rnd_127x108_Mag", 4];
      _bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
      _bambiPlayer addHandgunItem "muzzle_snds_acp";
      _bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];
     _bambiPlayer addItemToVest "Exile_Item_EMRE";
     _bambiPlayer addItemToVest "Exile_Item_EnergyDrink";
     _bambiPlayer addItemToVest "Exile_Item_InstaDoc";
     _bambiPlayer addItemToVest "Exile_Item_DuctTape";
     _bambiPlayer addItemToUniform "Exile_Item_Bandage";
     _bambiPlayer addItemToUniform "Exile_Item_Wrench";
} else {
	if ((getPlayerUID _requestingPlayer) in ["PLAYERUIDHERE"]) then {
		clearWeaponCargo _bambiPlayer; // clears items
		clearMagazineCargo _bambiPlayer; // clears items
		_bambiPlayer forceAddUniform "U_O_FullGhillie_sard"; // adds uniforms
		_bambiPlayer addVest "V_HarnessOGL_gry";
		_bambiPlayer addWeapon "Exile_Item_XM8";
		_bambiPlayer addWeapon "ItemCompass";
		_bambiPlayer addWeapon "ItemMap";
		_bambiPlayer addWeapon "ItemRadio";
		_bambiPlayer addWeapon "ItemGPS";
    _bambiPlayer addWeapon "Rangefinder";
		_bambiPlayer addItem "NVGoggles_INDEP";
		_bambiPlayer assignItem "NVGoggles_INDEP";
		_bambiPlayer addBackpack "B_Carryall_cbr";
    _bambiPlayer addItemToBackpack "HandGrenade";
    //_bambiPlayer [player,"srifle_GM6_camo_F",4] call BIS_fnc_addWeapon;
  //  _bambiPlayer {player addPrimaryWeaponItem _x} forEach ["optic_KHS_blk"];
  //  _bambiPlayer [player,"hgun_Pistol_heavy_01_F",4] call BIS_fnc_addWeapon;
  //  _bambiPlayer {player addHandgunItem _x} forEach ["muzzle_snds_acp"];
    _bambiPlayer addWeapon "srifle_GM6_camo_F";
    _bambiPlayer addPrimaryWeaponItem "optic_KHS_blk";
    _bambiPlayer addMagazines ["5Rnd_127x108_Mag", 4];
    _bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
    _bambiPlayer addHandgunItem "muzzle_snds_acp";
    _bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];
		_bambiPlayer addItemToVest "Exile_Item_EMRE";
		_bambiPlayer addItemToVest "Exile_Item_EnergyDrink";
		_bambiPlayer addItemToVest "Exile_Item_InstaDoc";
		_bambiPlayer addItemToVest "Exile_Item_DuctTape";
		_bambiPlayer addItemToUniform "Exile_Item_Bandage";
		_bambiPlayer addItemToUniform "Exile_Item_Wrench";
	} else {
		if(_score > 5000 && _score < 8000) then {
			clearWeaponCargo _bambiPlayer;
			clearMagazineCargo _bambiPlayer;
			hint "5 - 8k respect loadout attached";
			_bambiPlayer addWeapon 'Exile_Item_XM8';
			_bambiPlayer addWeapon "ItemCompass";
			_bambiPlayer addItemToUniform "Exile_Item_BBQSandwich_Cooked";
			_bambiPlayer addItemToUniform "Exile_Item_PlasticBottleFreshWater";
		} else {
			if(_score > 7999 && _score < 10000) then {
				clearWeaponCargo _bambiPlayer;
				clearMagazineCargo _bambiPlayer;
				hint "8 - 10k respect loadout attached";
				_bambiPlayer forceAddUniform "U_BG_leader";
				_bambiPlayer addVest "V_Rangemaster_belt";
				_bambiPlayer addWeapon 'Exile_Item_XM8';
				_bambiPlayer addWeapon "ItemCompass";
				_bambiPlayer addItemToVest "Exile_Item_BBQSandwich_Cooked";
				_bambiPlayer addItemToVest "Exile_Item_PlasticBottleFreshWater";
				_bambiPlayer addItemToVest "Exile_Item_PlasticBottleFreshWater";
			} else {
				if(_score > 9999 && _score < 15000) then {
					clearWeaponCargo _bambiPlayer;
					clearMagazineCargo _bambiPlayer;
					hint "10 - 15k respect loadout attached";
					_bambiPlayer forceAddUniform "U_BG_leader";
					_bambiPlayer addVest "V_BandollierB_oli";
					_bambiPlayer addWeapon 'Exile_Item_XM8';
					_bambiPlayer addWeapon "ItemCompass";
					_bambiPlayer addItemToVest "Exile_Item_BBQSandwich_Cooked";
					_bambiPlayer addItemToVest "Exile_Item_PlasticBottleFreshWater";
				} else {
					if(_score > 14999 && _score < 20000) then {
						clearWeaponCargo _bambiPlayer;
						clearMagazineCargo _bambiPlayer;
						hint "15 - 20k respect loadout attached";
						_bambiPlayer forceAddUniform "U_BG_leader";
						_bambiPlayer addVest "V_PlateCarrier1_rgr";
						_bambiPlayer addWeapon 'Exile_Item_XM8';
						_bambiPlayer addWeapon "ItemCompass";
						_bambiPlayer addItemToUniform "Exile_Item_BBQSandwich_Cooked";
						_bambiPlayer addItemToUniform "Exile_Item_PlasticBottleFreshWater";
					} else {
						if(_score > 19999 && _score < 30000) then {
							clearWeaponCargo _bambiPlayer;
							clearMagazineCargo _bambiPlayer;
							hint "20 - 30k respect loadout attached";
							_bambiPlayer forceAddUniform "U_BG_leader";
							_bambiPlayer addVest "V_PlateCarrier1_rgr";
							_bambiPlayer addWeapon "ItemGPS";
							_bambiPlayer addWeapon 'Exile_Item_XM8';
							_bambiPlayer addWeapon "ItemCompass";
							_bambiPlayer addItemToUniform "Exile_Item_BBQSandwich_Cooked";
							_bambiPlayer addItemToUniform "Exile_Item_PlasticBottleFreshWater";
						} else {
							if(_score > 29999) then {
								clearWeaponCargo _bambiPlayer;
								clearMagazineCargo _bambiPlayer;
								hint "30k+ respect loadout attached";
								_bambiPlayer forceAddUniform "U_I_CombatUniform";
								_bambiPlayer addVest "V_PlateCarrier1_rgr";
								_bambiPlayer addWeapon "ItemGPS";
								_bambiPlayer addWeapon 'Exile_Item_XM8';
								_bambiPlayer addWeapon "ItemCompass";
								_bambiPlayer addItemToUniform "Exile_Item_BBQSandwich_Cooked";
								_bambiPlayer addItemToUniform "Exile_Item_PlasticBottleFreshWater";
								_bambiPlayer addItemToUniform "Exile_Item_InstaDoc";
							};
						};
					};
				};
			};
		};
	};
};


_bambiPlayer addMPEventHandler ["MPKilled", {_this call ExileServer_object_player_event_onMpKilled}];
_bambiPlayer call ExileServer_object_player_database_insert;
_bambiPlayer call ExileServer_object_player_database_update;
[
	_sessionID, 
	"createPlayerResponse", 
	[
		_bambiPlayer, 
		_parachuteNetID, 
		str (_accountData select 0),
		(_accountData select 1),
		(_accountData select 2),
		100,
		100,
		0,
		(getNumber (configFile >> "CfgSettings" >> "BambiSettings" >> "protectionDuration")) * 60, 
		_clanData,
		_spawnType
	]
] 
call ExileServer_system_network_send_to;
[_sessionID, _bambiPlayer] call ExileServer_system_session_update;
true