Route133_MapScripts::
	.byte 0

Route133_EventScript_Franklin::
	msgbox Route133_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Debra::
	msgbox Route133_Text_DebraPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Linda::
	msgbox Route133_Text_LindaPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Warren::
	msgbox Route133_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Beck::
	trainerbattle_single TRAINER_NONE, Route133_Text_BeckIntro, Route133_Text_BeckDefeat
	msgbox Route133_Text_BeckPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Mollie::
	trainerbattle_single TRAINER_MOLLIE, Route133_Text_MollieIntro, Route133_Text_MollieDefeat
	msgbox Route133_Text_MolliePostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Conor::
	trainerbattle_single TRAINER_NONE, Route133_Text_ConorIntro, Route133_Text_ConorDefeat
	msgbox Route133_Text_ConorPostBattle, MSGBOX_AUTOCLOSE
	end

