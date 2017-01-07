if !((vehicle player) isEqualTo player) exitWith {};

//We check if we have money for that
if ("ItemRadio" in assignedItems player) then
{
	if(!ExilePlayerInSafezone) then 
	{
		titleText ["", "PLAIN DOWN"];	
		player removeAction DeployBikeAction;
		player unlinkItem "ItemRadio";
		player playActionNow "Medic";
		_spawnPos = player modelToWorld [0,2,0];
		_spawnDir = (getDir player) -90;
		do_MakeBike = [player, _spawnPos, _spawnDir];
		uiSleep 3;
		publicVariableServer "do_MakeBike";
		uiSleep 1;
		["<t size = '.8'>BIKE DEPLOYED</t>",0,0,2,0.5] spawn bis_fnc_dynamictext;
		systemchat("Bike deployed");
	}
	else
	{
		["<t size = '.8'>Can't deploy bikes in safe zones</t>",0,0,2,0.5] spawn bis_fnc_dynamictext;
		systemchat("Can't deploy bikes in safe zones");
	};
}
else
{
	["<t size = '.8'>Deploying a bike requires having a radio equipped</t>",0,0,2,0.5] spawn bis_fnc_dynamictext;
	systemchat("Deploying a bike requires having a radio equipped");
};