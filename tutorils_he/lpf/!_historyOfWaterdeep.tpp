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
		icon = ~!_IHOFW~
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 115	// Detect Alignment
		target 			= 8 	// Everyone except Self
		timing 			= 3 	// Delayed/Limited
		parameter2 		= 0		// Alignment: Evil	
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		resist_dispel	= 0 	// Natural/Nonmagical
		duration 		= 1 	// 1 round = 6 sec
		probability1 	= 100	// x% chance of activating the effect
		savingthrow		= 0		// None
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 115	// Detect Alignment
		target 			= 8 	// Everyone except Self
		timing 			= 3 	// Delayed/Limited
		parameter2 		= 1		// Alignment: Neutral	
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		resist_dispel	= 0 	// Natural/Nonmagical
		duration 		= 1 	// 1 round = 6 sec
		probability1 	= 100	// x% chance of activating the effect
		savingthrow		= 0		// None
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 115	// Detect Alignment
		target 			= 8 	// Everyone except Self
		timing 			= 3 	// Delayed/Limited
		parameter2 		= 2		// Alignment: Good
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		resist_dispel	= 0 	// Natural/Nonmagical
		duration 		= 1 	// 1 round = 6 sec
		probability1 	= 100	// x% chance of activating the effect
		savingthrow		= 0		// None
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 139	// Display String
		target 			= 1 	// Self
		timing 			= 1 	// Instant/Permanent until death
		parameter1 		= 14108 // "Detect Alignment" is displayed(strref 14108 from dialog.tlk)
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		probability1 	= 100	// x% chance of activating the effect
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 61	// Creature RGB color fade
		target 			= 1 	// Self
		timing 			= 4 	// Delay/Permanent
		parameter1 		= ((205 << 8) + (133 << 16) + (63 << 24)) // Color is "Peru" ((red << 8) + (green << 16) + (blue << 24))
		parameter2		= (25 << 16)// Fade Speed (A speed of 1 is fastest, and a speed of 255 is slowest. The first two bytes are unused.)
		resist_dispel	= 1 	// Dispel/Not bypass resistance
		duration 		= 1		// 1 round = 6 seconds
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		probability1 	= 100	// x% chance of activating the effect
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