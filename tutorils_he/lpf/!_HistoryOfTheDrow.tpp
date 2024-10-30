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

// TODO: see ring26.ITM as an example