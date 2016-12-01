class CfgRemoteExec
{
	class Functions
	{
		mode = 1;
		jip = 0;
		class fnc_AdminReq { allowedTargets=2; };
		class ExileServer_system_network_dispatchIncomingMessage { allowedTargets=2; };
		class ExAdServer_fnc_clientRequest 				{ allowedTargets=2; };
		class SA_Simulate_Towing 					 	{ allowedTargets=0; }; 
		class SA_Attach_Tow_Ropes 						{ allowedTargets=0; }; 
		class SA_Take_Tow_Ropes 					 	{ allowedTargets=0; }; 
		class SA_Put_Away_Tow_Ropes 					{ allowedTargets=0; }; 
		class SA_Pickup_Tow_Ropes 						{ allowedTargets=0; }; 
		class SA_Drop_Tow_Ropes  						{ allowedTargets=0; }; 
		class SA_Set_Owner 								{ allowedTargets=2; }; 
		class SA_Hint		  							{ allowedTargets=1; };
		class SA_Hide_Object_Global  					{ allowedTargets=2; }; 
		class AUR_Hint 									{ allowedTargets=1; }; 
		class AUR_Hide_Object_Global 					{ allowedTargets=2; }; 
		class AUR_Enable_Rappelling_Animation_Global 	{ allowedTargets=2; }; 
		class AUR_Play_Rappelling_Sounds_Global 		{ allowedTargets=2; };
		class AR_Client_Rappel_From_Heli 				{ allowedTargets=0; }; 
		class AR_Hint 									{ allowedTargets=1; }; 
		class AR_Hide_Object_Global 					{ allowedTargets=2; }; 
		class AR_Enable_Rappelling_Animation 			{ allowedTargets=2; }; 
		class AR_Rappel_From_Heli 						{ allowedTargets=2; }; 
	};
	class Commands
	{
		mode=0;
		jip=0;
	};
};