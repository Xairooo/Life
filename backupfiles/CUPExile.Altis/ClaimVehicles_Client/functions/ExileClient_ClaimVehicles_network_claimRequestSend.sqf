
_object = cursorTarget;
_vehicleObj = _object;
_objectNetId = netId _object;
_object = typeOf _object;

try
{
    if !(local _vehicleObj) then
    {
        throw "Get in the drivers seat first";
    };
    if !(_object isKindOf "AIR" || _object isKindOf "CAR" || _object isKindOf "TANK") then
    {
        throw "That's not a Vehicle... derp!";
    };
    if !("Exile_Item_Codelock" in (player call ExileClient_util_playerCargo_list)) then
    {
        throw "You need a codelock to do that!";
    };

    _pincode = 4 call ExileClient_gui_keypadDialog_show;

    if !(count _pinCode == 4) then
    {
        throw "Your pincode must be 4 digits!";
    };

    ["saveVehicleRequest",[_objectNetId,_pinCode]] call ExileClient_system_network_send;

    _vehicleObj lock 2;

    call ExileClient_gui_interactionMenu_unhook;

}
catch
{
    ["ErrorTitleAndText", ["Claim Vehicles", _exception]] call ExileClient_gui_toaster_addTemplateToast;
};
