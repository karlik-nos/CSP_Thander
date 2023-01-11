
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
			link.l1.go = "TEST_Verni_detey_1_TEST";
			//PlayVoice("Kopcapkz\Voices\Quest\Dut_f_a_002.wav"); ПОТОМ НЕ ЗАБЫТЬ ВЕРНУТЬ!!!!!!!!!!!!! АААААААААААААААААААА
		break;
		
		case "TEST_Verni_detey_1_TEST":		//ПОТОМ УДАЛИТЬ КЕЙС
			dialog.text = "Режим теста активирован!";
			link.l1 = "Слава поням!";
			link.l1.go = "exit";
			
			pchar.questTemp.PKM_SvtvA_Dostavka_Malty = true;
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
			link.l1 = "Извини, приятель, выпивку не куплю, но вопросы тебе задам. Ты видел чёрный фрегат у острова?";
			link.l1.go = "Capitan_v_taverne_2";
		break;
		
		case "Capitan_v_taverne_2":
			dialog.text = "Ну, видел и что?";
			link.l1 = "Каким курсом он шёл?";
			link.l1.go = "Capitan_v_taverne_3";
		break;
		
		case "Capitan_v_taverne_3":
			dialog.text = "Прямиком на Невис.";
			link.l1 = "Могли это быть пираты?";
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
			pchar.questTemp.PKM_SvtvA_SprositKapitanov_v_more = "SprositKapitanov";
			pchar.questTemp.PKM_SvtvA_NevisTaverna_1 = "Taverna";
			pchar.questTemp.PKM_SvtvA_NevisPortMan_1 = "PortMan";
			
			PChar.quest.PKM_SvtvA_SprositKapitanov_v_more.win_condition.l1 = "MapEnter";
			PChar.quest.PKM_SvtvA_SprositKapitanov_v_more.win_condition = "PKM_SvtvA_SprositKapitanov_v_more";
			
			sld = GetCharacter(NPC_GenerateCharacter("PKM_SvpvA_Shturman_1", "shipowner_17", "man", "man", 10, ENGLAND, -1, true));
			sld.name = "Баллтезар";
			sld.lastname = "Фигуейдал";
			FreeSitLocator("Charles_tavern", "sit_base4");
			sld.Dialog.Filename = "Quest/PKM/Strannie_veshi_tvorytsya_v_arhipelage.c";
			sld.dialog.currentnode = "Shturman_v_taverne_1";
			LAi_SetSitType(sld);
			LAi_group_MoveCharacter(sld, "ENGLAND_CITIZENS");
			ChangeCharacterAddressGroup(sld, "Charles_tavern", "sit", "sit_base4");	
		break;
		
		case "Shturman_v_taverne_1":
			dialog.text = "Проваливай, "+ GetSexPhrase("приятель","девка") +"!";
			link.l1 = "";
			link.l1.go = "exit";
			NextDiag.TempNode = "Shturman_v_taverne_1";
		break;
		
		case "Shturman_v_taverne_2":
			dialog.text = ""+ GetSexPhrase("Старина","Подруга") +"! Поставь выпивку не самому последнему штурману в Новом Свете!";
			link.l1 = "Что уже всё пропил, приятель?";
			link.l1.go = "Shturman_v_taverne_3";
		break;
		
		case "Shturman_v_taverne_3":
			dialog.text = "Всё, до пенса. Ну что, поставишь кружечку?";
			link.l1 = "Потом. Ты видел чёрный фрегат во время плавания?";
			link.l1.go = "Shturman_v_taverne_4";
		break;
		
		case "Shturman_v_taverne_4":
			dialog.text = "Угости меня ромом, и я тебе всё расскажу!";
			link.l1 = "Вот твой ром.";
			link.l1.go = "Shturman_v_taverne_5";
			link.l2 = "А, может приложить тебя пару раз о столешницу?";
			link.l2.go = "Shturman_v_taverne_9";
		break;
		
		case "Shturman_v_taverne_5":
			dialog.text = "Гульп-гульп. Хор-р-роший ром!";
			link.l1 = "Итак, ты видел фрегат?";
			link.l1.go = "Shturman_v_taverne_6";
			AddMoneyToCharacter(pchar, -10);
		break;
		
		case "Shturman_v_taverne_9":
			dialog.text = "Хм... Обойдёмся без этого.";
			link.l1 = "Итак, ты видел фрегат?";
			link.l1.go = "Shturman_v_taverne_6";
			ChangeCharacterReputation(pchar, -2);
		break;
		
		case "Shturman_v_taverne_6":
			dialog.text = "Фрегат-то? Чёрный?! Видел я его, как тебя вижу. Если бы шли не порожняком, то сейчас не разговаривал бы с тобой - у них то трюмы явно под завязку были\nИмечко ещё у него странное было, не христианское какое-то - 'Мефисто'.";
			link.l1 = "Каким курсом плыл фрегат?";
			link.l1.go = "Shturman_v_taverne_7";
		break;
		
		case "Shturman_v_taverne_7":
			dialog.text = "На юг. Может на Гваделупу, а может и на Мартинику... к пиратам. Дьявол его знает.";
			link.l1 = "Мда...";
			link.l1.go = "Shturman_v_taverne_8";
			npchar.lifeday = 0;
			LAi_CharacterDisableDialog(npchar);
		break;
		
		case "Shturman_v_taverne_8":
			DialogExit();
			DeleteAttribute(pchar, "questTemp.PKM_SvtvA_NevisPortMan_1");
			AddQuestRecord("PKM_Animists", "6");
			pchar.questTemp.PKM_SvtvA_LeFrancuaTaverna_1 = "Taverna";
		break;
		
		case "Satanist_v_gorode_1":
			dialog.text = "Не спешите так, сеньор"+ GetSexPhrase("","ита") +"! Вы же не откажетесь побеседовать с нами?!";
			link.l1 = "Не думаю, что хочу с вами разговаривать.";
			link.l1.go = "Satanist_v_gorode_2";
		break;
		
		case "Satanist_v_gorode_2":
			dialog.text = "А ну живо отдавай письмо!";
			link.l1 = "А, может быть, выпьем по кружечке эля и пойдём каждый своей дорогой? Нет? Я так и знал"+ GetSexPhrase("","а") +".";
			link.l1.go = "Satanist_v_gorode_3";
		break;
		
		case "Satanist_v_gorode_3":		//Битва в городе
			DialogExit();
			LAi_LocationFightDisable(loadedLocation, false);
			for (i=1; i<=11; i++)
			{
				sld = CharacterFromID("SatanaElita_"+i)
				LAi_SetWarriorType(sld);
				LAi_group_MoveCharacter(sld, "EnemyFight");
			}
			LAi_group_SetRelation("EnemyFight", LAI_GROUP_PLAYER, LAI_GROUP_ENEMY);
			LAi_group_FightGroups("EnemyFight", LAI_GROUP_PLAYER, false);
			LAi_group_SetCheck("EnemyFight", "PKM_SvtvA_DostavkaPisma_Gorod_2");
			LAi_SetFightMode(pchar, true);			
		break;
		
		case "Satanist_v_buhte_1":
			dialog.text = "Не спешите так, сеньор"+ GetSexPhrase("","ита") +"! Вы же не откажетесь побеседовать с нами?!";
			link.l1 = "Не думаю, что хочу с вами разговаривать.";
			link.l1.go = "Satanist_v_buhte_2";
			link.l2 = "Давайте поговорим, только побыстрее, я спешу.";
			link.l2.go = "Satanist_v_buhte_4";
		break;
		
		case "Satanist_v_buhte_2":
			dialog.text = "А ну живо отдавай письмо!";
			link.l1 = "А, может быть, выпьем по кружечке эля и пойдём каждый своей дорогой? Нет? Я так и знал"+ GetSexPhrase("","а") +".";
			link.l1.go = "Satanist_v_buhte_3";
		break;
		
		case "Satanist_v_buhte_3":		//Битва в бухте без разговора
			DialogExit();
			LAi_LocationFightDisable(loadedLocation, false);
			for (i=1; i<=4; i++)
			{
				sld = CharacterFromID("Satanist_"+i)
				LAi_SetWarriorType(sld);
				LAi_group_MoveCharacter(sld, "EnemyFight");
			}
			LAi_group_SetRelation("EnemyFight", LAI_GROUP_PLAYER, LAI_GROUP_ENEMY);
			LAi_group_FightGroups("EnemyFight", LAI_GROUP_PLAYER, false);
			LAi_group_SetCheck("EnemyFight", "PKM_SvtvA_DostavkaPisma_Buhta_2");
			LAi_SetFightMode(pchar, true);			
		break;
		
		case "Satanist_v_buhte_4":
			dialog.text = "Нам стало известно, что вы везёте некое письмо, и нам нужно прочитать его\nНе беспокойтесь, у нас есть копия сургучной печати, которым оно запечатано, и адресат ничего не узнает о случившемся\nА в качестве вознаграждения за оказанную нам услугу мы согласны заплатить вам 20000 пиастров. Что скажете?";
			link.l1 = "Что скажу? Дайте подобрать подходящую фразу... Хм... А! Во - а не пойти ли вам прочь? А вашу печать можете засунуть себе сами знаете куда.";
			link.l1.go = "Satanist_v_buhte_5";
			link.l2 = "Хм... 20000 монет... Звучит заманчиво, думаю, что мы договорились. Вот письмо.";
			link.l2.go = "Satanist_v_buhte_7";
		break;
		
		case "Satanist_v_buhte_5":
			dialog.text = "В таком случае мы будем вынуждены вас убить.";
			link.l1 = "Попробуйте!";
			link.l1.go = "Satanist_v_buhte_6";
		break;
		
		case "Satanist_v_buhte_6":		//Битва в бухте с разговором и отказываемся отдавать письмо
			DialogExit();
			LAi_LocationFightDisable(loadedLocation, false);
			for (i=1; i<=4; i++)
			{
				sld = CharacterFromID("Satanist_"+i)
				LAi_SetWarriorType(sld);
				LAi_group_MoveCharacter(sld, "EnemyFight");
			}
			LAi_group_SetRelation("EnemyFight", LAI_GROUP_PLAYER, LAI_GROUP_ENEMY);
			LAi_group_FightGroups("EnemyFight", LAI_GROUP_PLAYER, false);
			LAi_group_SetCheck("EnemyFight", "PKM_SvtvA_DostavkaPisma_Buhta_3");
			LAi_SetFightMode(pchar, true);			
		break;
		
		case "Satanist_v_buhte_7":
			dialog.text = "Вы поступили правильно, сеньор"+ GetSexPhrase("","ита") +". Вот ваши деньги, а теперь посмотрим письмо\nТак-так.. хм... я так и думал... Ну, тут они ошибаются... Что же, я узнал всё, что хотел. Запечатываю письмо обратно - видите, узор на печатях идентичен? Можете идти.";
			link.l1 = "Хорошо.";
			link.l1.go = "Satanist_v_buhte_8";
			AddMoneyToCharacter(pchar, 20000);
		break;
		
		case "Satanist_v_buhte_8":
			DialogExit();
			for (i=1; i<=4; i++)
			{
				sld = CharacterFromID("Satanist_"+i)
				LAi_SetActorType(sld);
				LAi_ActorGoToLocation(sld, "reload", "reload1_back", "none", "", "", "", -1);
				sld.lifeday = 0;
				LAi_CharacterDisableDialog(sld);
				LAi_SetImmortal(sld, true);
			}
			LAi_LocationFightDisable(loadedLocation, false);
			bDisableFastReload = false;
			chrDisableReloadToLocation = false;
			AddQuestRecord("PKM_Animists", "12");
			AddQuestUserData("PKM_Animists", "sSex", GetSexPhrase("ся","ась"));
			pchar.questTemp.PKM_SvtvA_SanJuanChurch_1_Zlo = "Church1";
			PChar.quest.PKM_SvtvA_SJ_B1.over = "yes";
			PChar.quest.PKM_SvtvA_SJ_B2.over = "yes";
			PChar.quest.PKM_SvtvA_SJ_B3.over = "yes";
		break;
		
		case "Satanist_zasada2":
			dialog.text = "Не думаю, что ты куда-нибудь пойдёшь! Живо отдавай письмо!";
			link.l1 = "А, может быть, выпьем по кружечке эля и пойдём каждый своей дорогой? Нет? Я так и знал"+ GetSexPhrase("","а") +".";
			link.l1.go = "Satanist_zasada2_2";	
		break;
		
		case "Satanist_zasada2_2":
			dialog.text = "Хватит паясничать! Я считаю до трёх, и если вы не отдаёте нам письмо, то можете пенять на себя. Раз...";
			link.l1 = "Три!";
			link.l1.go = "Satanist_zasada2_3";
		break;
		
		case "Satanist_zasada2_3":
			DialogExit();
			LAi_LocationFightDisable(loadedLocation, false);
			for (i=1; i<=3; i++)
			{
				sld = CharacterFromID("Satanist_"+i)
				LAi_SetWarriorType(sld);
				LAi_group_MoveCharacter(sld, "EnemyFight");
			}
			LAi_group_SetRelation("EnemyFight", LAI_GROUP_PLAYER, LAI_GROUP_ENEMY);
			LAi_group_FightGroups("EnemyFight", LAI_GROUP_PLAYER, false);
			LAi_group_SetCheck("EnemyFight", "PKM_SvtvA_Zasada2_Pobeda");
			LAi_SetFightMode(pchar, true);
		break;
		
		case "Сатанист_крыса":
			dialog.text = "Умрите! Сатана идёт! Вам не остановить его!";
			link.l1 = "Дьявол! Вам помощник - сатанист!";
			link.l1.go = "Сатанист_крыса_2";
			
			for (i=1; i<=5; i++)
			{
				sld = GetCharacter(NPC_GenerateCharacter("Satanist_"+i, "Animists1", "man", "man", sti(pchar.rank), PIRATE, -1, true));
				sld.SaveItemsForDead = true;
				sld.DontChangeBlade = true;
				sld.DontChangeGun = true;
				sld.DeleteFood = true;
				LAi_SetActorType(sld);
				ChangeCharacterAddressGroup(sld, pchar.location, "reload",  "reload1_back");
				GiveItem2Character(sld, "PKM_SvtvA_znachok");
				AddItems(sld, "mineral3", rand(7)-4);
			}
		break;
		
		case "Сатанист_крыса_2":
			DialogExit();
			
			LAi_LocationFightDisable(loadedLocation, false);
			sld = CharacterFromID("Satanist_Krisa")
			LAi_SetWarriorType(sld);
			LAi_group_MoveCharacter(sld, "Satanist");
			for (i=1; i<=5; i++)
			{
				sld = CharacterFromID("Satanist_"+i)
				LAi_SetWarriorType(sld);
				LAi_group_MoveCharacter(sld, "Satanist");
			}
			LAi_group_SetRelation("Satanist", LAI_GROUP_PLAYER, LAI_GROUP_ENEMY);
			LAi_group_FightGroups("Satanist", LAI_GROUP_PLAYER, false);
			//LAi_group_SetCheck("Satanist", "PKM_SvtvA_Нападение_в_церкви_Победа");
			LAi_SetFightMode(pchar, true);
			
			DoQuestFunctionDelay("PKM_SvtvA_Malta_na_pomosh", 15.0);
		break;
		
	}
}
