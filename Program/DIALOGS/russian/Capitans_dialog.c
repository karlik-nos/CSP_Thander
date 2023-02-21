// разговор с капитаном на палубе  Boal
//homo 25/06/06
#include "DIALOGS\russian\Rumours\Common_rumours.c"

string coolstory1[6] = {"чарльстон","чарлстон","чарльзтон","чарльстаун","чарльзтаун","чарлстаун"};
string coolstory2[4] = {"хорниголд","хорнигольд","хорнигольда","хорниголда"};

void ProcessDialogEvent()
{
	ref NPChar;
	aref Link, Diag;

	DeleteAttribute(&Dialog,"Links");

	makeref(NPChar,CharacterRef);
	makearef(Link, Dialog.Links);
	makearef(Diag, NPChar.Dialog);
    //homo Осады
    aref aData;
    makearef(aData, NullCharacter.Siege);
    string sCap, sGroup;
    string fort;
	string coolstories = "";
	int questionsstate = 0;

    if (CheckAttribute(aData, "nation"))
    {
	    sCap = NationShortName(sti(aData.nation))+"SiegeCap_";
	    sGroup = "Sea_"+sCap+"1";

	   // string myships  = GetCompanionQuantity(PChar);
       // string escships = Group_GetCharactersNum(sGroup);

        switch(sti(aData.conation))
        {
            case 0:  fort = "Английским фортом"; break;
            case 1:  fort = "Французским фортом"; break;
            case 2:  fort = "Испанским фортом"; break;
            case 3:  fort = "Голландским фортом"; break;
            case 4:  fort = "Пиратским фортом"; break;
        }
        int ifortPower = sti(colonies[FindColony(aData.colony)].FortValue);
        int fortDamage = CheckFortInjuri();
        int SquadronDamage = CheckSquadronInjuri();

    }

    int iMoney;
	ref sld;

    if (CheckNPCQuestDate(npchar, "Card_date"))
	{
		SetNPCQuestDate(npchar, "Card_date");
		npchar.money = 3000 + rand(10) * makeint(100 * sti(PChar.rank) * (10.0 / MOD_SKILL_ENEMY_RATE));
	}
    //homo 26/06/06
	ProcessCommonDialogRumors(NPChar, Link, Diag);
	if (npchar.id == "BlackBeardNPC" && CheckAttribute(npchar,"met") && Dialog.CurrentNode == "First time") Dialog.CurrentNode = "Titch_7";
	switch(Dialog.CurrentNode)
	{
        case "Exit":
			DialogExit();
			Diag.CurrentNode = Diag.TempNode;
		break;

		case "First time":
			if (!bDisableMapEnter)
			{
				if (npchar.id == "BlackBeardNPC")
				{
					dialog.text = "Какого дьявола тебе здесь надо? (достаёт пистолет)";
					link.l1 = "Спокойно, старик! Меня зовут " + GetFullName(Pchar) + ". Я слы"+ GetSexPhrase("шал","хала")+", что вы ищете удачливого капитана.";
					link.l1.go = "Titch_1";
					link.l2 = "Эй-эй! Я уже ухожу, спокойно!";
					link.l2.go = "exit";
					if (pchar.questTemp.AnjelikaTichPrologue9_BlackBeard == "ATP9")	//Sinistra Анжелика Тич и Эдвард Тич (в будущем поменяем)
					{
						link.l1 = "Спокойно, старик! Меня зовут Анжелика. Я слыхала, что вы ищете удачливого капитана.";
						link.l1.go = "AnjelikaTitch_1";
					}
					break;
				}
                if (CheckAttribute(NPChar, "EncType")  && NPChar.EncType == "war")
                {
    			    Dialog.text = TimeGreeting() + ", "+ GetAddress_Form(NPChar)+"! Я "+ GetFullName(NPChar) +" - капитан корабля флота "+NationKingsName(NPChar)+". Что привело вас ко мне на борт?";
    			}
    			else
                {
    			    Dialog.text = TimeGreeting() + ", "+ GetAddress_Form(NPChar)+"! Я капитан "+ GetFullName(NPChar) +". Что привело вас на борт моего корабля?";
    			}
    			link.l1 = "Меня зовут " + GetFullName(Pchar) + ". У меня есть к вам дело!";
    			link.l1.go = "quests";
                link.l2 = "Ничего особенного, просто "+ GetSexPhrase("зашёл","зашла") +" поприветствовать вас!";
    			link.l2.go = "exit";
            }
            else
            {
                Dialog.text = "Вы заметили, " + GetAddress_Form(NPChar) + ", идёт битва? Нам сейчас не до разговоров!";
    			link.l1 = "Вы правы! Вернусь на свой корабль.";
    			link.l1.go = "exit";
            }
			Diag.TempNode = "first time";
 		break;

        case "quests":
            if (!CheckAttribute(NPChar, "MainCaptanId")  || NPChar.MainCaptanId == pchar.GenQuest.CaptainId)
            {
                Dialog.text = "Я вас внимательно слушаю, " + GetAddress_Form(NPChar)+".";
                link.l1 = "Я хотел"+ GetSexPhrase("","а") +" бы узнать последние новости архипелага.";
                //homo 25/06/06
                link.l1.go = "rumours_capitan";
                //
                if (CheckAttribute(NPChar, "EncGroupName")) // только для фантомов грабёж
                {
                    link.l2 = RandPhraseSimple("Вы в курсе, кто я? Думаю, ясно, что мои корабельные орудия могут сделать решето из вашего корыта. Давайте решим все мирно. Выкуп вполне меня устроит.",
                                               "Море... и мы одни... Как насчёт того, чтобы в целях вашей безопасности немного задобрить моих ребят?.");
                    link.l2.go = "Talk_board";
                }
                if (CheckAttribute(NPChar, "Ship.Mode") && NPChar.Ship.Mode == "Trade")
                {
	           		link.l3 = "Откуда вы идёте?";
	    			link.l3.go = "price_1";
	    			link.l4 = "Поторгуем?";
	    			link.l4.go = "Trade_1";
    			}
				//--> квест мэра, поиски пирата
				if (CheckAttribute(pchar, "GenQuest.DestroyPirate"))
				{
	    			link.l6 = "Я разыскиваю пиратский корабль, орудующий в здешних водах. Вы ничего не видели подозрительного?";
	    			link.l6.go = "MQ_step_1";
				}
				//<-- квест мэра, поиски пирата
				//--> Квест ***Клан Ламбрини*** Sinistra
				if (CheckAttribute(pchar, "questTemp.PDM_CL_Ishem") && npchar.name == "Антонио" && npchar.lastname == "де Гальвес")
				{
	    			link.l10 = "Семья Ламбрини передаёт вам привет! (напасть)";
	    			link.l10.go = "Antonio_Bitva";
					link.l11 = "Кое-кто хочет убить вас. (предать Ламбрини)";
	    			link.l11.go = "Antonio_1_4";
				}
				//<-- Квест ***Клан Ламбрини*** Sinistra
    			link.l5 = "Желаете развеяться?";
			    link.l5.go = "Play_Game";
                link.l9 = "Думаю, мне пора!";
    			link.l9.go = "exit";
			}
			else
			{
                Dialog.text = "Я не уполномочен решать дела с вами, обратитесь к командующему нашей эскадры. Его имя " + GetFullName(characterFromID(NPChar.MainCaptanId))+
                              ", он находится на корабле " + XI_ConvertString(RealShips[sti(characters[GetCharacterIndex(NPChar.MainCaptanId)].Ship.Type)].BaseName) + " '" + characters[GetCharacterIndex(NPChar.MainCaptanId)].Ship.Name + "'.";
                link.l1 = "Спасибо. Так и поступлю.";
                link.l1.go = "exit";
                Diag.TempNode = "Go_away_Good";
			}
        break;
		//--> Квест ***Клан Ламбрини*** Sinistra
		case "Antonio_Bitva":
			bDisableFastReload = true;
			chrDisableReloadToLocation = true;
			LAi_LocationFightDisable(loadedLocation, false);
			AddDialogExitQuest("MainHeroFightModeOn");
			LAi_group_SetRelation("", LAI_GROUP_PLAYER, LAI_GROUP_ENEMY);
			LAi_group_FightGroups("", LAI_GROUP_PLAYER, false);
			LAi_group_SetCheck("", "PDM_CL_Lodka");
			DialogExit();
		break;

		case "Antonio_1_4":
			dialog.text = "И что из этого? Если вы хотели сделать мне сюрприз, то он не удался. Ламбрини хочет меня убить, впрочем, как и остальные контрабандисты были бы не прочь.";
			link.l1 = "Я "+ GetSexPhrase("пришёл","пришла") +" к вам с предложением. Что вы сказали бы, если бы я предоставил"+ GetSexPhrase("","а") +" вам возможность поймать или потопить корабль Ламбрини?";
			link.l1.go = "Antonio_1_6";
			link.l2 = "Что же, тогда прощайте.";
			link.l2.go = "exit";
		break;

		case "Antonio_1_6":
			dialog.text = "Я бы отдал за это мою правую руку. Но это невозможно, увы. Он уже подкупил, кажется, каждого таможенника на Карибах. Что я могу сделать в одиночку?";
			link.l1 = "Ламбрини предложил мне помочь ему избавиться от вас. Он уверен, что ему в одиночку с вами не справиться...";
			link.l1.go = "Antonio_1_7";
		break;

		case "Antonio_1_7":
			dialog.text = "Если вы работаете на контрабандистов, то нам с вами разговаривать не о чем, сеньор"+ GetSexPhrase("","ита") +"...";
			link.l1 = "Э, погодите - вы меня даже не выслушали. Я могу сказать Ламбрини, что утопил"+ GetSexPhrase("","а") +" ваш корабль. После этого, он рано или поздно приплывёт сюда, думая, что ему больше ничего не грозит. А вы сможете подстеречь его в бухте, или рядом с ней.";
			link.l1.go = "Antonio_1_8";
		break;

		case "Antonio_1_8":
			dialog.text = "Любопытно... Этот план может сработать, сеньор"+ GetSexPhrase("","ита") +" "+pchar.name+". А если он сработает, я добьюсь, чтобы сеньор губернатор щедро вознаградил вас!";
			link.l1 = "И сколько, по-вашему, может стоить голова Ламбрини?";
			link.l1.go = "Antonio_1_9";
		break;

		case "Antonio_1_9":
			int Bonus = sti(pchar.rank);
			if (Bonus <= 6) Bonus = 1;
			if (Bonus >= 7 && Bonus <= 12) Bonus = 1.2;
			if (Bonus >= 13) Bonus = 1.5;
			int Plata2 = 20000 + 2000 * sti(pchar.rank) * Bonus;
			dialog.text = "Я полагаю, примерно " + Plata2 + ". Наши доходы в последнее время очень снизились из-за контрабандистов.";
			link.l1 = "Думаю, что " + Plata2 + " - это достаточная плата. Итак, я скажу Октавио Ламбрини, что с вами покончено... Когда он приплывёт сюда, мы его здесь сцапаем. Что может быть проще?";
			link.l1.go = "Antonio_1_10";
		break;

		case "Antonio_1_10":
			dialog.text = "Как только сообщите Ламбрини о моей смерти - сразу же возвращайтесь ко мне, я буду ждать вас в церкви с 9 утра до часу дня. Мы придумаем, что делать дальше.";
			link.l1 = "Берегите себя, сеньор. Удачи!";
			link.l1.go = "Antonio_1_11";
		break;

		case "Antonio_1_11":
			sld = CharacterFromID("PDM_Octavio_Lambrini")
			sld.Dialog.Filename = "Quest/PDM/Clan_Lambrini.c";
			sld.dialog.currentnode   = "Octavio_3_1";
			DeleteAttribute(pchar, "questTemp.PDM_CL_Ishem");
			PChar.quest.PDM_CL_Antonio_Ubit.over = "yes";
			AddQuestRecord("PDM_Clan_Lambrini", "4");
			AddQuestUserData("PDM_Clan_Lambrini", "sSex", GetSexPhrase("","а"));
			AddQuestUserData("PDM_Clan_Lambrini", "sSex2", GetSexPhrase("ся","ась"));

			DialogExit();
		break;
		//<-- Квест ***Клан Ламбрини*** Sinistra
        case "Trade_1":
			dialog.text = "Почему бы и нет?";
			link.l1 = "Пойдёмте смотреть товары.";
			link.l1.go = "Trade_2";
			link.l2 = "Я передумал"+ GetSexPhrase("","а") +".";
			link.l2.go = "exit";
		break;

		case "Trade_2":
			FillShipStore(NPChar);
	    	pchar.shiptrade.character = NPChar.id;
   			Diag.CurrentNode = Diag.TempNode;
		    DialogExit();
		    DeleteAttribute(pchar, "PriceList.StoreManIdx"); // не вести лог по кораблям
		    LaunchStore(SHIP_STORE);
		break;

        case "Play_Game":
			dialog.text = "Что вы предлагаете?";
			link.l1 = "Перекинемся в карты на солидный интерес?";
			link.l1.go = "Card_Game";
   			link.l2 = "Погремим костями в покер-джокер?";
			link.l2.go = "Dice_Game";
			link.l10 = "Прошу простить, но меня ждут дела.";
			link.l10.go = "exit";
		break;
        // карты -->
        case "Card_Game":
            if (!CheckNPCQuestDate(npchar, "Card_date_Yet") || isBadReputation(pchar, 30) || GetCharacterSkillToOld(pchar, SKILL_LEADERSHIP) < rand(3))
            {
                SetNPCQuestDate(npchar, "Card_date_Yet");
                dialog.text = "Я не буду играть в азартные игры с разными проходимцами!";
    			link.l1 = "Как вам будет угодно.";
    			link.l1.go = "exit";
			}
			else
			{
                dialog.text = "Давайте! Немного передохну от корабельных дел...";
    			link.l1 = "Замечательно.";
    			link.l1.go = "Cards_begin";
    			link.l2 = "По каким правилам играем?";
    			link.l2.go = "Cards_Rule";
			}
		break;

		case "Cards_Rule":
   			dialog.text = CARDS_RULE;
			link.l1 = "Что ж, давайте начнём!";
			link.l1.go = "Cards_begin";
			link.l3 = "Нет, это не для меня...";
			link.l3.go = "exit";
		break;

		case "Cards_begin":
			Dialog.text = "Давайте определимся со ставкой.";
			link.l1 = "Играем по 100 монет.";
			link.l1.go = "Cards_Node_100";
			link.l2 = "Давайте по 500 золотых.";
			link.l2.go = "Cards_Node_500";
			link.l3 = "Пожалуй, мне пора.";
			link.l3.go = "exit";
		break;

		case "Cards_Node_100":
		    if (sti(pchar.Money) < 300)
		    {
                dialog.text = "Шутить изволите? У вас нет денег!";
                link.l1 = "Бывает.";
			    link.l1.go = "exit";
			    break;
		    }
		    if (sti(npchar.Money) < 300)
		    {
                dialog.text = "Хватит с меня, а то на содержание корабля не останется...";
                link.l1 = "Жаль.";
			    link.l1.go = "exit";
			    break;
		    }
   			dialog.text = "Хорошо, играем по 100 монет.";
			link.l1 = "Начали!";
			link.l1.go = "Cards_begin_go";
			pchar.GenQuest.Cards.npcharIdx = npchar.index;
            pchar.GenQuest.Cards.iRate     = 100;
            pchar.GenQuest.Cards.SitType   = false;
		break;

		case "Cards_Node_500":
		    if (sti(pchar.Money) < 1500)
		    {
                dialog.text = "Шутить изволите? У вас нет 1500 золотых!";
                link.l1 = "Будут!";
			    link.l1.go = "exit";
			    break;
		    }
		    if (sti(npchar.Money) < 1500)
		    {
                dialog.text = "Нет, такие ставки не доведут до добра.";
                link.l1 = "Как угодно.";
			    link.l1.go = "exit";
			    break;
		    }
   			dialog.text = "Хорошо, играем по 500 монет.";
			link.l1 = "Начали!";
			link.l1.go = "Cards_begin_go";
			pchar.GenQuest.Cards.npcharIdx = npchar.index;
            pchar.GenQuest.Cards.iRate     = 500;
            pchar.GenQuest.Cards.SitType   = false;
		break;

		case "Cards_begin_go":
            Diag.CurrentNode = Diag.TempNode;
			DialogExit();
            LaunchCardsGame();
		break;
	    // карты <--
	    //  Dice -->
        case "Dice_Game":
            if (!CheckNPCQuestDate(npchar, "Dice_date_Yet") || isBadReputation(pchar, 30) || GetCharacterSkillToOld(pchar, SKILL_LEADERSHIP) < rand(3))
            {
                SetNPCQuestDate(npchar, "Dice_date_Yet");
                dialog.text = "Я не буду играть в азартные игры с разными проходимцами!";
    			link.l1 = "Как вам будет угодно.";
    			link.l1.go = "exit";
			}
			else
			{
				if (CheckNPCQuestDate(npchar, "Dice_date_begin"))
				{
					dialog.text = "Давайте! Отдых никогда не вредил здоровью... только кошельку...";
	    			link.l1 = "Замечательно.";
	    			link.l1.go = "Dice_begin";
	    			link.l2 = "По каким правилам игра?";
	    			link.l2.go = "Dice_Rule";
    			}
    			else
    			{
					dialog.text = "Нет, с меня довольно на сегодня. Дела ждут.";
	    			link.l1 = "Как вам будет угодно.";
	    			link.l1.go = "exit";
				}
			}
		break;

		case "Dice_Rule":
   			dialog.text = DICE_RULE;
			link.l1 = "Что ж, давайте начнём!";
			link.l1.go = "Dice_begin";
			link.l3 = "Нет, это не для меня...";
			link.l3.go = "exit";
		break;

		case "Dice_begin":
			Dialog.text = "Давайте определимся со ставкой.";
			link.l1 = "Играем по 50 монет за кубик.";
			link.l1.go = "Dice_Node_100";
			link.l2 = "Давайте по 200 золотых за кубик.";
			link.l2.go = "Dice_Node_500";
			link.l3 = "Пожалуй, мне пора.";
			link.l3.go = "exit";
		break;

		case "Dice_Node_100":
            if (!CheckDiceGameSmallRate())
		    {
                dialog.text = "О тебе ходит слава непревзойденн"+ GetSexPhrase("ого шулера","ой каталы") +". Я не буду с тобой играть в кости вообще.";
                link.l1 = "Все врут! Ну и не нужно.";
			    link.l1.go = "exit";
			    break;
		    }

			if (sti(pchar.Money) < 300)
		    {
                dialog.text = "Шутить изволите? У вас нет денег!";
                link.l1 = "Бывает.";
			    link.l1.go = "exit";
			    break;
		    }
		    if (sti(npchar.Money) < 300)
		    {
                dialog.text = "Все! Нужно завязывать с играми, а то запишут в растратчики и спишут на берег...";
                link.l1 = "Жаль.";
			    link.l1.go = "exit";
			    break;
		    }
   			dialog.text = "Хорошо, играем по 50 монет.";
			link.l1 = "Начали!";
			link.l1.go = "Dice_begin_go";
			pchar.GenQuest.Dice.npcharIdx = npchar.index;
            pchar.GenQuest.Dice.iRate     = 50;
            pchar.GenQuest.Dice.SitType   = false;
		break;

		case "Dice_Node_500":
            if (!CheckDiceGameSmallRate())
		    {
                dialog.text = "О тебе ходит слава непревзойденн"+ GetSexPhrase("ого шулера","ой каталы") +". Я не буду с тобой играть в кости вообще.";
                link.l1 = "Все врут! Ну и не нужно.";
			    link.l1.go = "exit";
			    break;
		    }
			if (!CheckDiceGameBigRate())
		    {
                dialog.text = "Я слышал, что ты очень хорошо играешь. Я не буду играть с тобой по таким большим ставкам.";
                link.l1 = "Давайте по более низким ставкам?";
			    link.l1.go = "Dice_Node_100";
				link.l2 = "Извините, мне пора.";
			    link.l2.go = "exit";
			    break;
		    }

			if (sti(pchar.Money) < 1500)
		    {
                dialog.text = "Шутить изволите? У вас нет 1500 золотых!";
                link.l1 = "Будут!";
			    link.l1.go = "exit";
			    break;
		    }
		    if (sti(npchar.Money) < 1500)
		    {
                dialog.text = "Нет, такие ставки не доведут до добра.";
                link.l1 = "Как угодно.";
			    link.l1.go = "exit";
			    break;
		    }
   			dialog.text = "Хорошо, играем по 200 монет за кубик.";
			link.l1 = "Начали!";
			link.l1.go = "Dice_begin_go";
			pchar.GenQuest.Dice.npcharIdx = npchar.index;
            pchar.GenQuest.Dice.iRate     = 200;
            pchar.GenQuest.Dice.SitType   = false;
		break;

		case "Dice_begin_go":
            SetNPCQuestDate(npchar, "Dice_date_begin");
			Diag.CurrentNode = Diag.TempNode;
			DialogExit();
            LaunchDiceGame();
		break;
	    // Dice <--
        case "price_1":
			if (CheckNPCQuestDate(npchar, "trade_date"))
			{
                SetNPCQuestDate(npchar, "trade_date");
				iMoney = findPriceStoreMan(NPChar);
	            if (iMoney == -1)
	            {
	                Dialog.Text = "Зачем вам это знать? Это моё личное дело.";
					Link.l1 = "Как вам будет угодно.";
					Link.l1.go = "exit";
	            }
	            else
	            {
                    sld = &Characters[iMoney];
                    pchar.PriceList.ShipStoreIdx = iMoney;

					Dialog.Text = "Я иду из города " + GetCityName(sld.City) + ".";
					Link.l1 = "Какие цены на товары в местном магазине?";
					Link.l1.go = "price_2";
					Link.l9 = "Мне уже пора.";
					Link.l9.go = "exit";
				}
			}
			else
			{
                Dialog.Text = "Я же вам все уже сказал. Не беспокойте меня по пустякам.";
				Link.l1 = "Да, вы правы. Прощайте.";
				Link.l1.go = "exit";
            }
		break;

		case "price_2":
            sld = &Characters[sti(pchar.PriceList.ShipStoreIdx)];
			SetPriceListByStoreMan(&Colonies[FindColony(sld.City)]);
			Dialog.Text = "Вот такие... (вы получили сводку цен на товары).";
			Link.l1 = "Большое спасибо!";
			Link.l1.go = "exit";
			PlaySound("interface\important_item.wav");
		break;

        case "Talk_board":
            if ((Group_GetCharactersNum(NPChar.EncGroupName) - Group_GetDeadCharactersNum(NPChar.EncGroupName)) > GetCompanionQuantity(PChar) && rand(11) > GetCharacterSkillToOld(PChar, SKILL_FORTUNE))
            {
                Dialog.text = "Ха-ха! Хорошая шутка. Тем более, что у меня больше кораблей. Убирайтесь на свой корабль и тоните вместе с ним.";
                link.l1 = "Больше - не значит мощнее...";
                link.l1.go = "Boarding";
            }
            else
            {
                if(rand(21) > (GetSummonSkillFromNameToOld(PChar, SKILL_GRAPPLING) + GetSummonSkillFromNameToOld(PChar, SKILL_LEADERSHIP)) )
                {
                    Dialog.text = "Напрасно вы затеяли своё грязное дело, капитан, на борту моего корабля. Я проявлю милосердие и позволю вам вернуться на свой корабль и утонуть вместе с ним.";
                    link.l1 = "Мы ещё посмотрим, кто сегодня пойдёт на корм акулам!";
                    link.l1.go = "Boarding";
                }
                else
                {
                    Pchar.GenQuest.MoneyForCaptureShip = makeint(100 + (Group_GetCharactersNum(NPChar.EncGroupName) - Group_GetDeadCharactersNum(NPChar.EncGroupName))*(7 - sti(RealShips[sti(NPChar.Ship.Type)].Class))*(1+rand(10))*500);
                    Dialog.text = RandSwear() + "Да, я наслышан о ваших бесчинствах. Будь по-вашему, но помните " +
                                  XI_ConvertString(NationShortName(sti(NPChar.nation))+"hunter") + " не оставит это безнаказанным!";
                    link.l1 = "Замечательно. Сумма в "+Pchar.GenQuest.MoneyForCaptureShip+" золотых меня вполне устроит, "+GetAddress_FormToNPC(NPChar)+".";
                    link.l1.go = "Capture";
                    link.l2 = "Ой. Да ладно. Я пошутил"+ GetSexPhrase("","а") +"!";
                    link.l2.go = "exit";
                }
            }
            // тут нужен учёт запрета повторного наезда
            Diag.TempNode = "Go_away";
			sld = characterFromId(pchar.GenQuest.CaptainId);
            sld.talk_date_Go_away =  lastspeakdate(); // boal злопамятность :)
        break;

        case "rumours":
			Dialog.Text = SelectRumour(); // to_do
			Link.l1 = RandPhraseSimple(RandSwear() + "Это очень интересно. Другой вопрос?",
                                     "Ещё одно дело.");
			Link.l1.go = "quests";
			Link.l2 = RandPhraseSimple("Спасибо, должен откланяться.",
                                     "Всего хорошего.");
			Link.l2.go = "exit";
			Diag.TempNode = "quests";
		break;

		case "Go_away":
			Dialog.Text = "Убирайтесь с моего корабля!";
			Link.l1 = "Уже ухожу.";
			Link.l1.go = "exit";
			Diag.TempNode = "Go_away";
		break;

		case "Go_away_Good":
			Dialog.Text = "Наш разговор уже окончен. Ничего нового я вам не скажу, "+GetAddress_Form(NPChar)+".";
			Link.l1 = "Ясно. До встречи в море!";
			Link.l1.go = "exit";
			Diag.TempNode = "Go_away_Good";
		break;

        case "Capture":
            Diag.TempNode = "Go_away";
            Dialog.Text = "Получите! А теперь убирайтесь вон!";
			Link.l1 = "Замечательно!";
			Link.l1.go = "exit";
			AddMoneyToCharacter(pchar, sti(Pchar.GenQuest.MoneyForCaptureShip));
			ChangeCharacterReputation(pchar, -5);
			AddCharacterExpToSkill(pchar, "Leadership", 20);
			ChangeCharacterHunterScore(pchar, NationShortName(sti(NPChar.nation)) + "hunter", 7 + rand(10));
        break;

        case "Boarding":
            if (CheckAttribute(NPChar, "MainCaptanId"))
            {
                PChar.StartBattleAfterDeck = true;
                PChar.StartBattleMainCaptanId = NPChar.MainCaptanId;
                PChar.StartBattleEncGroupName = NPChar.EncGroupName;
            }
            DialogExit();
            Diag.CurrentNode = Diag.TempNode;
        break;

        case "QuestAboardCabinDialog":  // тестовый диалог, в игре не работает, для метода SetQuestAboardCabinDialog
			Diag.TempNode = "QuestAboardCabinDialog";
            Dialog.Text = "Стой, так и убить можно. Что ты хочешь от меня?";
			Link.l1 = "Убить!";
			Link.l1.go = "QuestAboardCabinDialog_1";
			Link.l2 = "Взять в плен.";
			Link.l2.go = "QuestAboardCabinDialog_2";
			Link.l3 = "Отдай нам карту, Билли (c)";  // предмет, далее не ясно или  QuestAboardCabinDialog_1 или QuestAboardCabinDialog_2
			Link.l3.go = "QuestAboardCabinDialog_3";  // можно закодить покидание корабля, но экипаж уже вырезан и тп...
        break;

        case "QuestAboardCabinDialog_1":
			Dialog.Text = "Ну, это мы ещё посмотрим!";
			Link.l1 = "А что тут смотреть?";
			Link.l1.go = "exit";
			// тут можно восстановить НР противника (NPChar) или добавить парочку гардов против ГГ
			LAi_SetCurHPMax(NPChar);
			AddDialogExitQuestFunction("QuestAboardCabinDialogExitWithBattle"); // тут ругань обратно
		break;

		case "QuestAboardCabinDialog_2":
			Dialog.Text = "Хорошо, твоя взяла!";
			Link.l1 = "Так бы сразу!";
			Link.l1.go = "exit";
			AddDialogExitQuestFunction("QuestAboardCabinDialogSurrender");
		break;

		case "QuestAboardCabinDialog_3":
			Dialog.Text = "Да забирай!";
			Link.l1 = "Вот и хорошо, теперь сдавайся в плен.";
			if (rand(1) == 1)  // пример!!!
			{
				Link.l1.go = "QuestAboardCabinDialog_2";
			}
			else
			{
			    Link.l1.go = "QuestAboardCabinDialog_3_1";
			}
			TakeNItems(NPChar, "Chest", -1);
			TakeNItems(pchar, "Chest", 1);
		break;

		case "QuestAboardCabinDialog_3_1":
			Dialog.Text = ""+ GetSexPhrase("Пришёл","Пришла") +", наследил"+ GetSexPhrase("","а") +", все отнял"+ GetSexPhrase("","а") +" и ещё меня в рабы? Фиг!";
			Link.l1 = "Тогда тапки белые готовь.";
			Link.l1.go = "QuestAboardCabinDialog_1";
		break;
		//eddy. квест мэра, поиски пирата
		case "MQ_step_1":
			Dialog.Text = "Нет, никакого подозрительного корабля, похожего на пиратский, я не видел.";
			Link.l1 = "Понятно.";
			Link.l1.go = "exit";
		break;

		//homo Наводка на купца
		case "MerchantTrap_Abordage":

			Dialog.Text = "Именем "+NationKingsName(NPChar)+" сдавайся, "+ GetSexPhrase("подлый пират","подлая злодейка") +"! И тебе сохранят жизнь до справедливого суда, где ты ответишь, за все "+NationNameSK(sti(NPChar.nation))+"ие корабли, которые ты ограбил"+ GetSexPhrase("","а") +".";
			Link.l1 = "Как бы не так - сам сдавайся.";
			Link.l1.go = "exit";
			LAi_SetCurHPMax(NPChar);
			AddDialogExitQuestFunction("QuestAboardCabinDialogExitWithBattleNoParam"); // тут ругань обратно
		break;

		case "Siegehelp":

            ref rchar = Group_GetGroupCommander(sGroup);
            if (NPChar.id == rchar.id)
            {

    			dialog.text = "Я вас слушаю, но давайте поскорее выкладывайте цель вашего визита, у нас идёт бой с " + fort +
                          " и мне нужно руководить ходом сражения.";
                link.l1 = "Именно поэтому я здесь, " + GetAddress_FormToNPC(NPChar) + ".";
                link.l1.go = "attack_fort";

                link.l2 = "В таком случае не буду вас больше задерживать. Прощайте, "+ GetAddress_FormToNPC(NPChar) + ".";
                link.l2.go = "exit";

            }
            else
            {
                Dialog.text = "Я не уполномочен решать дела с вами, обратитесь к командующему нашей эскадры. Его имя " + GetFullName(rchar)+
                              ", он находится на корабле " + XI_ConvertString(RealShips[sti(rchar.Ship.Type)].BaseName) + " ''" + rchar.Ship.Name + "''.";
                link.l1 = "Спасибо. Так и поступлю.";
                link.l1.go = "exit";

            }
            Diag.TempNode = "Siegehelp";

		break;

		case "attack_fort":
                dialog.text = "И о чём же идёт речь?";
                link.l1 = "Я могу помочь вам разгромить форт колонии " +GetConvertStr(aData.Colony+" Town", "LocLables.txt")+ " и захватить город, а добычу, полученную в случае нашего успеха, мы поделим между собой.";
                link.l1.go = "Siegehelp_1";
                link.l2 = "Собственно, моё дело вряд ли заслуживает вашего внимания. Прощайте, "+ GetAddress_FormToNPC(NPChar) + ".";
                link.l2.go = "exit";
                Diag.TempNode = "Siegehelp_0";
		break;

		case "Siegehelp_0":
            Dialog.text = "Это опять вы? Мне казалось, мы все уже обсудили?";
            link.l1 = "Вы правы - забыл"+ GetSexPhrase("","а") +".";
			link.l1.go = "exit";
			NPChar.DeckDialogNode = "Siegehelp_0";
            Diag.TempNode = "Siegehelp_0";

		break;

		case "Siegehelp_1":
            SiegeResult("");
            if (sti(aData.win)==0)
            {
                dialog.text = "И какую же часть добычи вы рассчитываете получить?";
                link.l1 = "Половину.";
                link.l1.go = "Big_part";
                link.l2 = "Одну треть.";
                link.l2.go = "Middle_part";
                link.l3 = "Четвёртую часть.";
                link.l3.go = "Small_part";
            }
            else
            {
                dialog.text = "Мне не требуются ваши услуги, капитан! Я не нуждаюсь ни в чьей помощи, так как в любом случае захвачу эту колонию.";
                link.l1 = "Откуда такая уверенность, " + GetAddress_FormToNPC(NPChar) + ", неудачи могут постигнуть любого.";
                link.l1.go = "attack_fort_03";
                link.l2 = "В таком случае не буду вас больше задерживать, " + GetAddress_FormToNPC(NPChar) + ". Прощайте!";
                link.l2.go = "exit";
            }
			Diag.TempNode = "Siegehelp_0";

		break;

		case "attack_fort_03":


            if((sti(aData.iSquadronPower)*SquadronDamage - (ifortPower)*fortDamage) < 4000)
            {
                dialog.text = "С другой стороны, мои корабли уже изрядно потрёпаны в этом сражении, и подкрепление нам бы не помешало. Если вы согласны на " + GetPart(4) + ", то, я думаю, мы сможем договориться.";
                link.l1 = "Меня это устраивает, " + GetAddress_FormToNPC(NPChar) + ". Я попытаюсь взять форт штурмом, а вы со своей стороны поддержите нас огнём корабельных орудий.";
                link.l1.go = "attack_fort_04";
                aData.PartAttaksFort = 4;
                link.l2 = "Я стою не так дёшево, " + GetAddress_FormToNPC(NPChar) + ". Прошу прощения, что оторвал"+ GetSexPhrase("","а") +" вас от насущных дел. Прощайте.";
                link.l2.go = "exit";
            }else{
                dialog.text = "В моей эскадре достаточно кораблей, чтобы разнести этот форт в пух и прах, это только вопрос времени. А теперь соизвольте покинуть мой корабль, впереди меня ожидает победа!";
                link.l1 = "Ну что ж, в таком случае, " + GetAddress_FormToNPC(NPChar) + ", позвольте откланяться. Прощайте!";
                link.l1.go = "exit";
            }
		    Diag.TempNode = "Siegehelp_0";
		break;
		case "Big_part":
            if( (sti(aData.iSquadronPower)*SquadronDamage - (ifortPower)*fortDamage) <= -1500)
            {
                dialog.text = "Орудия форта сильно повредили корабли моей эскадры, и исход этого сражения может обернуться не в нашу пользу. Я согласен на ваши условия и принимаю вашу помощь.";
                link.l1 = "Отлично, " + GetAddress_FormToNPC(NPChar) + ", в таком случае мы возьмём форт штурмом, а вы уж поддержите нас огнём корабельных пушек.";
                link.l1.go = "attack_fort_04";
                aData.PartAttaksFort = 2;
            }
            else
            {
                dialog.text = "Не многовато ли, капитан? У вас " + GetNumShips(GetCompanionQuantity(PChar)) +
                              ", в моей эскадре " + GetNumShips(Group_GetCharactersNum(sGroup)) + ". Я могу вам предложить " + GetPart(4) +
                              ". И я думаю, это правильно.";
                aData.PartAttaksFort = 4;
                link.l1 = "Я соглас"+ GetSexPhrase("ен","на") +", " + GetAddress_FormToNPC(NPChar) + ", в таком случае, я беру на себя захват форта, а вы уж поддержите нас огнём корабельных орудий.";
                link.l1.go = "attack_fort_04";
                link.l2 = "К сожалению, я так не думаю, " + GetAddress_FormToNPC(NPChar) + ". Нам больше не о чем разговаривать. Прощайте.";
                link.l2.go = "exit";
            }
            Diag.TempNode = "Siegehelp_0";
        break;

        case "attack_fort_04":
            dialog.text = "Как только форт будет захвачен, мы немедленно начинаем высадку десантных групп на берег, а дальше уже продолжим бой в самом городе, где, я надеюсь, мы и встретимся с вами.";
            link.l1 = "На этом и порешим. До встречи, " + GetAddress_FormToNPC(NPChar) + "!";
            link.l1.go = "exit";
            Diag.TempNode = "Siegehelp_0";
            PChar.quest.Union_with_Escadra = "Yes";
        break;

        case "Middle_part":
            if((sti(aData.iSquadronPower)*SquadronDamage - (ifortPower)*fortDamage) <= -600)
            {
                dialog.text = "Пожалуй, я соглашусь на ваши условия. Совместная операция увеличивает мои шансы на благополучный исход этого сражения. В случае успешного завершения дела вы получите свою часть добычи.";
                link.l1 = "Ну вот и славно, что мы договорились, " + GetAddress_FormToNPC(NPChar) + ". Я немедленно отдам приказ своим людям атаковать форт.";
                link.l1.go = "attack_fort_04";
                aData.PartAttaksFort = 3;
            }else{
                dialog.text = "Не многовато ли, капитан? У вас " + GetNumShips(GetCompanionQuantity(PChar)) + ", в моей эскадре " + GetNumShips(Group_GetCharactersNum(sGroup)) + ". Я могу вам предложить " + GetPart(4) + ". И я думаю, это правильно.";
                link.l1 = "Я "+ GetSexPhrase("согласен","согласна") +", " + GetAddress_FormToNPC(NPChar) + ", в таком случае я беру на себя штурм форта, а вы поддержите нас огнём корабельных орудий.";
                link.l1.go = "attack_fort_04";
                aData.PartAttaksFort = 4;
                link.l2 = "К сожалению, я так не думаю, " + GetAddress_FormToNPC(NPChar) + ". Нам больше не о чем разговаривать. Прощайте.";
                link.l2.go = "exit";
            }
            Diag.TempNode = "Siegehelp_0";
        break;

        case "Small_part":
            dialog.text = "Корабли моей эскадры измотаны сражением, так что свежие силы нам не помешают. Я согласен на эти условия и принимаю ваше предложение.";
            link.l1 = "Я рад"+ GetSexPhrase("","а") +", что мы смогли договориться, " + GetAddress_FormToNPC(NPChar) + ". Я немедленно отдам приказ своим людям вступить в бой и начать атаку форта.";
            link.l1.go = "attack_fort_04";
            aData.PartAttaksFort = 4;
            Diag.TempNode = "Siegehelp_0";
        break;

		case "Talk_Capture_City":
            AfterTownBattle();  // все, все свободны
            LAi_LoginInCaptureTown(NPChar, false);
            aData.win = 1;
            EndOfTheSiege("End");
            NPChar.location = "";
            int ilt = makeint(sti(aData.loot)/sti(aData.PartAttaksFort));
            dialog.text = "Здравствуйте, капитан! Хоть битва и была жаркой, но всё-таки нам удалось сломить яростное сопротивление защитников города. Добыча составляет " + sti(aData.loot)+
                          " золотых. И по нашему договору вы получаете "+ilt+
                          ". Вот ваши деньги, вы их, несомненно, заслужили. А теперь прошу меня извинить, но меня ждут дела.";
            link.l1 = "В таком случае позвольте откланяться, " + GetAddress_FormToNPC(NPChar) + ". Прощайте!";
            link.l1.go = "exit";
            //AddDialogExitQuest("End_Siege_and_Attaks_City");

            Diag.TempNode = "no_return_02";
            AddMoneyToCharacter(PChar, ilt);
            ChangeCharacterNationReputation(pchar, sti(NPChar.nation), 20);
            ChangeCharacterReputation(PChar, 10);
            AddCharacterExpToSkill(GetMainCharacter(), "Leadership", 80);
            AddCharacterExpToSkill(GetMainCharacter(), "Sailing", 100);
            AddCharacterExpToSkill(GetMainCharacter(), "Defence", 100);
            AddCharacterExpToSkill(GetMainCharacter(), "Accuracy", 100);
            AddCharacterExpToSkill(GetMainCharacter(), "Cannons", 100);
            AddCharacterExpToSkill(GetMainCharacter(), "Fortune", 80);
            aData.loot = sti(aData.loot) - ilt;
            if (CheckAttribute(PChar, "quest.LeaveTown")) Pchar.quest.LeaveTown.over = "yes";
            //--> слухи
            SiegeRumour("Прошёл слух, что вы помогли нашей эскадре при штурме "+NationNameSK(sti(aData.conation))+"ой колонии - "+GetConvertStr(aData.Colony+" Town", "LocLables.txt")+"! Мы так благодарны вам, "+ GetAddress_Form(NPChar)+".", "", sti(aData.nation), -1, 30, 3);
            //<-- слухи
		break;

        case "no_return_02":
            dialog.text = "Приветствую вас, капитан! У вас ко мне дело?";
            link.l1 = "Никаких, " + GetAddress_FormToNPC(NPChar) + ". Прощайте!";
            link.l1.go = "exit";
            Diag.TempNode = "no_return_02";
		break;

		case "GoldSquadron":
            ref rch = Group_GetGroupCommander("Sea_Head_of_Gold_Squadron");
            if (NPChar.id == rch.id)
            {
    			dialog.text = "Я вас слушаю, но давайте поскорее выкладывайте цель вашего визита, я очень спешу. На меня возложена важная миссия секретного характера, и к тому же мне предписано топить все подозрительные корабли в открытом море, которые могут представлять опасность нашему конвою.";

                link.l1 = "В таком случае не буду вас больше задерживать. Прощайте, "+ GetAddress_FormToNPC(NPChar) + ".";
                link.l1.go = "exit";

            }
            else
            {
                Dialog.text = "Я не уполномочен решать дела с вами, обратитесь к командующему нашей эскадры. Его имя " + GetFullName(rch)+
                              ", он находится на корабле " + XI_ConvertString(RealShips[sti(rch.Ship.Type)].BaseName) + " ''" + rch.Ship.Name + "''.";
                link.l1 = "Спасибо. Так и поступлю.";
                link.l1.go = "exit";

            }
            Diag.TempNode = "GoldSquadron";
		break;
		
		case "AnjelikaTitch_1":		//Sinistra Анжелика Тич и Эдвард Тич
			Dialog.text = "Анжелика? У меня была дочь Анжелика. Её блудливая мать умыкнула мою малышку прямо из-под носа. Сбежала с каким-то недоноском... А, дьявол, если бы мне удалось их тогда найти, пропустил бы обоих под килем.";
			link.l1 = "Я слышала совсем другую историю.";
			link.l1.go = "AnjelikaTitch_2";
		break;
		
		case "AnjelikaTitch_2":
			Dialog.text = "Плевать, что там обо мне говорят, ты здесь по делу? Так вот слушай: мне уже пора достойно уйти на покой и передать мои знания и навыки преемнику. Но я должен убедиться, что он этого заслуживает.";
			link.l1 = "Твой преемник? И что же попадает под критерии достоинства?";
			link.l1.go = "Titch_2";
			DeleteAttribute(pchar, "questTemp.AnjelikaTichPrologue9_BlackBeard");
		break;

		case "Titch_1":
			Dialog.text = "Есть такое. Мне уже пора достойно уйти на покой и передать мои знания и навыки преемнику. Но я должен убедиться, что он этого заслуживает.";
			link.l1 = "Твой преемник? И что же попадает под критерии достоинства?";
			link.l1.go = "Titch_2";
		break;

		case "Titch_2":
			Dialog.text = "В мои лучшие годы, мне, как пирату, не было равных и поэтому мой преемник должен быть не хуже.";
			link.l1 = "Я слушаю...";
			link.l1.go = "Titch_3";
		break;

		case "Titch_3":
			if (!CheckAttribute(pchar,"ShipsSurr")) pchar.ShipsSurr = 0;
			Dialog.text = "Тебе предстоит взять на абордаж 5 торговых кораблей и заставить их сдаться, чтобы капитаны умоляли тебя пощадить их. Едва завидев мой вымпел, противники обычно сдавались без боя. Во всяком случае после того, как я стал более известен в этих водах.";
			link.l1 = "Это будет быстро, или очень непросто. Тем не менее, я заставлю толстосумов молить о пощаде! Вот увидишь!";
			link.l1.go = "Titch_4";
		break;

		case "Titch_4":
			Dialog.text = "Мне необходимо проверить твой уровень фехтования, ведь это основа любого уважающего себя пирата или корсара. Если удача укусила тебя за задницу, то я хочу лично проверить - так ли это. Попробуем сыграть в двадцать одно. Если ты проиграешь, то уже мой пистолет укусит тебя за...";
			link.l1 = "Понял"+ GetSexPhrase("","а") +", понял"+ GetSexPhrase("","а") +"... Меня и правда кто-то укусил за задницу. Будешь проверять? А фехтование моё... Да я разнесу любого! Но только в честной дуэли. Надеюсь, она будет честной.";
			link.l1.go = "Titch_5";
		break;

		case "Titch_5":
			Dialog.text = "Чтобы о тебе слагали легенды, ты долж"+ GetSexPhrase("ен","на") +" сам"+ GetSexPhrase("","а") +" уметь слагать их. Я желаю слышать, что ты обо мне знаешь. У настоящего корсара должен быть по-настоящему острый ум и трезвая голова.";
			link.l1 = "Ну... я много слышал"+ GetSexPhrase("","а") +" о тебе. Так это или нет, ты уже сам подтвердишь.";
			link.l1.go = "Titch_6";
		break;

		case "Titch_6":
			Dialog.text = "Ну и напоследок, морская битва. Здесь тебе никто не поможет и не придёт на помощь. Биться будем насмерть!";
			link.l1 = "У тебя очень внушительный фрегат... Это однозначно не звучит как что-то простое.";
			link.l1.go = "Titch_7";
		break;

		case "Titch_7":
			npchar.met = true;
			Dialog.text = "Ну?! И что скажешь?";
			if (!CheckAttribute(npchar,"Duel"))
			{
				link.l1 = "Думаю, у меня хватит сил оставить историю порезов и ушибов на твоём теле. Где и когда будем драться?";
				link.l1.go = "Titch_duel";
			}
			if (!CheckAttribute(npchar,"Cards"))
			{
				link.l2 = "Сыграем в карты?";
				link.l2.go = "Titch_cards";
			}
			if (!CheckAttribute(npchar,"questions"))
			{
				link.l3 = "Проверь меня на знания о тебе. Если это не детские загадки.";
				link.l3.go = "Titch_questions";
			}
			if (!CheckAttribute(npchar,"ships_sur") && CheckAttribute(pchar,"ShipsSurr") && sti(pchar.ShipsSurr) >= 5)
			{
				link.l4 = "Я заставил"+ GetSexPhrase("","а") +" молить о пощаде 5 торговых кораблей.";
				link.l4.go = "Titch_ships_sur";
			}
			if (CheckAttribute(npchar,"Duel") && CheckAttribute(npchar,"Cards") && CheckAttribute(npchar,"questions") && CheckAttribute(npchar,"ships_sur") && !CheckAttribute(pchar,"Titch_seabattle"))
			{
				link.l5 = "Осталось только сражение в море. Я готов"+ GetSexPhrase("","а") +"!";
				link.l5.go = "Titch_seabattle";
			}
			link.l6 = "Пока ничего.";
			link.l6.go = "exit";
			if (bBettaTestMode)
			{
				link.l7 = "[БЕТА] Морское сражение";
				link.l7.go = "Titch_seabattle";
			}
		break;

		case "Titch_seabattle":
			Dialog.text = "Ха, я думал ты так и не доберёшься до этого пункта. Начинаем по твоему сигналу!";
			link.l1 = "Не дождёшься, старый пердун. Как доберусь до своего корабля - начнём!";
			link.l1.go = "Titch_seabattle_exit";
		break;

		case "Titch_seabattle_exit":
			DialogExit();
			Diag.CurrentNode = Diag.TempNode;
			DeleteAttribute(npchar,"AlwaysFriend");
			Group_SetEnemyToCharacter("BlackBeardGroup", GetMainCharacterIndex());
			SetCharacterRelationBoth(nMainCharacterIndex, sti(npchar.index), RELATION_ENEMY);
			Group_SetTaskAttack("BlackBeardGroup", PLAYER_GROUP);
			Group_LockTask("BlackBeardGroup");
			pchar.Titch_seabattle = true;
		break;

		case "Titch_Seabattle_won":
			Dialog.text = "Что-ж, полагаю, это конец. Ты справил" + GetSexPhrase("ся","ась") + " со всеми моими задачами. Теперь ты " + GetSexPhrase("мой преемник.","моя преемница.");
			link.l1 = "И что же будет?";
			link.l1.go = "Titch_Seabattle_won_2";
		break;

		case "Titch_Seabattle_won_2":
			Dialog.text = "Мне пора отправляться в мир иной. Этот корабль теперь твой, равно как и частица моих сил.";
			link.l1 = "Частица сил? О чём ты?";
			link.l1.go = "Titch_Seabattle_won_3";
		break;

		case "Titch_Seabattle_won_3":
			Dialog.text = "Просто назови мне одну из характеристик, не задавай глупых вопросов.";
			if (AddSPECIALValue(pchar, SPECIAL_S, 0) != SPECIAL_MAX)
			{
				Link.l1 = "Сила";
				Link.l1.go = "Strength";
			}
			if (AddSPECIALValue(pchar, SPECIAL_P, 0) != SPECIAL_MAX)
			{
				Link.l2 = "Восприятие";
				Link.l2.go = "Perception";
			}
			if (AddSPECIALValue(pchar, SPECIAL_A, 0) != SPECIAL_MAX)
			{
				Link.l3 = "Реакция";
				Link.l3.go = "Agility";
			}
			if (AddSPECIALValue(pchar, SPECIAL_C, 0) != SPECIAL_MAX)
			{
				Link.l4 = "Лидерство";
				Link.l4.go = "Charisma";
			}
			if (AddSPECIALValue(pchar, SPECIAL_I, 0) != SPECIAL_MAX)
			{
				Link.l5 = "Обучаемость";
				Link.l5.go = "Intellect";
			}
			if (AddSPECIALValue(pchar, SPECIAL_E, 0) != SPECIAL_MAX)
			{
			Link.l6 = "Выносливость";
			Link.l6.go = "Endurance";
			}
			if (AddSPECIALValue(pchar, SPECIAL_L, 0) != SPECIAL_MAX)
			{
				Link.l7 = "Удача";
				Link.l7.go = "Luck";
			}
			Link.l8 = "Меня всё и так устраивает. Что теперь?";
			Link.l8.go = "Titch_Seabattle_won_4";
		break;

		case "Strength":
			dialog.text =  "Сила, хороший выбор. Готово! Вскоре ты заметишь разницу.";
			Link.l1 = "И что теперь?";
			Link.l1.go = "Titch_Seabattle_won_4";
			AddSPECIALValue(pchar, SPECIAL_S, 1);
		break;
        case "Perception":
			dialog.text =  "Восприятие, очень хорошо. Готово! Вскоре ты заметишь разницу.";
			Link.l1 = "И что теперь?";
			Link.l1.go = "Titch_Seabattle_won_4";
			AddSPECIALValue(pchar, SPECIAL_P, 1);
		break;
        case "Endurance":
			dialog.text =  "Вынослвивость, хорошо. Готово! Вскоре ты заметишь разницу.";
			Link.l1 = "И что теперь?";
			Link.l1.go = "Titch_Seabattle_won_4";
			AddSPECIALValue(pchar, SPECIAL_E, 1);
		break;
        case "Charisma":
			dialog.text =  "Обаяние? Хм, хороший выбор. Готово! Вскоре ты заметишь разницу.";
			Link.l1 = "И что теперь?";
			Link.l1.go = "Titch_Seabattle_won_4";
			AddSPECIALValue(pchar, SPECIAL_C, 1);
		break;
        case "Intellect":
			dialog.text =  "Интеллект, хороший выбор. Готово! Вскоре ты заметишь разницу.";
			Link.l1 = "И что теперь?";
			Link.l1.go = "Titch_Seabattle_won_4";
			AddSPECIALValue(pchar, SPECIAL_I, 1);
		break;
        case "Agility":
			dialog.text =  "Ловкость, хорошо. Готово! Вскоре ты заметишь разницу.";
			Link.l1 = "И что теперь?";
			Link.l1.go = "Titch_Seabattle_won_4";
			AddSPECIALValue(pchar, SPECIAL_A, 1);
		break;
        case "Luck":
			dialog.text =  "Хочешь быть "+ GetSexPhrase("удачливым, пират","удачливой, пиратка") +"? И правильно. Готово! Вскоре ты заметишь разницу.";
			Link.l1 = "И что теперь?";
			Link.l1.go = "Titch_Seabattle_won_4";
			AddSPECIALValue(pchar, SPECIAL_L, 1);
		break;

		case "Titch_Seabattle_won_4":
			Dialog.text = "Для тебя - жизнь продолжается. А вот мне пора. Теперь - прощай навсегда! (Всё дело в том, как себя поставишь! Дурачься на потеху - убедишь лишь дураков. А будешь дьяволом - тебе покорятся все.)";
			link.l1 = "Я ничего не понял"+ GetSexPhrase("","а") +", но прощай, Эдвард Тич!";
			link.l1.go = "Titch_Seabattle_won_exit";
		break;

		case "Titch_Seabattle_won_exit":
			LAi_LocationFightDisable(loadedLocation, false);
			DeleteAttribute(NullCharacter, "capitainBase.BlackBeardNPC");
			PostEvent("csmEvent_RefreshReload", 100);
			BattleInterface.LAi_ActivateReload = true;
			SetEventHandler("Control Activation","LAi_ActivateReload",1);
			Log_SetActiveAction("Reload");
			ChangeCharacterAddress(npchar, "none", "");
            DialogExit();
			UnlockAchievement("AchTich", 3);
		break;

		case "Titch_duel":
			Dialog.text = "Хо-хо! Да ты прям "+ GetSexPhrase("морской волчара","морская львица") +"! Здесь и сейчас! Не люблю всякие расшаркивания и поклоны.";
			link.l1 = "Ну держись, старик..!";
			link.l1.go = "Titch_duel_start";
		break;

		case "Titch_duel_start":
			DialogExit();
			Diag.CurrentNode = Diag.TempNode;
			LAi_group_MoveCharacter(npchar, "EnemyFight");
			LAi_group_SetRelation("EnemyFight", LAI_GROUP_PLAYER, LAI_GROUP_ENEMY);
			LAi_LocationFightDisable(loadedLocation, false);
			AddDialogExitQuest("MainHeroFightModeOn");

			for(int i=0;i<MAX_CHARACTERS;i++)
			{
				sld = &characters[i];
				if (CheckAttribute(sld,"location") && sld.location == loadedLocation.id && sld.id != "BlackBeardNPC" && sld.id != "Blaze")
				{
					LAi_SetActorType(sld);
					LAi_ActorRunToLocation(sld, "reload", "reload1", "", "", "", "", -1);
				}
			}

			LAi_SetCheckMinHP(npchar, 5.0, true, "Titch_duel");
		break;

		case "DuelWon":
			Dialog.text = "Сил"+ GetSexPhrase("ён","на") +"! Уважил"+ GetSexPhrase("","а") +" старика, молодец.";
			link.l1 = "Скажу честно - это было непросто, (вот же старый, честная дуэль, честь... да-да...). Что дальше?";
			link.l1.go = "Titch_7";
			npchar.Duel = true;
			DeleteAttribute(npchar,"chr_ai.poison");
			DeleteAttribute(npchar,"chr_ai.Blooding");
			LAi_SetImmortal(npchar,false);
			LAi_SetCitizenType(npchar);
		break;

		case "Titch_cards":
			Dialog.text = "В карты? Учти, ставка - 50000 пиастров и не меньше. Так что если у тебя карманы просохли, иди гуляй. Меньше чем с 500000 даже не рыпайся. Ну, готов"+ GetSexPhrase("","а") +"?";
			if (sti(pchar.money) >= 500000)
			{
				link.l1 = "Готов"+ GetSexPhrase("","а") +" ли я? Что за глупый вопрос, конечно!";
				link.l1.go = "Titch_cards_go";
			}
			link.l2 = "Попозже.";
			link.l2.go = "exit";
		break;

		case "Titch_cards_go":
			npchar.money = 1000000;
			pchar.GenQuest.Cards.npcharIdx = npchar.index;
            pchar.GenQuest.Cards.iRate     = 50000;
            pchar.GenQuest.Cards.SitType   = false;
            Diag.CurrentNode = Diag.TempNode;
			DialogExit();
            LaunchCardsGame();
		break;

		case "Titch_questions":
			npchar.coolstories = "чарльстон";
			npchar.questionsstate = 1;
			Dialog.text = "Ну ладно, слушай же. Раз уж ты копал"+ GetSexPhrase("","а") +" под меня и смог"+ GetSexPhrase("","ла") +" разыскать, то ты наверняка знаешь о моём самом крупном деле. Какой город я осадил и заставил выплатить мне круглую сумму?";
			Link.l1.edit = 1;
			Link.l1 = "";
			Link.l1.go = "Titch_check";
			link.l2 = "Попозже.";
			link.l2.go = "exit";
		break;
		case "Titch_check":
			if (npchar.questionsstate == 1)
			{
				bool check1 = false;
				for(int x=0;x<=5;x++)
				{
					if (coolstory1[x] == GetStrSmallRegister(dialogEditStrings[1])) check1 = true;
				}
				if (check1)
				{
					npchar.coolstories = "хорниголд";
					npchar.questionsstate = 2;
					Dialog.text = "Верно! Отличная осведомлённость, уважаю. Слушай следующий вопрос! (Я только хочу, чтобы меня помнили...)";
					Link.l1 = "Давай.";
					Link.l1.go = "Titch_q2";
					break;
				}
			}
			if (npchar.questionsstate == 2)
			{
				bool check2 = false;
				for(int y=0;y<=3;y++)
				{
					if (coolstory2[y] == GetStrSmallRegister(dialogEditStrings[1])) check2 = true;
				}
				if (check2)
				{
					npchar.coolstories = "конкорд";
					npchar.questionsstate = 3;
					Dialog.text = "Браво! Ты мне начинаешь нравиться своей харизмой. А вот и последний вопрос.";
					Link.l1 = "И?";
					Link.l1.go = "Titch_q3";
					break;
				}
			}
			if (npchar.questionsstate == 3 && npchar.coolstories == GetStrSmallRegister(dialogEditStrings[1]))
			{
				Dialog.text = "Потрясающе, ты и до этого докопал"+ GetSexPhrase("ся","ась") +"! Больше вопросов к тебе не имею.";
				Link.l1 = "Отлично!";
				Link.l1.go = "Titch_7";
				npchar.questions = true;
				break;
			}
			else
			{
				Dialog.text = "Неверно, попробуй ещё.";
				if (npchar.questionsstate == 1)
				{
					Link.l1 = "Ещё раз.";
					Link.l1.go = "Titch_questions";
				}
				if (npchar.questionsstate == 2)
				{
					Link.l1 = "Ещё раз.";
					Link.l1.go = "Titch_q2";
				}
				if (npchar.questionsstate == 3)
				{
					Link.l1 = "Ещё раз.";
					Link.l1.go = "Titch_q3";
				}
				link.l2 = "Попозже.";
				link.l2.go = "exit";
			}
		break;
		case "Titch_q2":
			Dialog.text = "Под чьей командой я плавал до тех пор, пока не стал известен, как Чёрная Борода?";
			Link.l1.edit = 1;
			Link.l1 = "";
			Link.l1.go = "Titch_check";
			link.l2 = "Попозже.";
			link.l2.go = "exit";
		break;
		case "Titch_q3":
			Dialog.text = "Какое название носил корабль ''Месть Королевы Анны'' прежде?";
			Link.l1.edit = 1;
			Link.l1 = "";
			Link.l1.go = "Titch_check";
			link.l2 = "Попозже.";
			link.l2.go = "exit";
		break;

		case "Titch_ships_sur":
			Dialog.text = "Это хорошо! Архипелаг ещё сможет содрогнуться. (Напугай свою жертву, создай жуткий образ из лихорадочного бреда, и все рухнут на колени, моля своего Бога о пощаде.)";
			Link.l1 = "Благодарю!";
			Link.l1.go = "Titch_7";
			npchar.ships_sur = true;
			DeleteAttribute(pchar, "ShipsSurr");
		break;
	}
}

