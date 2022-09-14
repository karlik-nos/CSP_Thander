// диалог по городам
void ProcessCommonDialogEvent(ref NPChar, aref Link, aref NextDiag)
{
 	switch(Dialog.CurrentNode)
	{
        case "quests":
            dialog.text = "Говорите, я слушаю.";
			link.l1 = "Я "+ GetSexPhrase("ошибся","ошиблась") +". Прощайте.";
			link.l1.go = "Exit";
			if (CheckAttribute(pchar, "questTemp.PDM_PJ_SS"))
			{
				link.l1 = "У меня к вам дело, офицер. Думаю, вас это заинтересует. Один из ваших солдат, Джори, пытался через моё посредничество купить вина в городе. Зная ваши порядки...";
				link.l1.go = "PDM_PJ_SS_1";
			}
		break;
		
		case "PDM_PJ_SS_1":
			dialog.text = "Что?! Я строжайше запретил выпивку на стратегических объектах! Ну что же, он поплатится за это. За вашу бдительность я вознаграждаю вас в размере 5000 золотых, а Джори отправлю на три дня на гауптвахту.";
			link.l1 = "Благодарю, "+GetFullName(NPChar)+". Пресекать подобные нарушения - наш общий долг.";
			link.l1.go = "PDM_PJ_SS_2";
			DeleteAttribute(pchar, "questTemp.PDM_PJ_SS");
			DeleteAttribute(pchar, "questTemp.PDM_PJ_KV");
		break;
		
		case "PDM_PJ_SS_2":
			DialogExit();
			AddMoneyToCharacter(pchar, 5000);
			sld = CharacterFromID("PDM_PJ_Strajnik_1")
			sld.name	= "Лоран";
			sld.lastname	= "";
			sld.model = "sold_fra_2";
			sld.dialog.filename   = "Common_Soldier.c";
			sld.dialog.currentnode   = "First time";
			
			CloseQuestHeader("PDM_Proklyataya_Jara");
			AddQuestRecord("PDM_Proklyataya_Jara", "6");
			AddCharacterExpToSkill(pchar, "Leadership", 110);
			AddCharacterExpToSkill(pchar, "Sneak", 100);
		break;
	}
	UnloadSegment(NPChar.FileDialog2);  // если где-то выход внутри switch  по return не забыть сделать анлод
}
