// TODO: CHECK IF REFACTORING IS NEEDED
BEGIN ~!_HOFTD~ // Name of the DLG file which is the same name of the ITM file name
	
	IF ~True()~ THEN BEGIN read
	SAY @6
	IF ~~ THEN DO ~ClearAllActions()		
		StartCutSceneMode()		
		CutSceneId(Player1)		
		FadeToColor([30.0],0)
		Wait(2)					
		MultiPlayerSync()		
		FadeFromColor([30.0],0)	
		TextScreen("!_RESQ00") //2DA file
		EndCutSceneMode()~
	EXIT END