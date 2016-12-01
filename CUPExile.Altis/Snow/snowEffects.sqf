/*
W4lly63 2016
[]execVM "Snow\snowEffects.sqf"

*/

WY_fnc_envirWind ={

	private ["_yyy","_xxx","_soundTime","_windSleep","_posSoundsArray","_soundsArray","_soundSelected","_soundTime2","_soundSleep","_soundNumb","_windNumb","_windSelected","_windLowSelected","_wn","_sn"];


	_soundTime = 0;
	changeWindSoundLvl = true;
	_xxx=0;_yyy=0;
	_wn = _this select 0;
	_sn = _this select 1;

	while {true} do {

    	waitUntil {alive player};
	    _xxx = round(random 200) -100;
	    _yyy = round(random 200) -100;
	    _soundNumb = floor random _sn;
	    _windNumb = floor random _wn;
	    _soundSelected = format ["cr%1",_soundNumb];
	    _windSelected = format ["wn%1",_windNumb];
	    _windLowSelected = format ["wnl%1",_windNumb];
    	objSP = "Land_Bucket_F" createVehicleLocal position player;
    	objSP attachTo [player,[_xxx,_yyy,0]];
    	objSP hideObject true;
    	objSP allowDamage false;
   	    objSP enableSimulation false;
    	if(changeWindSoundLvl || (gusts < 0.5))	then {
        	player say [_windLowSelected, 5,1];
		};
    	if(!changeWindSoundLvl && (gusts >= 0.5))	then {
        	player say [_windSelected, 5,1];
			if ((vehicle player == player)) then {
				detach objSP;
            	objSP say3D [_soundSelected,100,1];
	    	};
		};
		_soundTime = (diag_tickTime + 18);
		waitUntil {(diag_tickTime  > _soundTime)};
		deleteVehicle objSP;
		if(overcast < 0.2) then {changeWindSoundLvl = true;};
		_windSleep = floor random 10;
		uiSleep _windSleep;
	};
	(true);
};

#include "fn_settings.sqf"


if(_windOn) then {
	0 = [_wn,_sn] call WY_fnc_envirWind;
};

