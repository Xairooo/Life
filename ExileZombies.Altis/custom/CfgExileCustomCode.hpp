class CfgExilecustomCode 
{	
	//Custom Loadout
	ExileServer_object_player_network_createPlayerRequest = "custom\client\ExileServer_object_player_network_createPlayerRequest.sqf";
	
	//XM8 Apps
	ExileClient_gui_xm8_slide_apps_onOpen = "xm8Apps\ExileClient_gui_xm8_slide_apps_onOpen.sqf";
	
	//Safezones
	ExileClient_object_player_thread_safeZone = 			"SecureSafezones\GG_safeZone.sqf";
	ExileClient_object_player_event_onLeaveSafezone = 		"SecureSafezones\GG_onLeaveSafezone.sqf";
	ExileServer_system_trading_network_wasteDumpRequest = 	"SecureSafezones\GG_wasteDumpRequest.sqf";
	ExileClient_object_player_event_onInventoryOpened = 	"SecureSafezones\GG_onInventoryOpened.sqf";
	ExileClient_object_player_event_onEnterSafezone = 		"SecureSafezones\GG_onEnterSafezone.sqf";
	
	//RocketLauncher Fix
	ExileClient_util_playerEquipment_add = "custom\client\ExileClient_util_playerEquipment_add.sqf";
	
	//Build limits
	ExileClient_construction_handleAbort = "custom\DTG_Build_Limits\ExileClient_construction_handleAbort.sqf";
	ExileClient_object_item_construct = "custom\DTG_Build_Limits\ExileClient_object_item_construct.sqf";
	ExileClient_construction_thread = "custom\DTG_Build_Limits\ExileClient_construction_thread.sqf";
	
	//ExAd
	ExileServer_system_territory_database_load = "ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf";
	ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
	ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
	
	//Base Spawning
	ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick = "custom\DTG_Spawn_Override\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
	ExileClient_gui_selectSpawnLocation_show = "custom\DTG_Spawn_Override\ExileClient_gui_selectSpawnLocation_show.sqf";

	
};