BEGIN ~!_HOFS~ // Name of the DLG file which is the same name of the ITM file name
	
	IF ~True()~ THEN BEGIN read
	SAY @21
	IF ~~ THEN DO ~ClearAllActions() 	// This action clears any queued actions for all creatures in the area.
		StartCutSceneMode()				// This action starts a cutscene. Player control is removed, and scripts stop running.
		FadeToColor([30.0],0)			// This action will fade the screen. The point parameter is given in [x.y] format with the x coordinate specifying the number of AI updates (which default to 15 per second) to take to complete the fade action.
		Wait(2)							// This action causes a delay in script processing. The time is measured in seconds.
		FadeFromColor([30.0],0)			// This action will unfade the screen. The point parameter is given in [x.y] format with the x coordinate specifying the number of AI updates (which default to 15 per second) to take to complete the fade action.
		TextScreen("!_RESQ03") 			// 2DA file - This action displays a textscreen, showing text and graphics from the specified 2DA file.
		EndCutSceneMode()~				// This action ends a cutscene, and restores the GUI and player control	
	EXIT END