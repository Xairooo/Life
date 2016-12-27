class CfgExilecustomCode 
{	
	//EBM LootSpawner Fix
	Exileclient_system_lootmanager_thread_spawn = "EBM\exileclient_system_lootmanager_thread_spawn.sqf";
	//RocketLauncher Fix
	ExileClient_util_playerEquipment_add = "custom\client\ExileClient_util_playerEquipment_add.sqf";
	
	//ExAd
	ExileServer_system_territory_database_load = "ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf";
	ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
	ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
	
	//Base Spawning
	ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick = "custom\DTG_Spawn_Override\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
	ExileClient_gui_selectSpawnLocation_show = "custom\DTG_Spawn_Override\ExileClient_gui_selectSpawnLocation_show.sqf";
	
	ExileClient_object_player_event_onInventoryOpened = "custom\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf"; //Happys Revive AntiDupe ---NEW with v0.65
	
	//Igiload
	ExileClient_object_player_event_onEnterSafezone = "ExileClient_object_player_event_onEnterSafezone.sqf";
	
	//Vehicle Protection System
    ExileServer_object_player_database_load = "overrides\ExileServer_object_player_database_load.sqf";
    ExileServer_object_vehicle_database_load = "overrides\ExileServer_object_vehicle_database_load.sqf";
    ExileServer_object_vehicle_database_update = "overrides\ExileServer_object_vehicle_database_update.sqf";

	// Kill Messages
	ExileServer_object_player_event_onMpKilled = "overrides\KillMessages\ExileServer_object_player_event_onMpKilled.sqf"; // Make sure this location matches where you copied the file..
	
	//Update to 1.66
	ExileClient_gui_postProcessing_initialize = "fixes\ExileClient_gui_postProcessing_initialize.sqf";
	ExileClient_gui_postProcessing_reset = "fixes\ExileClient_gui_postProcessing_reset.sqf";
	ExileClient_gui_postProcessing_toggleDialogBackgroundBlur = "fixes\ExileClient_gui_postProcessing_toggleDialogBackgroundBlur.sqf";
	ExileClient_object_player_death_startBleedingOut = "fixes\ExileClient_object_player_death_startBleedingOut.sqf";
	ExileClient_object_player_event_onKilled = "fixes\ExileClient_object_player_event_onKilled.sqf";

	// CDAH CRAFTING Overwrite
	ExileClient_object_item_craft =							"CDAH_crafting\logic\CDAH_ExileClient_object_item_craft.sqf"; 
	ExileClient_gui_crafting_show =							"CDAH_crafting\logic\CDAH_ExileClient_gui_crafting_show.sqf";
	ExileServer_object_vehicle_carefulCreateVehicle =		"CDAH_crafting\logic\CDAH_ExileServer_object_vehicle_carefulCreateVehicle.sqf";
	ExileClient_action_execute =                            "CDAH_crafting\logic\CDAH_ExileClient_action_execute.sqf";

	ExileClient_object_player_stats_update = "overrides\ExileClient_object_player_stats_update.sqf";	
	// Disable that stupid 5 waypoint bullshit..
	ExileClient_gui_map_event_onMouseButtonUp = "overrides\ExileClient_gui_map_event_onMouseButtonUp.sqf";
	//disable PP effect in rad zone if u have a gask mask
	ExileClient_system_radiation_thread_update = "overrides\ExileClient_system_radiation_thread_update.sqf";
	// Custom keys
	ExileClient_gui_hud_event_onKeyDown = "overrides\ExileClient_gui_hud_event_onKeyDown.sqf";
	// Make it snow based off altitude
	ExileClient_system_snow_thread_update = "overrides\ExileClient_system_snow_thread_update.sqf";
	// Bleed when hit
	ExileClient_object_player_event_onHandleDamage = "overrides\ExileClient_object_player_event_onHandleDamage.sqf";
    // fix temp
    ExileClient_object_player_stats_updateTemperature = "overrides\ExileClient_object_player_stats_updateTemperature.sqf";
    // Make toasts last longer
    ExileClient_gui_toaster_addToast = "overrides\ExileClient_gui_toaster_addToast.sqf"; 
    // Change health scanner
    ExileClient_gui_xm8_slide_healthScanner_onOpen = "overrides\ExileClient_gui_xm8_slide_healthScanner_onOpen.sqf";
    // Stats panel
    ExileClient_gui_hud_renderStatsPanel = "overrides\ExileClient_gui_hud_renderStatsPanel.sqf";
    // Disable territory announcment
    ExileClient_util_world_getNearestLocationName = "overrides\ExileClient_util_world_getNearestLocationName.sqf";
    // Implement bush kits -- Why hasnt exile done this? Probably broken, lets find out..
    ExileClient_object_bush_attachGreenBush = "overrides\ExileClient_object_bush_attachGreenBush.sqf";
    // Custom sound on hit
    //ExileClient_object_player_event_onHit = "overrides\ExileClient_object_player_event_onHit.sqf";
    /** Server overrides **/
    // Allow server to check season for key frames
    ExileServer_system_weather_thread_weatherSimulation = "overrides\server\ExileServer_system_weather_thread_weatherSimulation.sqf";
    // Make sticks n leaves spawn when cutting trees
    ExileServer_object_tree_network_chopTreeRequest = "overrides\server\ExileServer_object_tree_network_chopTreeRequest.sqf";
    // Stop earthquakes destroying buildings near Reborn safe zones
    ExileServer_system_event_earthQuake_start = "overrides\server\ExileServer_system_event_earthQuake_start.sqf";
    // more room for larger vehicles to spawn
    ExileServer_system_trading_network_purchaseVehicleRequest = "overrides\server\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	
};