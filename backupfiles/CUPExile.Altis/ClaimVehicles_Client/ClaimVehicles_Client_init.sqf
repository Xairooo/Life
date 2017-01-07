
if (!hasInterface || isServer) exitWith {};

private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;

    _code = compileFinal (preprocessFileLineNumbers _file);

    missionNamespace setVariable [_function, _code];
}
forEach
[
    ['ExileClient_ClaimVehicles_network_claimRequestSend','ClaimVehicles_Client\functions\ExileClient_ClaimVehicles_network_claimRequestSend.sqf']
];
