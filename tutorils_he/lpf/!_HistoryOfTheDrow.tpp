// Never Forget: Comments can "lie", but code not so much ;P

// EQ ARMOR COLOR
// --------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 7		// Set color
		target		= 1		// Self
		parameter1 	= 24	// Brown Gold
		parameter2 	= 5 	// Armor/Trimming
		timing 		= 2		// Instant/While equipped
END
// EQ ARMOR STRAP COLOR
// --------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 7		// Set color
		target		= 1		// Self
		parameter1 	= 67	// Shiny Gold
		parameter2 	= 4 	// Strap/Leather
		timing 		= 2		// Instant/While equipped
END
// EQ BELT COLOR
// -------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 7		// Set color
		target		= 1		// Self
		parameter1 	= 69	// Shiny Green
		parameter2 	= 0 	// Belt/Amulet
		timing 		= 2		// Instant/While equipped
END
// EQ BELT GLOW
// ------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 9	// Set color glow pulse
		target		= 1	// Self
		parameter1 = ((0 << 8) + (200 << 16) + (0 << 24)) 	// Shiny Green...((red << 8) + (green << 16) + (blue << 24))
		parameter2 	= 0 + (50 << 16) 						// Belt/Amulet and Cycle speed...(Location + (Cycle speed << 16))
		timing 		= 2	 // Instant/While equipped
END
// EQ AC TO VALUE
// --------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 0		// AC bonus
		target		= 1		// Self
		parameter1 	= 3 	// AC value
		parameter2 	= 0x10	// Set base AC to value (meaning parameter1 will be used to set AC)
		timing 		= 2		// Instant/While equipped
END
// EQ AC TO SLASHING
// -----------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 0		// AC bonus
		target		= 1		// Self
		parameter1 	= 3 	// AC value
		parameter2 	= 0x8	// Slashing weapons (meaning parameter1 is used as AC for slashing weapons)
		timing 		= 2		// Instant/While equipped
END
// EQ DISABLE STEALTH
// ------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 144	// Disable button
		target		= 1		// Self
		parameter2 	= 0 	// Stealth
		timing 		= 2		// Instant/While equipped
END
// EQ DISABLE THIEVING
// -------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 144	// Disable button
		target		= 1		// Self
		parameter2 	= 1 	// Thieving
		timing 		= 2		// Instant/While equipped
END
// EQ DISABLE WIZARD SPELLS
// ------------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 145	// Disable spellcasting
		target		= 1		// Self
		parameter2 	= 0 	// Wizard
		timing 		= 2		// Instant/While equipped
END
// EQ ACID RESISTANCE 
// ------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 27	// Acid resistance bonus
		target		= 1		// Self
		parameter1	= 25	// 25% resistance bonus
		timing 		= 2		// Instant/While equipped
END
// EQ COLD RESISTANCE 
// ------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 28	// Cold resistance bonus
		target		= 1		// Self
		parameter1	= 25	// 25% resistance bonus
		timing 		= 2		// Instant/While equipped
END
// EQ ELECTRICITY RESISTANCE 
// -------------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 29	// Acid resistance bonus
		target		= 1		// Self
		parameter1	= 25	// 25% resistance bonus
		timing 		= 2		// Instant/While equipped
END
// EQ FIRE RESISTANCE 
// ------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 30	// Fire resistance bonus
		target		= 1		// Self
		parameter1	= 25	// 25% resistance bonus
		timing 		= 2		// Instant/While equipped
END
// EQ MAGIC DAMAGE RESISTANCE 
// --------------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 31	// Magic damage resistance bonus
		target		= 1		// Self
		parameter1	= 25	// 25% resistance bonus
		timing 		= 2		// Instant/While equipped
END
// EQ POISON RESISTANCE 
// --------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 173	// Poison resistance bonus
		target		= 1		// Self
		parameter1	= 25	// 25% resistance bonus
		timing 		= 2		// Instant/While equipped
END
// EQ ACID PORTRAIT-ICON 
// ---------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 142	// Display portrait icon
		parameter2	= 24	// Protection from acid
		timing 		= 2		// Instant/While equipped
END
// EQ COLD PORTRAIT-ICON 
// ---------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 142	// Display portrait icon
		parameter2	= 25	// Protection from cold
		timing 		= 2		// Instant/While equipped
END
// EQ ELECTRICITY PORTRAIT-ICON
// ----------------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 142	// Display portrait icon
		parameter2	= 27	// Protection from electricity
		timing 		= 2		// Instant/While equipped
END
// EQ FIRE PORTRAIT-ICON 
// ---------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 142	// Display portrait icon
		parameter2	= 16	// Protection from fire
		timing 		= 2		// Instant/While equipped
END
// EQ MAGIC PORTRAIT-ICON
// ----------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 142	// Display portrait icon
		parameter2	= 28	// Protection from magic
		timing 		= 2		// Instant/While equipped
END
// EQ POISON PORTRAIT-ICON 
// -----------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 142	// Display portrait icon
		parameter2	= 30	// Protection from poison
		timing 		= 2		// Instant/While equipped
END