string GetNumShips(int ship)
{
    string numships;
    switch(ship)
    {
       case 0: numships = "ни одного корабля"; break;
       case 1: numships = "один корабль";      break;
       case 2: numships = "два корабля";       break;
       case 3: numships = "три корабля";       break;
       case 4: numships = "четыре корабля";    break;
       case 5: numships = "пять кораблей";     break;
       case 6: numships = "шесть кораблей";    break;
    }
    return numships;
}

string GetPart(int part)
{
    string numpart;
    switch(part)
    {
       case 0: numpart = ""; break;
       case 1: numpart = "всю добычу"; break;
       case 2: numpart = "половину добычи"; break;
       case 3: numpart = "треть добычи"; break;
       case 4: numpart = "четверть добычи";      break;

    }
    return numpart;
}

int findPriceStoreMan(ref NPChar)
{
    ref ch;
	int n;
    int storeArray[40];
    int howStore = 0;

	for(n=0; n<MAX_CHARACTERS; n++)
	{
		makeref(ch,Characters[n]);
		if (CheckAttribute(ch, "Dialog.Filename") && ch.Dialog.Filename == "Common_Store.c") // магазин
		{
            //if (sti(ch.nation) !=  sti(NPChar.nation)) continue;
            if (ch.location == "none") continue;
			if (ch.City == "Caiman") continue;			// фикс для новых, невидимых до поры островов
            storeArray[howStore] = n;
            howStore++;

            // homo 05/09/06
            if ( CheckAttribute(NPChar, "FromColony") && NPChar.FromColony == ch.City ) return n;
            //
		}
    }
    if (howStore == 0)
    {
        return -1;
    }
    else
    {
        return storeArray[rand(howStore-1)];
    }
}
