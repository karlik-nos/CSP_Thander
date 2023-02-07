// диалог по городам
void ProcessCommonDialogEvent(ref NPChar, aref Link, aref NextDiag)
{
    switch (Dialog.CurrentNode)
	{
		case "quests":
			dialog.text = NPCStringReactionRepeat("Все сплетни города "+ GetCityName(npchar.city) +" к вашим услугам. Что бы вы хотели узнать?",
                          "Мы только что поднимали это тему. Вы, вероятно, запамятовали...", "Сегодня вы уже третий раз говорите о каком-то вопросе...",
                          "Что ты "+ GetSexPhrase("заладил","заладила") +" как попугай одно и то же...", "block", 1, npchar, Dialog.CurrentNode);
			link.l1 = HeroStringReactionRepeat("Знаешь, " + NPChar.name + ", как-нибудь в следующий раз.", "Точно, "+ GetSexPhrase("забыл","забыла") +" что-то...",
                      "Да уж, действительно в третий раз...", "Да уж...", npchar, Dialog.CurrentNode);
			link.l1.go = "exit";
			 // ==> квест "Странные вещи творятся на архипелаге
            if (CheckAttribute(pchar, "questTemp.PKM_SvtvA_PoiskUchitel_Tavern"))
            {
                link.l1 = "Мне нужна информация об одном человеке. Он постоянно ходит в красном балахоне, и называет себя Учителем.";
                link.l1.go = "PKM_SvtvA_PU_1";
            }
		break;
		
		//Квест "Странные вещи творятся на архипелаге"
		case "PKM_SvtvA_PU_1":
			dialog.text = "А, помню такого. Но его уже арестовали. Говорят, пробовал поднять бунт. Так что, если хотите его найти - вам прямиком в тюрьму Порт-о-Принса.";
			link.l1 = "Спасибо, ты мне очень помог.";
			link.l1.go = "exit";
			
			DeleteAttribute(pchar, "questTemp.PKM_SvtvA_PoiskUchitel_Tavern");
			//pchar.questTemp.PKM_SvtvA_PoiskUchitel_Turma = true;
			AddQuestRecord("PKM_Animists", "27");
			AddQuestUserData("PKM_Animists", "sSex", GetSexPhrase("","а"));
			
			sld = CharacterFromID("PortPaxJailOff");
			sld.dialog.filename = "Quest/PKM/Strannie_veshi_tvorytsya_v_arhipelage.c";
			sld.dialog.currentnode = "Разговор с тюремщиком";
		break;
	}
	UnloadSegment(NPChar.FileDialog2);  // если где-то выход внутри switch  по return не забыть сделать анлод
}

