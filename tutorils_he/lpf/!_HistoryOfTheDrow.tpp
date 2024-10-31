// Never Forget: Comments can "lie", but code not so much ;P
// ITEMTYPE MAINHAND SLOTS ONLY
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
// -----------------------------------------------------------------
LPF ADD_ITEMCATEGORY_IN_IDS
INT_VAR
	typeNumber 		= L_newtype 
STR_VAR
	categoryName	= ~ENCYCL!_~
END
// TODO ITEM ABILITY
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
		new_header_type 		= 3 // 1 is Melee(if this is not Melee an item effect will not be added)
		identify				= 1 // Usable after Identification
		target					= 1 // Living actor
		range 					= 30 // Range in feet
		charges					= 10 // x times of usage until it is depleted
		drained 				= 0	// Item remains
		flag_recharge 			= 1 // Recharges after resting
	STR_VAR
		icon = ~!_IHOFTD~
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 63// Dispel effects
		header			= 1 // Add effect to only x item abilities(0=every item ability)
		type 			= 3 // Add effect to item ability with type x(1 = Melee)
		target 			= 4 // Preset target
		probability1 	= 100// x% chance of activating the effect
END