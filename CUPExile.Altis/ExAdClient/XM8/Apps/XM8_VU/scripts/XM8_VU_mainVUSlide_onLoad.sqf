/*	
	XM8 VU app by Jan Babor
	
	Vehicle upgrade app that works with the ExAd Vehicle Upgrade plugin. 
	
	file: XM8_VU\scripts\XM8_VU_mainVUSlide_onLoad.sqf
	function: XM8_VU_mainVUSlide_onLoad
*/
private ["_makeButton","_makeBackground","_makeStructuredText","_makePicture","_makeList","_getNextIDC","_pW","_pH","_display","_slides","_unloadScript","_error","_thisSlide"];

_makeButton = {
	params ["_parent","_idc","_position","_action","_text","_tooltip"];
	private ["_ctrl"];
	_ctrl = _display ctrlCreate ["RscButtonMenu",_idc,_parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetText _text;
	_ctrl ctrlSetEventHandler ["ButtonClick",_action];
	_ctrl ctrlSetTooltip _tooltip;
	_ctrl ctrlCommit 0;
	_ctrl ctrlEnable false;
	_ctrl;
};

_makeBackgroundGUI = {
	params ["_parent","_idc","_position"];
	private ["_ctrl"];
	_ctrl = _display ctrlCreate ["RscBackgroundGUI", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlCommit 0;
	_ctrl ctrlSetBackgroundColor [0,0,0,0.5];
	_ctrl;
};

_makeFrame = {
	params ["_parent","_idc","_position"];
	private ["_ctrl"];
	_ctrl = _display ctrlCreate ["RscFrame", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlEnable false;
	_ctrl ctrlCommit 0;
	_ctrl;
};

_makeStructuredText = {
	params ["_parent","_idc","_position","_text","_font","_size","_color","_align","_shadow"];
	private ["_ctrl"];
	_ctrl = _display ctrlCreate ["RscStructuredText", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetStructuredText (parseText format ["<t shadow='%6' font='%5' align='%4' size='%2' color='%3'>%1</t>", _text,_size,_color, _align,_font,_shadow]);
	_ctrl ctrlEnable false;
	_ctrl ctrlCommit 0;
	_ctrl;
};

_makePicture = {
	params ["_parent","_idc","_position","_picture","_color","_enable","_keepAspect","_tooltip"];
	private ["_ctrl"];
	_ctrl = _display ctrlCreate [(if (_keepAspect) then {"RscPictureKeepAspect"} else {"RscPicture"}), _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetText _picture;
	_ctrl ctrlSetTextColor _color;
	_ctrl ctrlEnable _enable;
	_ctrl ctrlSetTooltip _tooltip;
	_ctrl ctrlCommit 0;
	_ctrl;
};

_makeList = {
	params ["_parent","_idc","_position","_actionOnSelChanged","_tooltip"];
	private ["_ctrl"];
	_ctrl = _display ctrlCreate ["RscListBox",_idc,_parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetEventHandler ["LBSelChanged",_actionOnSelChanged];
	_ctrl ctrlSetTooltip _tooltip;
	_ctrl ctrlCommit 0;
	_ctrl;
};

_getNextIDC = {
	params ["_key"];
	private ["_slideClassName","_baseIDC","_result","_map"];
	_slideClassName = "mainVUSlide";
	_map = XM8_VU_mainVUSlideIDCmap;
	_baseIDC = getNumber (missionConfigFile >> "CfgXM8" >> _slideClassName >> "controlID");
	_result = _baseIDC + (_map pushBack _key);
	_result;
};

_pW = 0.025;
_pH = 0.04;
_leftCol = 1;
_leftColW = 12.8;
_rightCol = _leftCol + _leftColW + 2;
_rightColW = _leftColW + 3;
_margin = 0.2;

_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
if (isNull _display) exitWith {_error = "Error loading XM8 VU app, display is null"; systemChat _error; diag_log _error;};
_slides = _display displayCtrl 4007;
if (isNull _slides) exitWith {_error = "Error loading XM8 VU app, slides control is null"; systemChat _error; diag_log _error;};

_unloadScript = '
	if (ExileClientXM8CurrentSlide == "mainVUSlide") then {
		ExileClientXM8CurrentSlide = "sideApps";
	};
	ExAd_VU_curVeh = nil;
';
_display displayAddEventHandler ["unload",_unloadScript];

XM8_VU_mainVUSlideIDCmap = [];

_thisSlide = _display ctrlCreate ["RscExileXM8Slide",("mainVUSlide" call _getNextIDC),_slides];

[_thisSlide,("backButton" call _getNextIDC),[27.6 * _pW, 17.7 * _pH, 6 * _pW, 1 * _pH],'["sideApps", 1] call ExileClient_gui_xm8_slide;',"GO BACK",""] call _makeButton;

/*Upgrade recipe*/
[_thisSlide,("InfoTitle" call _getNextIDC),[_rightCol * _pW, 2.75 * _pH, _rightColW * _pW, 1 * _pH],"Recipe","PuristaMedium",1.2,"#ffffff","left",1] call _makeStructuredText;
[_thisSlide,("InfoBgBox" call _getNextIDC),[_rightCol * _pW, 4 * _pH, _rightColW * _pW, 13.5 * _pH]] call _makeBackgroundGUI;

_idcInfoPic = "InfoPic" call _getNextIDC;
[_thisSlide,_idcInfoPic,[(_rightCol + 9) * _pW, 4 * _pH, 6.75 * _pW, 5.5 * _pH],"",[1,1,1,1],false,true,""] call _makePicture;

_idcInfoStr = "InfoVehStr" call _getNextIDC;
[_thisSlide,_idcInfoStr,[(_rightCol + _margin) * _pW, (4 + _margin) * _pH, (_rightColW - 2 * _margin) * _pW, (13.5 - 2 * _margin) * _pH],"","PuristaMedium",0.75,"#ffffff","left",1] call _makeStructuredText;

/*UpgradeTo*/
_upgBtn = "upgButton" call _getNextIDC;
_idcUpgVehList = "upgToList" call _getNextIDC;

[_thisSlide,("SubTitle2" call _getNextIDC),[_leftCol * _pW, 10.25 * _pH, _leftColW * _pW, 1 * _pH],"Available Upgrades","PuristaMedium",1.2,"#ffffff","left",1] call _makeStructuredText;

[_thisSlide,_upgBtn,[_leftCol * _pW, 16.5 * _pH, _leftColW * _pW, 1 * _pH],format["[%1] call XM8_VU_startUpgrade",_idcUpgVehList],"Upgrade",""] call _makeButton;

[_thisSlide,_idcUpgVehList,[_leftCol * _pW, 11.5 * _pH, _leftColW * _pW, 5 * _pH],format["[_this select 0,%1,%2,%3] call XM8_VU_elChanged_upgradeTo",_idcInfoPic,_idcInfoStr,_upgBtn],""] call _makeList;

/*Availabe vehicles*/
[_thisSlide,("SubTitle1" call _getNextIDC),[_leftCol * _pW, 2.75 * _pH, _leftColW * _pW, 1 * _pH],"Upgrade Vehicle","PuristaMedium",1.2,"#ffffff","left",1] call _makeStructuredText;
[_thisSlide,("nearByVehList" call _getNextIDC),[_leftCol * _pW, 4 * _pH, _leftColW * _pW, 5 * _pH],format["[_this select 0,%1] call XM8_VU_elChanged_Available",_idcUpgVehList],""] call _makeList;