// Never Forget: Comments can "lie", but code not so much ;P

// NEW ITEM HEADER (MACRO/LIB)
// ---------------------------
LPF SIMP_ADD_ITEM_HEADER END
// VALUES TO ITEM HEADER
// ---------------------
LPF ALTER_ITEM_HEADER
	INT_VAR
		header_type 			= 0 // Check if item header type is "None"
		match_icon 				= 1 // Use string value of variable "icon"
		header					= 1 // Alter only x item abilities(0=every item ability)
		location 				= 3 // Item
		new_header_type 		= 3 // Magical
		identify				= 1 // Usable after Identification
		target					= 5 // Caster
		range 					= 1 // Range in feet
		charges					= 1 // x times of usage until it is depleted
		drained 				= 0	// Item remains
		flag_recharge 			= 1 // Recharges after rest (set bit to 1 or alternatively understand it as 1=TRUE)
	STR_VAR
		icon = ~!_IHOFS~
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 139	// Display String
		target 			= 1 	// Self
		timing 			= 1 	// Instant/Permanent until death
		parameter1 		= 25120 // "Farsight" is displayed(strref 12044 from dialog.tlk)
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		probability1 	= 100	// x% chance of activating the effect
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 146	// Cast spell
		target 			= 2 	// Preset target
		timing 			= 1 	// Delayed/Limited
		parameter1 		= 0		// Cast level
		parameter2		= 0		// Cast normally
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		resist_dispel	= 0 	// Natural/Nonmagical
		duration 		= 1 	// 1 round = 6 sec
		probability1 	= 100	// x% chance of activating the effect
	STR_VAR
		resource 		= ~SPWI424~
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 174	// Play sound
		target 			= 1 	// Self
		timing 			= 0 	// Instant/Limited	
		resist_dispel	= 1 	// Dispel/Not bypass resistance
		duration 		= 1		// 1 round = 6 seconds
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		probability1 	= 100	// x% chance of activating the effect
	STR_VAR
		resource 		= ~!_GAM_1A~ // Soundfile
END