/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
#include "CDAH_crafting\logic\CDAH_CfgExileDelayedActions.hpp"
#include "MarXet\CfgMarXet.cpp"

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!:\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};

class CfgXM8
{
	extraApps[] = {"BRAmaRecipes","ExAd_VG","ExAd_Info","ExAd_CHVD","ExAd_Journal","ExAd_SB","ExAd_JX","ExAd_AttachChem","scanTower","treatWounds"};
	class BRAmaRecipes
	{
		controlID = 107000;
		title = "Recipies";
		logo = "ExAdClient\XM8\Apps\BRAmaRecipes\BRAma.paa";
		config = "ExAdClient\XM8\Apps\BRAmaRecipes\config.sqf";
		onLoad = "ExAdClient\XM8\Apps\BRAmaRecipes\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\BRAmaRecipes\onOpen.sqf";
	};
	class ExAd_VG
	{
		title = "Virtual Garage";
		controlID = 50000;					//IDC:50000 -> 50015 || These need to be unique and out of range from each other 
		logo = "ExadClient\XM8\Apps\VG\Icon_VG.paa";
		onLoad = "ExAdClient\XM8\Apps\VG\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\VG\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\VG\onClose.sqf";
	};
	class ExAd_Info
	{
		title = "Server Info";
		controlID = 50100;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		logo = "ExadClient\XM8\Apps\Info\Icon_SI.paa";
		onLoad = "ExAdClient\XM8\Apps\Info\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\Info\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\Info\onClose.sqf";
	};
	class ExAd_CHVD
	{
		title = "View Distance Settings";
		controlID = 50200;					//IDC:50200 -> 50102 || These need to be unique and out of range from each other
		config = "ExadClient\XM8\Apps\CHVD\config.sqf";
		logo = "ExadClient\XM8\Apps\CHVD\Icon_CHVD.paa";
		onLoad = "ExAdClient\XM8\Apps\CHVD\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\CHVD\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\CHVD\onClose.sqf";
	};
	class ExAd_Journal
	{
		title = "Journal";
		controlID = 50300;					//IDC:50300 -> 50305 || These need to be unique and out of range from each other
		config = "ExadClient\XM8\Apps\Journal\config.sqf";
		logo = "ExadClient\XM8\Apps\Journal\Icon_Journal.paa";
		onLoad = "ExAdClient\XM8\Apps\Journal\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\Journal\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\Journal\onClose.sqf";
	};
	class ExAd_SB
	{
		title = "Statsbar Settings";
		controlID = 50400;					//IDC:50400 -> 50475 || These need to be unique and out of range from each other
		logo = "ExadClient\XM8\Apps\SB_Settings\Icon_SB.paa";
		onLoad = "ExAdClient\XM8\Apps\SB_Settings\onLoad.sqf";
	};
	class ExAd_JX
	{
		title = "Unit Scanner";
		controlID = 85100;					//IDC:85100 -> 85200
		logo = "ExadClient\XM8\Apps\JX\logo.paa";
		onLoad = "ExAdClient\XM8\Apps\JX\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\JX\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\JX\onClose.sqf";
	};
	class ExAd_AttachChem
    {
        title = "Attach chemlight";
        controlID = 50500;                  //IDC:50400 -> 50475 || These need to be unique and out of range from each other
        logo = "ExAdClient\XM8\Apps\Chem\Icon_chem.paa";
        quickFunction = "ExileClientXM8CurrentSlide = 'apps';closeDialog 0;[] execVM 'ExAdClient\XM8\Apps\Chem\onOpen.sqf'";
    };
    class scanTower
    {
        title = "Scan communications";
        controlID = 50600;                  //IDC:50400 -> 50475 || These need to be unique and out of range from each other
        logo = "ExAdClient\XM8\Apps\scanTower\radarLogo.paa";
        quickFunction = "ExileClientXM8CurrentSlide = 'apps';closeDialog 0;[position player,30] execVM 'ExAdClient\XM8\Apps\scanTower\JohnO_script_hackCommsTower.sqf'";
    };
   	class treatWounds
    {
        title = "Treat wounds";
        controlID = 50700;                  //IDC:50400 -> 50475 || These need to be unique and out of range from each other
        logo = "ExAdClient\XM8\Apps\wounds\cross.paa";
        quickFunction = "ExileClientXM8CurrentSlide = 'apps';closeDialog 0;[] execVM 'ExAdClient\XM8\Apps\wounds\JohnO_script_treatWounds.sqf'";
    };

};

