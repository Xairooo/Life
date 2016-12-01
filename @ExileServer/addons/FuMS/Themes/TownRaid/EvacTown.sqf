//TestFunction.sqf
// Horbin
// 1/21/15
// Based upon drsubo Mission Scripts

[
["EvacTown", 200], // Mission Title NOSPACES!, and encounter radius
["Evac","mil_objective","ELLIPSE","ColorRed","FDiagonal",200],    // Map Markers ["MapText", "SHAPE", "COLOR", "FILL", size];
   // type is "mil_objective"
[  
    [// NOTIFICATION Messages and Map display Control.
	true, "ALL",0, // Notify players via Radio Message, radio channel, range from encounter center (0=unlimited.
    false, // Notify players via global message
    false,// Show encounter area on the map
    0,    // Win delay: Time in seconds after a WIN before mission cleanup is performed
    0       // Lose delay: Time in seconds after a lose before mission cleanup is performed
          //NOTE: the above delay must occur before the mission is considered 'complete' by the mission manager control loop.
    ],
    // Spawn Mission Message
["XFILL assets inbound!",
    "Evac on its way!",
    "XFILL assets are inbound, be ready!"
],
    
    // Mission Success Message
["Mission Success",
    "",
    ""
],
  
    // Mission Failure Message
["Mission Failure!",
    "",
    ""
] 
],
[  //  Loot Config:  Refer to LootData.sqf for specifcs
["None" , [0,0] ], //[static loot, offset location] - spawns with the mission
["None" , [0,0] ], // Win loot, offset location - spawns after mission success
["None" , [0,0] ]  // Failure loot, offset location - spawns on mission failure
],
[//BUILDINGS: persist = 0: building deleted at event completion, 1= building remains until server reset.
 //   ["Land_Device_disassembled_F",[0,0],0,0]   //type, offset, rotation, presist flag
],
[ // AI GROUPS. Only options marked 'Def:' implemented.
//   [["RESISTANCE","COMBAT","RED","COLUMN"],   [  [1,"Sniper"],[2,"Rifleman"],[2,"Hunter"]  ],   ["BoxPatrol",[0,75],[0,0],[0]   ]],
//    [["RESISTANCE","COMBAT","RED","LINE"],   [  [3,"Rifleman"]                                         ],   ["Guard",[-20,10],[0,0],[70] ]],
//[["RESISTANCE","COMBAT","RED","LINE"],   [  [3,"LMG"]           ],     ["BoxPatrol",[50,250],[0,0],[150]     ]]
//[["RESISTANCE","COMBAT","RED","LINE"],   [  [3,"Rifleman"],[1,"LMG"] ],   ["Explore",[6,6],[0,0],[150]     ]],
//[["RESISTANCE","COMBAT","RED","LINE"],   [  [3,"Rifleman"]           ],   ["BoxPatrol",[-6,-6],[0,0],[0]     ]]
],
//Example: PatrolBehavior: ["BoxPatrol", [100,0], [0,0],0 ]  
// AI will spawn 100m east of encounter center, a 4 point patrol will be set up at 80% encounter radius. AI will move to this and start patrolling.
// spawnoffsetloc: [x,y] where x and y are offsets in meters from the encounter center.Sets the spawn location for the group.
// patroloffsetloc:[x,y] where x and y are offsets in meters from encounter center. Sets the center of the group's patrol zone,
//                     or where it should travel too before starting its patrol pattern.
// radius: in meters - used in establishing patrol geometry. If zero, then 80% of encounter radius will be used.
//###Patrol Options### 
//Def:   "Perimeter", spawnloc, patrolloc, radius: - 12 waypoints set at radius from loc, group goes from point to point
//Def:   "BoxPatrol", spawnloc, patrolloc, radius: - 4 waypoints set at radius from loc, group goes from point to point
//Def:  "Explore", spawnloc, patrolloc, radius: - 12 waypoints set up at radius from loc, group moves randomly from point to point
//Def:  "Guard", spawnloc, patrolloc, radius: - group patrols inside of buildings found within radius of loc.
//Def:  "Sentry", spawnloc, patrolloc radius: - group moves to nearest building and takes up station in highest points within the building
//     NOTE: if no buildings are located within 'radius' both Guard and Sentry will locate nearest buildings to the encounter and move there!
//  "Loiter", loc, radius: - group just hangs out, in an unaware mode in vicinity of loc-radius.
//  "Convoy", loc, data: group follows roads from startloc to stoploc, then loops back.
//  "XCountry", loc, data: group goes from startloc to stoploc, then loops back.

// Vehicles
[
    [  // Convoy #1    South
 [         // Vehicle                                 Offset     Crew (only 1 type!)   CargoLoot (see Loot section below for more detail!)
   [  FuMS_Mil_Hemmts,[0,-600],[1,"Rifleman"],        "Truck01"      ] 
    ],[  
    // Drivers                                                         # and type  |         Patrol     |    spawn   | dest  | 'Patrol' options
   [["EAST","COMBAT","RED","COLUMN"],   [  [1, "Driver"]  ],   ["Convoy",[0,-600],[0,0],["NORMAL",true,true, true, "XFILL"]   ]]
  ],[   

     ]
   ],
     [  // Convoy #2    North
 [         // Vehicle                                 Offset     Crew (only 1 type!)   CargoLoot (see Loot section below for more detail!)
   [  FuMS_Mil_Hemmts,[0,600],[1,"Rifleman"],        "Truck01"      ] 
    ],[  
    // Drivers                                                         # and type  |         Patrol     |    spawn   | dest  | 'Patrol' options
   [["EAST","COMBAT","RED","COLUMN"],   [  [1, "Driver"]  ],   ["Convoy",[0,600],[0,0],["NORMAL",true,true, true,"XFILL"]   ]]
  ],[   

     ]
   ],
     [  // Convoy #3  East
 [         // Vehicle                                 Offset     Crew (only 1 type!)   CargoLoot (see Loot section below for more detail!)
   [  FuMS_Mil_Hemmts,[600,0],[1,"Rifleman"],        "Truck01"      ] 
    ],[  
    // Drivers                                                         # and type  |         Patrol     |    spawn   | dest  | 'Patrol' options
   [["EAST","COMBAT","RED","COLUMN"],   [  [1, "Driver"]  ],   ["Convoy",[600,0],[0,0],["NORMAL",true,true, true,"XFILL"]   ]]
  ],[   

     ]
   ],
     [  // Convoy #4    West
 [         // Vehicle                                 Offset     Crew (only 1 type!)   CargoLoot (see Loot section below for more detail!)
   [  FuMS_Mil_Hemmts,[-600,0],[1,"Rifleman"],        "Truck01"      ] 
    ],[  
    // Drivers                                                         # and type  |         Patrol     |    spawn   | dest  | 'Patrol' options
   [["EAST","COMBAT","RED","COLUMN"],   [  [1, "Driver"]  ],   ["Convoy",[-600,0],[0,0],["NORMAL",true,true, true,"XFILL"]   ]]
  ],[   

     ]
   ]



   
],
[
	[
      //Define all the triggers this mission will be using
	  // Trigger names must be unique within each mission.
	  // NOTE: "FuMS_KillMe" is a reserved trigger word. Do not use!!!
	  // NOTE: "OK" is a reserved trigger. Do not define it here.
	  //  "OK" can be used in the actions section to force an action to occur at mission start!	 
//	  ["PROX",["ProxPlayer",[0,0],80,1]  ],
//	  ["LUCNT",["LowUnitCount","GUER",1,0,[0,0]]  ]
//	  ["HUCNT",["HighUnitCount","GUER",6,0,[0,0]] ],
//	  ["Detect",["Detected","ALL","ALL"] ],
//	  ["BodyCount",["BodyCount",20] ],
//	  ["Timer",["TIMER", 1800] ],
//        ["TimerEvac", ["TIMER", 60] ]
	  //                            offset      radius    time(s)  Name
//	  ["Zuppa", ["ZuppaCapture",[ [ [-100,-100], 50,         90,  "Point 1" ],
 //                               [ [100,100],   50,         90,  "Point 2" ]   ]]  ],
//       ["VehDmg1", ["DmgVehicles", "1",0.8]  ],
//       ["BldgDmg1",["DmgBuildings","2,3,7",1.0]  ]
	  
	],
	[
	  // Define what actions should occur when above trigger logics evaluate to true
	   // Note: a comma between two logics is interpreted as "AND"
//	  [["WIN"],["BodyCount"     ]],  // 
//        [["CHILD",["EvacTown",[0,0],1,0]],["TimerEvac"      ]],  // 
	// [["Reinforce","Help_Vehicle","Trig4"]], 
//	  [["LOSE"],["TIMER"]   ],
      [["END"],["OK"]]  
	]      
]

];
