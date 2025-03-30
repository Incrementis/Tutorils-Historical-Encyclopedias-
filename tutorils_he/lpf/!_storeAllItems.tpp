// Never Forget: Comments can "lie", but code not so much ;P

// ADD ITEM "THE:History of the Drow" TO STORE
// -------------------------------------------
LPF ADD_STORE_ITEM_EX
	INT_VAR
		stack 		= 1 			// Number of same type of items in store
	STR_VAR
		flags 		= ~identified~	// Will be sold identified
		item_name 	= ~!_HOFTD~		// The item which will be sold
END
// ADD ITEM "THE:History of Waterdeep" TO STORE
// --------------------------------------------
LPF ADD_STORE_ITEM_EX
	INT_VAR
		stack 		= 1 			// Number of same type of items in store
	STR_VAR
		flags 		= ~identified~	// Will be sold identified
		item_name 	= ~!_HOFW~		// The item which will be sold
END
// ADD ITEM "THE:History of the North" TO STORE
// --------------------------------------------
LPF ADD_STORE_ITEM_EX
	INT_VAR
		stack 		= 1 			// Number of same type of items in store
	STR_VAR
		flags 		= ~identified~	// Will be sold identified
		item_name 	= ~!_HOFTN~		// The item which will be sold
END
// ADD ITEM "THE:History of Shadowdale" TO STORE
// ---------------------------------------------
LPF ADD_STORE_ITEM_EX
	INT_VAR
		stack 		= 1 			// Number of same type of items in store
	STR_VAR
		flags 		= ~identified~	// Will be sold identified
		item_name 	= ~!_HOFS~		// The item which will be sold
END