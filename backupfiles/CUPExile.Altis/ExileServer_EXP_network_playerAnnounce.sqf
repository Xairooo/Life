private ["_sender","_message"];

_sender = (_this select 0) call ExileServer_system_session_getPlayerObject;
_message = (_this select 1 select 0);

["systemChatRequest", [_message]] call ExileServer_system_network_send_broadcast;