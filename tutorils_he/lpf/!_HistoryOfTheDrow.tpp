// Never Forget: Comments can "lie", but code not so much ;P
// REGISTER CONVERSABLE ITEM
// -------------------------
LPF ADD_CONVERSABLE_ITEM_IN_2DA
	INT_VAR
		strref 		= ~%button%~ // See "setup-tutorils_he.tp2"
	STR_VAR
		itemName 	= "!_HOFTD"
END
// ITEMTYPE LEFT QUICKSLOT ONLY
// ----------------------------
LPF ADD_ITEMTYPE_IN_2DA
	INT_VAR
		inventorySlotType 	= 15
	STR_VAR
		soundGrab			= ~!_GAM_1A~
		soundDrop			= ~!_GAM_1B~
	RET
		L_newtype 			= typeNumber // L_newtype is used in setup-tutorils_he.tp2
END
// OPTIONAL: REGISTER ITEMTYPE/-CATEGORY ENCYCL!_(Encyclopedia)
// ------------------------------------------------------------
LPF ADD_ITEMCATEGORY_IN_IDS
INT_VAR
	typeNumber 		= L_newtype 
STR_VAR
	categoryName	= ~ENCYCL!_~
END
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
		icon = ~!_IHOFTD~
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 63	// Infravision
		target 			= 1 	// Self
		timing 			= 0 	// Instand/Limited	
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		resist_dispel	= 1 	// Dispel/Not bypass resistance
		duration 		= 1200 	// 1 round = 6 sec -> 1200*6/(60*60) =  2 hours
		probability1 	= 100	// x% chance of activating the effect
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 139	// Display String
		target 			= 1 	// Self
		timing 			= 1 	// Instant/Permanent until death
		parameter1 		= 12039 // "Infravision" is displayed(strref 12039 from dialog.tlk)
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		probability1 	= 100	// x% chance of activating the effect
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 141	// Lighting Effects
		target 			= 1 	// Self
		timing 			= 4 	// Delay/Permanent
		parameter1 		= 0 	// Spell target
		parameter2		= 4		// Alteration Air
		resist_dispel	= 1 	// Dispel/Not bypass resistance
		duration 		= 1		// 1 round = 6 seconds
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
		parameter1 		= ((196 << 8) + (175 << 16) + (98 << 24)) // Color is "Laser" ((red << 8) + (green << 16) + (blue << 24))
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
		timing 			= 4 	// Delay/Permanent	
		resist_dispel	= 1 	// Dispel/Not bypass resistance
		duration 		= 1		// 1 round = 6 seconds
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		probability1 	= 100	// x% chance of activating the effect
	STR_VAR
		resource 		= ~EFF_P03~
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 174	// Play sound
		target 			= 1 	// Self
		timing 			= 4 	// Delay/Permanent	
		resist_dispel	= 1 	// Dispel/Not bypass resistance
		duration 		= 1		// 1 round = 6 seconds
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		probability1 	= 100	// x% chance of activating the effect
	STR_VAR
		resource 		= ~EFF_E01~
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
		resource 		= ~!_GAM_1A~
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 142	// Display portrait icon
		target 			= 1 	// Self
		timing 			= 0 	// Instant/Limited
		parameter2 		= 114	// Infravision
		duration 		= 1200 	// 1 round = 6 sec -> 1200*6/(60*60) =  2 hours
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		probability1 	= 100	// x% chance of activating the effect
END