class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{
	#include "addons\crafting\CustomCrafting.hpp"
	#include "addons\crafting\ExileCrafting.hpp"
	#include "CDAH_crafting\vehicleRecipes\CDAH_Vehicle_recipies_config.hpp"
	#include "CDAH_crafting\deviceRecipes\CDAH_Device_recipies.hpp"
	#include "EBM\recipes.hpp" 
};

class CfgExileArsenal
{
	#include "EBM\prices.hpp"
	#include "TRADERS\APEX\ItemListAPEX.hpp"
	#include "TRADERS\ARMA3V\ItemListARMA3V.hpp"
	#include "TRADERS\ARMA3W\ItemListARMA3W.hpp"
	#include "TRADERS\CUPW\ItemListCUPW.hpp"
	#include "TRADERS\CUPV\ItemListCUPV.hpp"
	#include "TRADERS\Jonzie\ItemListJonzie.hpp"
	#include "TRADERS\TRYK\ItemListTRYK.hpp"
	#include "TRADERS\PODS\ItemListPODS.hpp"
	#include "TRADERS\CUSTOM\ItemListCUSTOM.hpp"
	#include "TRADERS\Exile\ItemListExile.hpp"
};


#include "cfg\CfgExileCustomCode.hpp" 

class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			// At this hour fire flies begin to spawn
			startHour = 16;

			// At this hour fire flies stop spawning
			endHour = 6;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {
				-6.93, 	//0
				-5.89,	//1
				-4.42,	//2
				-3.40, 	//3
				-2.68,	//4
				-1.10,	//5
				1.48,	//6
				2.63,	//7
				3.40,	//8
				4.66,	//9
				5.32,	//10
				6.80,	//11
				6.80,	//12
				5.32,	//13
				4.66,	//14
				3.40, 	//15
				2.63,	//16
				1.48,	//17
				-1.10,	//18
				-2.68,	//19
				-3.40,	//20
				-4.42,	//21
				-5.89,	//22
				-6.93, 	//23
				-7.93 	//24
			};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -3;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};

	class Namalsk: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 1;
		};

		class Breathing: Breathing
		{
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 1;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 1;
			contaminatedZones[] = 
			{
				{{3960.14,	8454.75,	152.862}, 	80, 	140},	// Object A1
				{{4974.70,	6632.82,	4.74293}, 	40, 	150},	// Object A2
				{{6487.92,	9302.03,	36.0014}, 	60, 	110}	// Sebjan Chemical Factory
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {-2.00,-1.77,-1.12,-0.10,1.24,2.78,4.40,6.00,7.46,8.65,9.50,9.90,9.90,9.50,8.65,7.46,6.00,4.40,2.78,1.24,-0.10,-1.12,-1.77,-2.00,-2.00};
		};
	};

	class Tanoa: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 0;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 1;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 20;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 30;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 5;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 3;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 80;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 135;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 1000;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	#include "CDAH_crafting\logic\CDAH_Class_tank.hpp"
	#include "EBM\menus.hpp"
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class Rearm: ExileAbstractAction
			{
				title = "Rearm";
				condition = "!(magazinesAllTurrets _this isEqualto [])"; //condition = "!(_this magazinesAllTurrets isEqualto [])";
				action = "['RearmVehicle', _this select 0] call ExileClient_action_execute";
			};

			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			/*
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			*/
			// Advanced repair
			class RepairInfoLand: ExileAbstractAction
			{
				title = "REPAIR INFO";
				condition = "true";
				action = "_this call JohnO_fnc_displayVehicleRepairInfo";
			};
			class ReplaceWheels: ExileAbstractAction
			{
				title = "Replace wheel";
				condition = "true";
				action = "_this call JohnO_fnc_repairWheels";
			};
			class RepairWheels: ExileAbstractAction
			{
				title = "Repair wheel";
				condition = "true";
				action = "_this call JohnO_fnc_repairSingleWheel";
			};
			class ScavengeWheels: ExileAbstractAction
			{
				title = "Scavenge wheel";
				condition = "true";
				action = "_this call JohnO_fnc_scavengeWheel";
			};
			class RepairBody: ExileAbstractAction
			{
				title = "Repair body";
				condition = "true";
				action = "_this call JohnO_fnc_vehicleRepairCar";
			};
			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class SaveVehicle : ExileAbstractAction
			{
				title = "SaveVehicle";
				condition = "((locked ExileClientInteractionObject) isEqualTo 1)";
				action = "['saveVehicle', [netId ExileClientInteractionObject, netId player]] call TRX_fnc_serverDispatch;";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "_this call TRX_fnc_canUpgrade";
				action = "[] spawn {[] call ExileClient_gui_xm8_show; UISleep 2; call XM8_VG_checkNearByVehicles}";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class Rearm: ExileAbstractAction
			{
				title = "Rearm";
				condition = "!(magazinesAllTurrets _this isEqualto [])"; //condition = "!(_this magazinesAllTurrets isEqualto [])";
				action = "['RearmVehicle', _this select 0] call ExileClient_action_execute";
			};	
			
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			/*
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			*/
			// Advanced repair
			class RepairInfoChopper: ExileAbstractAction
			{
				title = "REPAIR INFO";
				condition = "true";
				action = "_this call JohnO_fnc_displayVehicleRepairInfo";
			};
			class RepairMinor: ExileAbstractAction
			{
				title = "Minor repair";
				condition = "true";
				action = "_this call JohnO_fnc_repairchopperhalf";
			};
			class RepairFull: ExileAbstractAction
			{
				title = "Full repair";
				condition = "true";
				action = "_this call JohnO_fnc_repairchopper";
			};
			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
			class XG_ScoreBoard : ExileAbstractAction
			{
				title = "Open score board";
				condition = "true";
				action = "call XG_killboardClient";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
  	      	class Grind : ExileAbstractAction
     	  	{
          	  	title = "Grind Lock";
        	    condition = "call ExAd_fnc_canGrindLock";
            	action = "_this spawn ExAd_fnc_grindLock";
        	};

        	class RestoreLock : ExileAbstractAction
        	{
            	title = "Restore Lock";
            	condition = "_object call ExAd_fnc_canRestoreLock";
            	action = "_this spawn ExAd_fnc_restoreLock";
        	};
			
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

		};
	};
	class Resting
	{
		targetType = 2;
		target = "Exile_Construction_CampFire_Static";
		class Actions
		{
			// Sleeping mat
	        class rest : ExileAbstractAction
	        {
	            title = "Rest by fire";
	            condition = "true";
	            action = "[] spawn JohnO_fnc_restAtFire";
	        };
	        // Light crude fre
	         class attemptLight : ExileAbstractAction
	        {
	            title = "Attempt to light";
	            condition = "!(inflamed _this)";
	            action = "_this spawn JohnO_fnc_crudeLightFire";
	        };
	    };    
    };  
	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			class HackVG : ExileAbstractAction
       		{
            	title = "Hack Virtual Garage";
            	condition = "call ExAd_fnc_canHackVG";
            	action = "_this spawn ExAd_fnc_startHack";
        	};

			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			class Rearm: ExileAbstractAction
			{
				title = "Rearm";
				condition = "!(magazinesAllTurrets _this isEqualto [])"; //condition = "!(_this magazinesAllTurrets isEqualto [])";
				action = "['RearmVehicle', _this select 0] call ExileClient_action_execute";
			};	
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{

			class Drag : ExileAbstractAction
			{
				title = "Drag";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !(ExileClientIsHandcuffed) && !(ExileClientInteractionObject getVariable['IsBeingDragged',false])";
				action = "'Drag' call XG_DragPlayer";
			};
			class EndDrag : ExileAbstractAction
			{
				title = "Stop Dragging";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !(ExileClientIsHandcuffed) && (ExileClientInteractionObject getVariable['IsBeingDragged',false]) && ExileClientPlayerIsDragging";
				action = "'End' call XG_DragPlayer";
			};

			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			class Pressure: ExileAbstractAction
			{
				title = "Apply Pressure";
				condition = "((alive ExileClientInteractionObject) && (isBleeding ExileClientInteractionObject) && (ExileClientInteractionObject distance player < 3))";
				action = "_this call JohnO_fnc_applyPressureToWound";
			};
			class Bandage: ExileAbstractAction
			{
				title = "Apply Bandage";
				condition = "((alive ExileClientInteractionObject) && (isBleeding ExileClientInteractionObject) && ('Exile_Item_Bandage' in (magazines player)) && (ExileClientInteractionObject distance player < 3))";
				action = "_this call JohnO_fnc_applyBandageToPlayer";
			};
			class InstaDoc: ExileAbstractAction
			{
				title = "Apply InstaDoc";
				condition = "((alive ExileClientInteractionObject) && ('Exile_Item_InstaDoc' in (magazines player)) && (ExileClientInteractionObject distance player < 3))";
				action = "_this call JohnO_fnc_applyInstaDocToPlayer";
			};
			//////////////Added by [_ZEN_]happydayz/////////////////

			class Revive : ExileAbstractAction
			{
				title = "Revive";
				condition = "(!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['EnigmaRevivePermitted', true]) && (magazines player find 'Exile_Item_Defibrillator' >= 0))";
				action = "_this spawn Enigma_RevivePlyr";
			};
			
			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};

	class Man 
	{
		targetType = 2;
		target = "Man";

		class Actions 
		{
			class StudyCorpse: ExileAbstractAction
			{
				title = "Study and hide corpse";
				condition = "(!(alive ExileClientInteractionObject) && ((ExileClientInteractionObject getVariable ['ExileReborn_disableInventory',-1]) isEqualTo -1) && (player distance ExileClientInteractionObject < 2))";
				action = "_this call JohnO_fnc_studyCorpse";
			};
			class Bribe: ExileAbstractAction
			{
				title = "Bribe survivor";
				condition = "((alive ExileClientInteractionObject) && ((ExileClientInteractionObject getVariable ['ExileReborn_survivor',false]) isEqualTo true) && (player distance ExileClientInteractionObject < 2))";
				action = "_this call JohnO_fnc_bribeSurvivor";
			};	
			class Follow: ExileAbstractAction
			{
				title = "Come with me?";
				condition = "((alive ExileClientInteractionObject) && ((ExileClientInteractionObject getVariable ['ExileReborn_survivor_isFollowing',-1]) isEqualTo -1) && ((ExileClientInteractionObject getVariable ['ExileReborn_survivor',false]) isEqualTo true) && (player distance ExileClientInteractionObject < 2))";
				action = "_this call JohnO_fnc_survivorFollowMe";
			};	
			class Leave: ExileAbstractAction
			{
				title = "Leave me alone!";
				condition = "((alive ExileClientInteractionObject) && !((ExileClientInteractionObject getVariable ['ExileReborn_survivor_isFollowing',-1]) isEqualTo -1) && ((ExileClientInteractionObject getVariable ['ExileReborn_survivor',false]) isEqualTo true) && ((player getVariable ['ExileReborn_survivor_isFollowingMe',false]) isEqualTo true) && (player distance ExileClientInteractionObject < 2))";
				action = "_this call JohnO_fnc_survivorLeave";
			};		
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	// CDAH CRAFTING InteractionModles
	#include "CDAH_crafting\logic\CDAH_interactionModels.hpp"
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud"
			
			//Tanoa
			//"watertank_01_f",
			//"watertank_02_f",
			//"watertank_03_f",
			//"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 10000000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 120;
	thirstDecay = 110;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 0.5;

	// Health regen if over BOTH
	thirstRegen = 70;
	hungerRegen = 70;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.3;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
};
class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 150;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 200;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 300;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 450;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 500;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			30 					}, // Level 1
		{10000,					30,			60 					}, // Level 2 
		{15000,					45,			90 					}, // Level 3
		{20000,					60,			120					}, // Level 4
		{25000,					75,			150					}, // Level 5
		{30000,					90,			180					}, // Level 6
		{35000,					105,		210					}, // Level 7
		{40000,					120,		240					}, // Level 8
		{45000,					135,		270					}, // Level 9
		{50000,					150,		300					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 2;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 10;
};
class CfgTraderCategories
{
	#include "EBM\traders.hpp"
	#include "TRADERS\APEX\TraderCategoriesAPEX.hpp"
	#include "TRADERS\ARMA3V\TraderCategoriesARMA3V.hpp"
	#include "TRADERS\ARMA3W\TraderCategoriesARMA3W.hpp"
	#include "TRADERS\CUPW\TraderCategoriesCUPW.hpp"
	#include "TRADERS\CUPV\TraderCategoriesCUPV.hpp"
	//#include "TRADERS\EBM\traders.hpp"
	//#include "TRADERS\HAP\TraderCategoriesHAP.hpp"
	//#include "TRADERS\HLC\TraderCategoriesHLC.hpp"
	//#include "TRADERS\HVP\TraderCategoriesHVP.hpp"
	//#include "TRADERS\HWP\TraderCategoriesHWP.hpp"
	#include "TRADERS\Jonzie\TraderCategoriesJonzie.hpp"
	//#include "TRADERS\MASV\TraderCategoriesMASV.hpp"
	//#include "TRADERS\MASW\TraderCategoriesMASW.hpp"
	//#include "TRADERS\NIA\TraderCategoriesNIA.hpp"
	//#include "TRADERS\R3FW\TraderCategoriesR3FW.hpp"
	//#include "TRADERS\RHSGREF\TraderCategoriesGREF.hpp"
	//#include "TRADERS\RHSV\TraderCategoriesRHSV.hpp"
	//#include "TRADERS\RHSW\TraderCategoriesRHSW.hpp"
	#include "TRADERS\TRYK\TraderCategoriesTRYK.hpp"
	#include "TRADERS\PODS\TraderCategoriesPODS.hpp"	
	#include "TRADERS\CUSTOM\TraderCategoriesCUSTOM.hpp"
	#include "TRADERS\Exile\TraderCategoriesExile.hpp"
};

