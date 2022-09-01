
void ProcessDialogEvent()
{
	ref NPChar;
	aref Link, NextDiag;

	DeleteAttribute(&Dialog,"Links");

	makeref(NPChar,CharacterRef);
	makearef(Link, Dialog.Links);
	makearef(NextDiag, NPChar.Dialog);

	switch(Dialog.CurrentNode)
	{
		case "Exit":
			NextDiag.CurrentNode = NextDiag.TempNode;
			DialogExit();
		break;

		case "First time":
			dialog.text = "Что? Тоже решил посмеяться над бедными женщинами!?";
			link.l1 = "А что, собственно, происходит?";
			link.l1.go = "Verni_detey_1";
			PlayVoice("Kopcapkz\Voices\Quest\Dut_f_a_002.wav");
		break;
		
		case "Verni_detey_1":
			dialog.text = "Нет, вы только посмотрите на этого наглеца! И не стыдно насмехаться над нами?!";
			link.l1 = "Я действительно не понимаю, что произошло. Может быть, вы мне расскажете?";
			link.l1.go = "Verni_detey_2";
		break;
		
		case "Verni_detey_2":
			dialog.text = "Люди добрые, что же на свете творится! Детей у нас украли, прошлой ночью, а этот губернатишко, даже пальцем не пошевелил!";
			link.l1 = "Подождите, как это украли? Кто?";
			link.l1.go = "Verni_detey_3";
		break;
		
		case "Verni_detey_3":
			dialog.text = "Не знаю я! Заснула - дитё в колыбельке было, а ночью проснулась, оттого, что сердце нехорошо сжалось, гляжу, а ребёночка уже и нет!";
			link.l1 = "Это очень странно. А что говорит господин губернатор?";
			link.l1.go = "Verni_detey_4";
		break;
		
		case "Verni_detey_4":
			dialog.text = "Носу он не кажет из своего дома! Боится, значит! Нечего ему нам сказать!";
			link.l1 = "Подождите, прекратите шуметь, я попробую поговорить с ним.";
			link.l1.go = "Verni_detey_5";
		break;
		
		case "Verni_detey_5":
			dialog.text = "Да благословит тебя господь, хороший человек!";
			link.l1 = "Ждите меня здесь.";
			link.l1.go = "Verni_detey_6";
		break;
		
		case "Verni_detey_6":
			DialogExit();
			
			sld = CharacterFromID("PKM_SvtvA_Devushka_1")
			sld.Dialog.Filename = "Quest/PKM/Strannie_veshi_tvorytsya_v_arhipelage.c";
			sld.dialog.currentnode = "Verni_detey_7";
			
			sld = CharacterFromID("PKM_SvtvA_Devushka_2")
			sld.Dialog.Filename = "Quest/PKM/Strannie_veshi_tvorytsya_v_arhipelage.c";
			sld.dialog.currentnode = "Verni_detey_7";
			
			sld = CharacterFromID("PKM_SvtvA_Devushka_3")
			sld.Dialog.Filename = "Quest/PKM/Strannie_veshi_tvorytsya_v_arhipelage.c";
			sld.dialog.currentnode = "Verni_detey_7";
			
			pchar.questTemp.PKM_SvtvA_Gde_Deti = "Gde_Deti";
			SetQuestHeader("PKM_Animists");
			AddQuestRecord("PKM_Animists", "1");
			AddQuestUserData("PKM_Animists", "sSex", GetSexPhrase("","а"));
		break;
		
		case "Verni_detey_7":
			dialog.text = "Ну что? Вы что-нибудь узнали? Как там наши дети?!";
			link.l1 = "Я попробую помочь вам. А теперь разойдитесь, пожалуйста.";
			link.l1.go = "exit";
			NextDiag.TempNode = "Verni_detey_7";
			PlayVoice("Kopcapkz\Voices\Quest\Dut_f_a_002.wav");
		break;
		
		case "Capitan_v_taverne_1":
			dialog.text = "Хочешь поставить мне выпивку?";
			link.l1 = "Извини, выпивку не куплю, но вопросы тебе задам. Ты видел чёрный фрегат у острова?";
			link.l1.go = "Capitan_v_taverne_2";
		break;
		
		case "Capitan_v_taverne_2":
			dialog.text = "Ну, видел и что?";
			link.l1 = "Каким курсом он шёл?";
			link.l1.go = "Capitan_v_taverne_3";
		break;
		
		case "Capitan_v_taverne_3":
			dialog.text = "Прямиком на Барбадос.";
			link.l1 = "Могли это быть местные пираты?";
			link.l1.go = "Capitan_v_taverne_4";
		break;
		
		case "Capitan_v_taverne_4":
			dialog.text = "Дьявол их знает! Пойди и спроси у них. Ха-ха!";
			link.l1 = "Спасибо, любезный.";
			link.l1.go = "Capitan_v_taverne_5";
			npchar.lifeday = 0;
			LAi_CharacterDisableDialog(npchar);
		break;
		
		case "Capitan_v_taverne_5":
			DialogExit();
			AddQuestRecord("PKM_Animists", "4");
			AddQuestUserData("PKM_Animists", "sSex", GetSexPhrase("","а"));
		break;
	}
}
