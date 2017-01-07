/**
 * ExileServer_object_player_network_createPlayerRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

private["_sessionID","_parameters","_requestingPlayer","_spawnLocationMarkerName","_playerUID","_accountData","_bambiPlayer","_cargoType","_uidloadout","_uids","_uidLoadoutMode"];
_sessionID = _this select 0;
_parameters = _this select 1;
_requestingPlayer = _sessionID call ExileServer_system_session_getPlayerObject;
_uidLoadoutMode = getNumber (configFile >> "UID_Loadout_Settings" >> "uidLoadoutMode");
if (_uidLoadoutMode isEqualTo 1) then
{
  _uids = getArray (configFile >> "UID_Loadout_Settings" >> "uids");
  if ((getPlayerUID _requestingPlayer) in _uids) then
  {
      _uidloadout = 1;
  }else
  {
      _uidloadout = 0;
  };
};
try
{
	if (isNull _requestingPlayer) then
	{
		throw format ["Session %1 requested a bambi character, but doesn't have a player object. Hacker or Monday?", _sessionID];
	};
	_spawnLocationMarkerName = _parameters select 0;
	_playerUID = getPlayerUID _requestingPlayer;
	if(_playerUID isEqualTo "")then
	{
		throw format ["Player: '%1' has no player UID. Arma/Steam Sucks!.",name _requestingPlayer];
	};
	_accountData = format["getAccountStats:%1", _playerUID] call ExileServer_system_database_query_selectSingle;
	_group = createGroup independent;
	_bambiPlayer = _group createUnit ["Exile_Unit_Player", [0,0,0], [], 0, "CAN_COLLIDE"];
	removeHeadgear _bambiPlayer;
	
	//Donator Loadout
	
  if (_uidloadout isEqualTo 1) then {
  
  _bambiplayer forceadduniform "U_B_FullGhillie_sard";
	_bambiPlayer addBackpack "B_Carryall_mcamo";
	_bambiPlayer addVest "V_TacVest_camo";
	_bambiPlayer addItem "Exile_Item_Rope";
	_bambiPlayer addItem "CUP_30Rnd_556x45_Stanag";
	_bambiPlayer addItem "CUP_30Rnd_556x45_Stanag";
	_bambiPlayer addItem "CUP_30Rnd_556x45_Stanag";
	_bambiPlayer addItem "CUP_30Rnd_556x45_Stanag";
	_bambiPlayer addItem "CUP_6Rnd_45ACP_M";
	_bambiPlayer addItem "CUP_6Rnd_45ACP_M";
	_bambiPlayer addItem "FirstAidKit";
	_bambiPlayer addItem "FirstAidKit";
	_bambiPlayer addItem "Exile_Item_EMRE";
	_bambiPlayer addItem "Exile_Item_MountainDupe";
	_bambiPlayer addWeapon "CUP_arifle_M4A1_desert";
	_bambiPlayer addWeapon "CUP_hgun_TaurusTracker455_gold";
	_bambiPlayer addPrimaryWeaponItem "CUP_muzzle_snds_M16_camo"; 
	_bambiPlayer addPrimaryWeaponItem "optic_Hamr";
	
  	{
  		_cargoType = _x call ExileClient_util_cargo_getType;
  		switch (_cargoType) do
  		{
  			case 1: 	{ _bambiPlayer addItem _x; };
  			case 2: 	{ _bambiPlayer addWeaponGlobal _x; };
  			case 3: 	{ _bambiPlayer addBackpackGlobal _x; };
  			case 4:		{ _bambiPlayer linkItem _x; };
  			default 					{ _bambiPlayer addItem _x; };
  		};
  	}
    forEach getArray(configFile >> "UID_Loadout_Settings" >> "loadOut");
  } else {
    {
      _cargoType = _x call ExileClient_util_cargo_getType;
      switch (_cargoType) do
      {
        case 1: 	{ _bambiPlayer addItem _x; };
        case 2: 	{ _bambiPlayer addWeaponGlobal _x; };
        case 3: 	{ _bambiPlayer addBackpackGlobal _x; };
        case 4:		{ _bambiPlayer linkItem _x; };
        default 					{ _bambiPlayer addItem _x; };
      };
    }
    forEach getArray(configFile >> "CfgSettings" >> "BambiSettings" >> "loadOut");
  };
	[_sessionID, _requestingPlayer, _spawnLocationMarkerName, _bambiPlayer, _accountData] call ExileServer_object_player_createBambi;
}
catch
{
	_exception call ExileServer_util_log;
};