class CfgTraders
{
	#include "TRADERS\CfgTraders.hpp"
};

class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.25;
	
	rekeyPriceFactor = 0.5;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 25000;
		Level5 = 40000;
		Level6 = 55000;
	};
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Hex",		{"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"};},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUVXL_Black", 100, "Black", {""};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};},
			{"Exile_Car_Van_Black",	150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};},
			{"Exile_Car_Van_Black",	150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// IFRIT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"};},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	class Exile_Car_BTR40_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"};},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] = 
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"};},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"};},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class B_G_Boat_Transport_02_F
	{
		skins[] = 
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] = 
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Infantry Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_infantry_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Vehicle Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_vehicle_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"};},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};}
		};
	};
	
	class I_C_Offroad_02_unarmed_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};}
		};
	};
};
class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};

	class CfgNotifications
	{
		class Success
		{
			description = "%1";
			title = "Success";
			iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIcon_ca.paa";
			iconText = "";
			color[] = { 0.7, 0.93, 0, 1 };
			duration = 5;
			priority = 0;
			difficulty[] = {};
		};
		class Whoops
		{
			description = "%1";
			title = "Error";
			iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIcon_ca.paa";
			iconText = "";
			color[] = { 0.7, 0.93, 0, 1 };
			duration = 5;
			priority = 0;
			difficulty[] = {};
		};
		class ZCP_Init
		{
			description = "%1";
			title = "ZCP Spawned";
			iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIcon_ca.paa";
			iconText = "";
			color[] = { 0.7, 0.93, 0, 1 };
			duration = 5;
			priority = 0;
			difficulty[] = {};
		};
		class ZCP_Capped
		{
			description = "%1";
			title = "ZCP Capped";
			iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIcon_ca.paa";
			iconText = "";
			color[] = { 0.7, 0.93, 0, 1 };
			duration = 5;
			priority = 0;
			difficulty[] = {};
		};
		class ZCP_Capping
		{
			description = "%1";
			title = "ZCP alert";
			iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIcon_ca.paa";
			iconText = "";
			color[] = { 0.7, 0.93, 0, 1 };
			duration = 5;
			priority = 0;
			difficulty[] = {};
		};
	};
};