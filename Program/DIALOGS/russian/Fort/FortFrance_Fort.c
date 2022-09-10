// диалог по городам
void ProcessCommonDialogEvent(ref NPChar, aref Link, aref NextDiag)
{
    switch (Dialog.CurrentNode)
	{
		case "quests":
			dialog.text = NPCStringReactionRepeat(RandPhraseSimple("Как вам наш форт? Неплохо, да? И гарнизон под стать, хе-хе...", "У солдата в форте жизнь скучна - караулы, разводы. То ли дело в городе... Что вам угодно, " + GetAddress_Form(NPChar) + "?"), "Не пристало приставать к солдату с глупыми вопросами, " + GetAddress_Form(NPChar) + "...", "Третий раз за сегодня вы пытаетесь задать вопрос...",
                          "Солдатская доля и без того непроста, а тут ещё и ты"+ GetSexPhrase(", недоносок, "," ") +"выводишь из себя. Смотри, как бы не оказаться в нижнем помещении форта...", "block", 1, npchar, Dialog.CurrentNode);
			link.l1 = HeroStringReactionRepeat(RandPhraseSimple("Я передумал"+ GetSexPhrase("","а") +"...", "Сейчас мне не о чем говорить"), "Не пристало...",
                      "Да уж, действительно в третий раз...", "Извиняюсь...", npchar, Dialog.CurrentNode);
			link.l1.go = "exit";
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
		break;
		
		case "PDM_PJ_SS_2":
			DialogExit();
			AddMoneyToCharacter(pchar, 5000);
		break;
	}
	UnloadSegment(NPChar.FileDialog2);  // если где-то выход внутри switch  по return не забыть сделать анлод
}


