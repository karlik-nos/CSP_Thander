#include "DIALOGS\russian\Common_Duel.c"

#define MAX_PGGW_STORIES 		9
#define MAX_PGGW_QUEST_STORIES 	3
#define MAX_PGGW_MEET_REP 		5

string PGG_Stories[MAX_PGGW_STORIES] = {
"... только я и дьявол знаем это место, и последний, кто останется в живых, заберёт себе все!..\n",
"... а Мейнард ответил: 'Я не жду от тебя пощады, и ты тоже не дождёшься её от меня'.\n",
"... однажды в море, будучи немного пьяным, он предложил: 'Давайте здесь сейчас устроим себе сами ад и посмотрим, кто дольше выдержит'.\n",
"... А вот презабавная история, которая случилась с моим давним приятелем в Портобэлло. Идём как-то мы вечерними улицами от порта к горячему кварталу. Я на фоке, а спутник мой уже и грот-марсель взял на риф, тут навстречу нам пара бригантин. Что регели, что транец – всё при них. И как только мы поравнялись бортами, мой приятель как даст из двух бортов! Ха-ха-ха-ха...\n",
"... Нет, джентльмены, это всё анекдоты… А вот история, которой я собственнолично был не только свидетель, а в некотором роде и участник. Направляюсь как-то в таверну Чарльстауна прямёхонько из дока, где наблюдал кренгование своего старого 'Кондора', а навстречу мне из двери таверны вываливается сам капитан Шарп! Штормит его нещадно, бизань уже сорвало напрочь, и только блиндом он пытается маневрировать по ступеням. Не успел я предложить ему услуги лоцмана, как перила под ним–хрясть!!! Хо-хо-хо-хо...\n",
"... Ничего не могу сказать о Летучем Голландце. Ни мне, ни кому-либо из моих матросов видеть его, слава Богу, не доводилось… Но был случай не менее загадочный. К востоку от Бермуды встретилась нам бригантина под всеми парусами, но шла она странным курсом – эдакими зигзагами. Я ничего такого не замышлял, но шлюпку выслал. Каково же было наше удивление, когда на борту не оказалось ни единой души!.. А в трюме – 1700 баррелей отличного вина!.. Вот что я называю удачей! И без единого выстрела! Ха-ха-ха..\n",
"... Всё же я склонен думать, джентльмены, что все эти россказни о Летучем Голландце не более чем досужие выдумки трусливых торгашей, которые в каждом парусе на горизонте готовы видеть кровожадного капера с пьяным чудовищем на капитанском мостике, а в каждом встреченном люггере – предвестника несчастий...\n",
"... Может быть кто помнит тот случай южнее Ки-Уэста, когда меня бимсом контузило?.. Хотя видимых повреждений и не было, – провалялся я месяца два. И тогдашняя моя пассия уговорила меня исповедаться. Мол, с Божьей помощью дело на лад пойдёт... Ну, пошёл я, а священник и спрашивает: 'А много ли ты людей погубил, сын мой? А много ли кораблей потопил?' – 'Мно-ого', – отвечаю. А он не унимается: 'А много ли ты жён соблазнил?'. Тут я и говорю: 'Падре, я же сюда не хвастаться пришёл!'. Ха-ха-ха-ха...\n",
"... Ха-ха-ха!.. А вот в Сантакрузе был случай во время швартовки. С криком 'Полундра!' кидает мой матрос выбраску и попадает местному зеваке прямёхонько в лоб! Тот – брык! – и падает без чувств. Матрос испугался, не дожидаясь трапа прыгает на пирс и давай отливать бедолагу водой из ендовы. Наконец тот приходит в себя и говорит матросу: - Когда бросаешь полундру, кричать нужно 'Па-берегись!'. Ах-ха-ха ..."
};

string PGG_QuestStories[MAX_PGGW_QUEST_STORIES] = {
"...Как-то застряли мы во Флориде - пережидали штиль. Когда в таверне закончились запасы рома, угораздило нас завалиться в бордель. И будучи под рифом, я, видать, сболтнул одной из девок про золотишко, что припрятал на чёрный день. Так представьте - когда через месяц я наведался в свой тайник, он был пуст, как голова с похмелья! Укуси меня сардина, если эта языкатая бестия не выболтала о моей заначке первому же проходимцу. Так что веры женщинам у меня ни на пол песо нет!..\nА вот к нашему столу пожаловал бывалый повеса. Он уж наверняка имеет к девицам особый подход. Или я не прав? укуси меня сардина, ха-ха-ха!..",
"...Уж не знаю, как сам 'Летучий Голландец', но корабль с призраками я видел своими глазами, как сейчас вижу вас, джентльмены!.. Чёртов фрегат, чёрный как ночь, вылетел из тумана и пошёл на абордаж без единого выстрела! Признаться, я изрядно струхнул, но мы увернулись левым галсом и только приготовились дать залп картечью, как он исчез, так же внезапно, как и появился! Он летел по волнам словно птица! Я лишь название успел рассмотреть на транце - 'Королева'... И разрази меня гром - на палубе и вантах этой посудины было полно живых мертвяков...\nВот такая вот дьявольщина... А кто бы не струхнул? Вдруг за штурвалом там стоял сам Морской Дьявол? хо-хо-хо!.. Рому всем!",
"...а он так с издёвкой ей и говорит: 'Пойдём, мол, наверх. Прежде, чем принимать в команду, надо бы проверить что ты умеешь, как офицер'. А девка эта выхватила тесак чуть не с неё размером и говорит: 'Сначала проверим, годитесь ли вы мне в капитаны!' Ха-ха-ха... Она гоняла его, как акула треску по всей таверне, и было бы это очень смешно, джентльмены, не прикончи она того бедолагу прямо посреди зала на глазах у всех. Упокой Господь его душу... Да только я с тех пор на Бермудах гляжу в оба, вдруг она ещё там обретается!\nХо, поприветствуем достойного капитана, который наверняка бы нашёл способ поладить с этой фурией! Ах-ха-ха-ха..."
}

string PGG_Meet_GoodRep[MAX_PGGW_MEET_REP] = {
"Редко встретишь порядочного капитана в этих морях.",
"Благородство не в моде в наше время.",
"А вот и честный капитан, не чета вам, головорезы! Хе-хе!",
"Джентльмены, у нашего столика достойный капитан, который бывал ещё не в таких переделках. О чём поведаете, уважаемый?",
"А вот и ещё один славный корсар, который не привык искать лёгких путей...",
};

string PGG_Meet_BadRep[MAX_PGGW_MEET_REP] = {
"А вот и ещё один пират!",
"Джентльмены, у нашего стола джентльмен удачи, я полагаю.",
"Запахло порохом и кровью, флибустьер справа по борту!",
"О-о джентльмены, а вот и бывалый корсар, у которого наверняка есть что порассказать в дружной компании за кружкой рома... Не желаете присоединиться?",
"Чувствую, запахло порохом… Джентльмены, к нам присоединился ещё один славный корсар, которому уж наверняка будет что порассказать на исповеди. Ха-ха-ха",
};

void ProcessDialogEvent()
{
	int i, n;
	int iRnd = -1;
	bool bOk;
   	float locx, locy, locz;
	string sTmp, sLoc;
	ref NPChar, sld;
	aref link, NextDiag;

	DeleteAttribute(&Dialog,"Links");

	makeref(NPChar,CharacterRef);
	makearef(link, Dialog.Links);
	makearef(NextDiag, NPChar.Dialog);

    ProcessDuelDialog(NPChar, link, NextDiag);

	if (Dialog.CurrentNode == "First time" && CheckAttribute(NPChar, "meeting")) Dialog.CurrentNode = "Second time";

	switch(Dialog.CurrentNode)
	{

	case "Enemy_town":
	Dialog.text = "Хм... Я конечно, сорвиголова, но так рисковать.... Ну уж нет, я пойду своей дорогой...";
	link.l1 = RandPhraseSimple("Эх... Да и ладно...", "Всего хорошего.");
	link.l1.go = "Exit";
	break;

	case "First time":
		if (!CheckAttribute(pchar, "questTemp.DuelTimer"))
		{//Запускаем счётчик для отката
			pchar.questTemp.DuelTimer = true;
			SaveCurrentQuestDateParam("pchar.questTemp.DuelCooldown");
		}
		if (CheckAttribute(NPChar, "PGGAi.location.town.back") && CheckAttribute(pchar, "questTemp.PGGContra.Know"))
		{
			Dialog.text = "Слушай, проваливай отсюда! Сорвёшь мне дело, и я тебе зенки поганые выдавлю!";
			link.l1 = RandPhraseSimple("Ты смеешь мне угрожать, тварь?", "Да я тебя сейчас на ремни нарежу, сука!");
			link.l1.go = "Exit_Smugglers_Fight";
			link.l2 = "Да ладно, я знаю, что такое бизнес. Всего хорошего.";
			link.l2.go = "Exit";
			break;
		}

		Dialog.Text = LinkRandPhrase("... Разрази меня гром!.. ",
			 "... Укуси меня змея!.. ",
			 "... Держите меня семеро!.. ") +
			 PCharRepPhrase(LinkRandPhrase(" А вот и ещё од" + GetSexPhrase("ин баловень Фортуны","на морская волчица") + "!",
					" " + GetSexPhrase("Очередной джентльмен удачи","Очередная покорительница морей") + ", я полагаю.",
					" Запахло порохом и кровью справа по борту!"),
				LinkRandPhrase(" Редко встретишь порядочного капитана в этих местах.",
					" Чёрт возьми, благородство нынче не в моде.",
					" А вот и героическая личность, уже наслышана о вас!"));
		if (sti(pchar.Ship.Type) != SHIP_NOTUSED)
		{
		link.l1 = PCharRepPhrase(RandSwear() + RandPhraseSimple("Я капитан " + GetFullName(pchar) + ".",
					"Я капитан посудины '" + PChar.Ship.Name + "' и пары сотен отчаянных сукиных детей! Хе-хе! Моё имя " + GetFullName(pchar) + "."),
				RandPhraseSimple("Позвольте представиться. Я капитан " + GetFullName(pchar) + ".",
					"Не имел" + GetSexPhrase("","а") + " чести быть вам представленн" + GetSexPhrase("ым","ой") + ". Я капитан корабля '" + PChar.Ship.Name + "' под флагом " + NationNameGenitive(sti(PChar.nation)) + ". Моё имя " + GetFullName(pchar) + "."));
		}
		else
		{
		link.l1 = "А меня " + GetFullName(pchar) + ".";
		}
		link.l1.go = "Meeting";
		break;

	case "Meeting":
		Dialog.Text = "Ну, а меня здесь многие знают! Я " + GetFullName(NPChar) + ". Приятно познакомиться, чем могу быть вам полезна?";
		link.l1 = RandPhraseSimple("Есть одно дельце!", "У меня к тебе разговор...");
		link.l1.go = "quest";
		if(!CheckAttribute(pchar, "PGG_hired"))
		{
			if (sti(pchar.Ship.Type) != SHIP_NOTUSED && sti(NPChar.Ship.Type) != SHIP_NOTUSED)
			{
				sld = GetRealShip(sti(NPChar.Ship.Type));

				Dialog.Text = "Ну, а меня здесь многие знают! Я - " + GetFullName(NPChar) + ", капитан " + xiStr(sld.BaseName + "Gen") + " " + NPChar.Ship.Name + ".";
				link.l2 = "Я тут подумал" + GetSexPhrase("","а") + ", не хочешь ко мне присоединиться? С двумя кораблями мы сможем хорошие дела провернуть.";
				link.l2.go = "companion";
			}
			if (sti(NPChar.Ship.Type) == SHIP_NOTUSED)
			{
				link.l3 = RandPhraseSimple("Не хочешь пойти офицером ко мне на корабль?", "Мне бы не помешал такой офицер как ты. Что скажешь?");
				link.l3.go = "officer";
			}
		}
		if (bBettaTestMode)
		{
			link.l7 = "(Бетта-Тест) Квесты.";
			link.l7.go = "BT_Quest";
			link.l8 = "(Бетта-Тест) Дуэли.";
			link.l8.go = "outraged";
		}
		link.l9 = "Ничего.";
		link.l9.go = "exit";
		NextDiag.TempNode = "Second time";
		NPChar.meeting = true;
		break;

	case "Second time":
		if (CheckAttribute(NPChar, "PGGAi.location.town.back") && CheckAttribute(pchar, "questTemp.PGGContra.Know"))
		{
			Dialog.text = "Слушай, проваливай отсюда! Сорвёшь мне сделку, и я тебе зенки поганые выдавлю!";
			link.l1 = RandPhraseSimple("Ты смеешь угрожать мне, сучка?", "Да я твою шкуру на барабан натяну!");
			link.l1.go = "Exit_Smugglers_Fight";
			link.l2 = "Да ладно, я знаю, что такое бизнес. Удачи.";
			link.l2.go = "Exit";
			break;
		}

		Dialog.text = RandPhraseSimple("Что тебе надо " + GetFullName(pchar) + "?", "А, это ты... Гуляй мимо, я не в настроении...");
		link.l1 = RandPhraseSimple("Как на счёт дельца?", "У меня к тебе разговор...");
		link.l1.go = "quest";

		link.lgame = "Не хочешь развеяться?";
		link.lgame.go = "Play_Game";

		if (PGG_ChangeRelation2MainCharacter(NPChar, 0) > 49)
		{
			Dialog.Text = LinkRandPhrase("... Кошки впились в борт нам! По местам стоять! И морскому дьяволу тут не устоять!..",
				 "... В правой руке сабля! В левой - пистолет! Вместе мы отправим сотни на тот свет!..",
				 "... Нас припёрли к мачте! Дыму - как в аду! Лучше сдохнуть в схватке, чем висеть в порту!") +
				 PCharRepPhrase(LinkRandPhrase(" Редко встретишь порядочного капитана в этих местах.",
						" Чёрт возьми, благородство нынче не в моде. Что вам угодно?",
						" А вот и честный капитан, не то что мы, темнота! Хи-хи!") + " Какие вести?",
					LinkRandPhrase(" А вот и странствующ" + GetSexPhrase("ий покоритель морей!","ая морская волчица!") + " Хотели что-то спросить?",
						" Лопни мои глаза! Известн" + GetSexPhrase("ый укротитель штормов","ая покорительница морских просторов") + "!",
						" Что-то запахло потом и кровью прямо по курсу!") + " Как ваши дела, капитан?");
			if (sti(pchar.Ship.Type) != SHIP_NOTUSED && sti(NPChar.Ship.Type) != SHIP_NOTUSED)
			{
				link.l2 = RandPhraseSimple("Не желаешь ко мне присоединиться? С двумя кораблями мы сможем славные дела провернуть.", "Слушай, ты выглядишь опытным капитаном. Не хочешь плавать под моим началом?");
				link.l2.go = "companion";
			}
			if (sti(NPChar.Ship.Type) == SHIP_NOTUSED)
			{
				Dialog.Text = RandPhraseSimple("Горе у меня, понимаешь? Горе... Мой корабль утонул к китам-касаткам!", "Кого я вижу?! Каким ветром занесло в наши края? А я вот, капитан, теперь без корабля...");
				link.l3 = RandPhraseSimple("Жаль... Ну.., может тебе ещё повезет.", "Вот так дела... Ну прощай, мне пора.");
				link.l3.go = "exit";
				if (FindFreeRandomOfficer() > 0)
				{
					link.l3 = RandPhraseSimple("Не хочешь пойти офицером ко мне на корабль?", "Пожалуй, такая красотка, как ты, мне бы не помешала. Офицером пойдёшь?");
					link.l3.go = "officer";
				}
			}


		}

		if (GetQuestPastDayParam("pchar.questTemp.DuelCooldown") >= 3 || bBettaTestMode)
		{
			if (sti(pchar.reputation < 15) && PGG_ChangeRelation2MainCharacter(NPChar, 0) < 51 && !CheckAttribute(NPChar, "PGGAi.Task.SetSail"))
			{
				link.l8 = link.l8 = PCharRepPhrase("Эта таверна слишком тесна для нас двоих. Я хочу, что бы ты исчезла.", "Если бы ты знала с кем говоришь, по другому запела бы, портовая шалава.");
				link.l8.go = "outraged";
			}
		}
		link.l9 = "Ничего.";
		link.l9.go = "exit";
		NextDiag.TempNode = "Second time";
		break;

//==================================================
// Officer
//==================================================
	case "officer":
		//раз в день.
		if (CheckAttribute(NPChar, "Officer_Talk") && GetNpcQuestPastDayParam(NPChar, "Officer_Talk") < 1 && !bPGGLogShow && !CheckAttribute(npchar, "HiringMoneyPaid"))
		{
			Dialog.Text = RandPhraseSimple("Я тебе уже говорила, по-моему, мне это не интересно.", "Мне казалось, мы все обсудили уже.");
			link.l1 = RandPhraseSimple("Как я мог" + GetSexPhrase("","ла") + " забыть?!", "А и правда. Ну, бывай.");
			link.l1.go = "exit";
			break;
		}
		//если уже был офицером, то посылает нафиг.
		if (CheckAttribute(NPChar, "PGGAi.Officer"))
		{
			Dialog.Text = RandPhraseSimple("Хм... пожалуй, нет. Второй раз не хочу.", "И ты думаешь, я клюну на эту удочку дважды?!!");
			link.l1 = RandPhraseSimple("Как хочешь...", "Ну.., береги себя.");
			link.l1.go = "exit";
			break;
		}
		//если отношение ниже 70, то в 70 процентов случаев откажет...
		if (PGG_ChangeRelation2MainCharacter(NPChar, 0) < 70 && drand(100) < 70)
		{
			Dialog.Text = RandPhraseSimple("Хм.. пожалуй, нет... ", "Нет, это не по мне! Я не хочу быть офицером!");
			link.l1 = RandPhraseSimple("Как хочешь...", "Что ж, попутного ветра.");
			link.l1.go = "exit";
			npchar.HiringMoney = sti(npchar.rank)*50000;
			link.l2 = "Тогда я сделаю предложение, от которого ты уже не сможешь отказаться. "+ npchar.HiringMoney+ " пиастров.";
			link.l2.go = "officer_pay";
			SaveCurrentNpcQuestDateParam(NPChar, "Officer_Talk");
			break;
		}
		//Проверка на ПИРАТЕС, не было! :) //navy 04.04.07
		if (FindFreeRandomOfficer() < 1)
		{
			Dialog.Text = RandPhraseSimple("Да у тебя и так полный комплект.", "У тебя своих полно, куда я упаду?");
			link.l1 = RandPhraseSimple("Чёрт!.. И то правда.", "А и правда...");
			link.l1.go = "exit";
			break;
		}
		if (!CheckAttribute(NPChar, "Quest.Officer.Price"))
		{
			NPChar.Quest.Officer.Price = 10000 + sti(NPChar.rank)*500*MOD_SKILL_ENEMY_RATE - MakeInt(GetSummonSkillFromNameToOld(pchar, SKILL_COMMERCE)*1000);
		}
		Dialog.Text = NPCharRepPhrase(NPChar, RandSwear() +
				RandPhraseSimple("Каррамба! Я не прочь погеройствовать! Одна проблемка, мне нужно " + NPChar.Quest.Officer.Price + " пиастров, чтобы расплатиться с долгами.",
								"Ты кажешься мне не бедн" + GetSexPhrase("ым человеком","ой женщиной") + ". И если не прочь заплатить мне " + NPChar.Quest.Officer.Price + " пиастров, то, пожалуй, мы сработаемся."),
				LinkRandPhrase("Ваше предложение весьма лестно для меня. Я согласна за весьма умеренную плату в размере " + NPChar.Quest.Officer.Price + " пиастров.",
							"Хм... Вы выглядите бывалым капитаном. Возможно, мне стоит принять предложение, если вы согласны заплатить мне " + NPChar.Quest.Officer.Price + " пиастров.",
							"Думаю, мы сработаемся, капитан. Всего " + NPChar.Quest.Officer.Price + " пиастров и я в вашем распоряжении."));

		MakeRandomLinkOrderTwo(link, PCharRepPhrase(RandSwear() + RandPhraseSimple("Меня это устраивает. Но, надеюсь, ты не каждый день будешь требовать столько.", "Это чертовски дорого, но, думаю, ты того стоишь."),
				LinkRandPhrase("Отлично! Считай себя зачисленной в команду.", "Хм... Пожалуй, я заплачу тебе.", "Похоже, ты стоишь этих денег. Держи!")), "officer_hired",
									PCharRepPhrase(RandSwear() + RandPhraseSimple("Ты не стоишь столько. Держи нос по ветру...", "Это чертовски дорого, я не готов" + GetSexPhrase("","а") + " к таким тратам."),
				LinkRandPhrase("Да... жадность не порок...", "Ты смеёшься надо мной? За такие деньги я могу купить десяток таких, как ты.", "Это грабеж... Слишком дорого.")), "exit");
		link.l3 = "Хм... а что ты представляешь из себя?";
		link.l3.go = "Exit_ShowParam";
		break;

	case "officer_hired":
		if (!CheckAttribute(npchar, "HiringMoneyPaid") && sti(pchar.money) < sti(NPChar.Quest.Officer.Price))
		{
			Dialog.Text = "Похоже, у вас проблемы с наличностью, капитан.";
			link.l1 = "Ах... действительно.";
			link.l1.go = "exit";
			break;
		}
		Restore_PGG(npchar);
		pchar.questTemp.HiringOfficerIDX = NPChar.index;
		if (NPChar.model.animation == "man" || NPChar.model.animation == "YokoDias" || NPChar.model.animation == "Milenace") Npchar.CanTakeMushket = true;
		if(npchar.model == "PGG_Whisper_6") EquipCharacterByItem(NPChar, "suit_1");
		if (!CheckAttribute(npchar, "HiringMoneyPaid")) AddMoneyToCharacter(pchar, -(makeint(NPChar.Quest.Officer.Price)));
		AddDialogExitQuestFunction("PGG_BecomeHiredOfficer");
		NPChar.loyality = MakeInt(PGG_ChangeRelation2MainCharacter(NPChar, 0)*0.3);
		NPChar.greeting = "Gr_Danielle";
		DeleteAttribute(NPChar, "Quest.Officer");
		DeleteAttribute(NPChar, "PGGAi.Task");
		DeleteAttribute(NPChar, "PGGAi.LockService");

		Dialog.Text = RandPhraseSimple("Отлично!", "Я не сомневалась в вас, капитан.");
		link.l1 = "Не опаздывай к отплытию.";
		link.l1.go = "exit";
		break;

//==================================================
// Companion
//==================================================
	case "companion":
		Dialog.Text = "Если вы читаете это, значит, вы поймали баг ;) Сообщите об этом какому-то мутному типу по имени Нави, подробно, и... :)";
		link.l1 = "Да ну его нахер к такой-то матери!!!!";
		link.l1.go = "exit";
		//раз в день.
		if (CheckAttribute(NPChar, "Companion_Talk") && GetNpcQuestPastDayParam(NPChar, "Companion_Talk") < 1 && !bPGGLogShow && !CheckAttribute(npchar, "HiringMoneyPaid"))
		{
			Dialog.Text = RandPhraseSimple("Я тебе уже говорила, мне неинтересно.", "Мне казалось, мы все обсудили.");
			link.l1 = RandPhraseSimple("И правда. Как я мог" + GetSexPhrase("","ла") + " забыть?!", "И правда. Ну, бывай.");
			link.l1.go = "exit";
			break;
		}
		//разница в один класс.. нефиг халявить
		//GetCharacterShipClass(NPChar) < GetCharacterShipClass(PChar)-1 ||
		if (GetCharacterShipClass(PChar) >= 6)
		{
			Dialog.Text = RandPhraseSimple("Плавать с тобой!?? Подрасти сначала!", "Не думаю, что мне это интересно!");
			link.l1 = RandPhraseSimple("Ну, как хочешь...", "Что ж, счастливо оставаться.");
			link.l1.go = "exit";
			SaveCurrentNpcQuestDateParam(NPChar, "Companion_Talk");
			break;
		}
		//если отношение ниже 70, то в 100 процентов случаев откажет...
		if (PGG_ChangeRelation2MainCharacter(NPChar, 0) < 70)
		{
			Dialog.Text = RandPhraseSimple("Хм.. пожалуй, нет... Я тебя совсем не знаю. Для начала нам стоит как-нибудь вместе на дельце сходить.", "Нет, спасибо. Как нибудь сама. Да и я тебя совсем не знаю. Нам стоит как-нибудь вместе на дельце сходить, прежде чем такие предложения друг другу делать.");
			link.l1 = RandPhraseSimple("Ну, как хочешь...", "Что ж, береги себя.");
			link.l1.go = "exit";
			npchar.HiringMoney = sti(npchar.rank)*100000;
			link.l2 = "Тогда я сделаю предложение, от которого ты уже не сможешь отказаться. "+ npchar.HiringMoney+ " пиастров.";
			link.l2.go = "companion_pay";
			SaveCurrentNpcQuestDateParam(NPChar, "Companion_Talk");
			break;
		}
		//есть ли место для компаньона.
		if (SetCompanionIndex(pchar, -1, sti(NPChar.index)) != -1)
		{
			Dialog.Text = NPCharRepPhrase(NPChar, RandSwear() +
					RandPhraseSimple("Заманчивое предложение! Хорошо! Я составлю компанию!", "А ты не промах, капитан... Думаю, мы сработаемся!"),
					LinkRandPhrase("Ваше предложение мне нравится. Я согласна.",
					"Чтож... Я тоже думаю, что вместе мы сможем больше!", "Пожалуй, это будет весело. Договорились."));
			link.l1 = RandPhraseSimple("Отлично, жду тебя в море!", "Вот и правильно! Мы будем отличной командой.");
			link.l1.go = "exit";
			Restore_PGG(npchar);
			if (CheckAttribute(NPChar, "PGGAi.Task.SetSail"))
			{
				PGG_Disband_Fleet(npchar);
			}

			NPChar.PGGAi.IsPGG = false;
			NPChar.PGGAi.location.town = "none";
			NPChar.Dialog.TempNode = "hired";
			NPChar.Dialog.FileName = "Enc_Officer_dialog.c";
			if (NPChar.model.animation == "man" || NPChar.model.animation == "YokoDias" || NPChar.model.animation == "Milenace") Npchar.CanTakeMushket = true;
			if(npchar.model == "PGG_Whisper_6") EquipCharacterByItem(NPChar, "suit_1");
            NPChar.Payment = true;
            NPChar.Money   = 0;
            SetBaseShipData(NPChar);
            DeleteAttribute(NPChar,"ship.sails");
			DeleteAttribute(NPChar,"ship.masts");
			DeleteAttribute(NPChar,"ship.blots");

			Fantom_SetCannons(NPChar, "pirate");
			Fantom_SetBalls(NPChar, "pirate");

			DeleteAttribute(NPChar, "PGGAi.Task");
			DeleteAttribute(NPChar, "PGGAi.LockService");
			SetCharacterRemovable(NPChar, true);
			SaveCurrentNpcQuestDateParam(NPChar, "Companion.CheckRelation");
			LAi_SetImmortal(NPChar, false);
		}
		else
		{
			Dialog.Text = RandPhraseSimple("Похоже у тебя уже достаточно компаньонов.", "У тебя и так много кораблей. Зачем тебе ещё один?");
			link.l1 = "Да... Кажется ты права.";
			link.l1.go = "exit";
		}
		break;

	case "companion_pay":
		if (sti(pchar.money) >= sti(npchar.HiringMoney))
		{
			if (CheckCompanionIndex(pchar, -1, sti(NPChar.index)) != -1)
			{
				Dialog.Text = RandSwear() + " И правда не могу."
				PGG_ChangeRelation2MainCharacter(NPChar, 100);
				AddMoneyToCharacter(pchar, -sti(npchar.HiringMoney));
				npchar.HiringMoneyPaid = true;
				link.l1 = "Вот твои деньги.";
				link.l1.go = "companion";
			}
			else
			{
				Dialog.Text = RandPhraseSimple("Похоже, тебе уже достаточно компаньонов.", "У тебя и так много кораблей. Зачем тебе ещё один?");
				link.l1 = "Да... Может ты и прав.";
				link.l1.go = "exit";
			}
		}
		else
		{
			Dialog.Text = RandSwear() + " Это была шутка? У тебя же в карманах ветер свищет!"
			link.l1 = "И правда... Пойду я.";
			link.l1.go = "exit";
		}
	break;

	case "officer_pay":
		if (sti(pchar.money) >= sti(npchar.HiringMoney))
		{
			Dialog.Text = RandSwear() + " И правда не могу."
			PGG_ChangeRelation2MainCharacter(NPChar, 100);
			AddMoneyToCharacter(pchar, -sti(npchar.HiringMoney));
			npchar.HiringMoneyPaid = true;
			link.l1 = "Вот твои деньги.";
			link.l1.go = "officer_hired";
		}
		else
		{
			Dialog.Text = RandSwear() + " Это была шутка? У тебя же в карманах ветер свищет!"
			link.l1 = "И правда... Пойду я.";
			link.l1.go = "exit";
		}
	break;

	case "companion_leave":
		Dialog.Text = RandSwear() + " " + NPCharRepPhrase(NPChar,
					RandPhraseSimple("Разорви тебя акула!!! Я выхожу из состава эскадры!", "Моё терпенье лопнуло! Я ухожу."),
					RandPhraseSimple("С меня достаточно, 'адмирал'!... Я иду своим курсом!", "С меня хватит! Я выхожу из состава эскадры."));
		link.l1 = PCharRepPhrase(RandPhraseSimple("Ну и проваливай отсюда, дешёвка!", "Можешь катиться ко всем чертям, шмара каютная!"),
					RandPhraseSimple("Что ж, держать не буду.", "Попутного ветра тебе в корму!"));
		link.l1.go = "Exit_Companion_Leave";
		link.l2 = PCharRepPhrase(RandPhraseSimple("Э... как на счёт небольшой премии?", "Каррамба!!! Может, останешься? Я готов" + GetSexPhrase("","а") + " выплатить премию твоей команде!"),
					RandPhraseSimple("Очень жаль... Может, небольшое вознаграждение решит наши разногласия?", "Как на счёт прибавки к жалованию?"));
		link.l2.go = "companion_stay";
		break;

	case "companion_stay":
		if (CheckAttribute(NPChar, "Quest.Companion"))
		{
			Dialog.Text = RandPhraseSimple("Хватит с меня одного раза. Я больше не верю в твои обещания!", "Никакими деньгами меня не соблазнишь. Моё решение окончательно!");
			link.l1 = RandPhraseSimple("Ну что ж, тогда всех благ.", "Тогда проваливай, и чтобы я тебя больше не видел" + GetSexPhrase("","а") + "!");
			link.l1.go = "Exit_Companion_Leave";
			break;
		}
		NPChar.Quest.Companion.Price = 2*GetSalaryForShip(NPChar);
		Dialog.Text = RandSwear() + " " + NPCharRepPhrase(NPChar,
					RandPhraseSimple("Премия? Отлично! Сумма в " + NPChar.Quest.Companion.Price + " пиастров, меня устроит.",
						"Пожалуй, если ты выплатишь моей команде " + NPChar.Quest.Companion.Price + " пиастров, я уговорю их остаться."),
					RandPhraseSimple("Хорошо! Я готова остаться за скромную премию в размере " + NPChar.Quest.Companion.Price + " пиастров!",
						NPChar.Quest.Companion.Price + " пиастров устроят на некоторое время меня и мою команду."));
		link.l1 = PCharRepPhrase(RandPhraseSimple("Да ты смеёшься надо мной! А ну проваливай ко всем чертям!", "Ха... Раскатала губёнки! Уноси-ка отсюда свой устричный зад!"),
					RandPhraseSimple("Пожалуй нет. Мне не приемлемо!", "Прощай. Я не желаю платить так много."));
		link.l1.go = "Exit_Companion_Leave";
		if (sti(pchar.money) >= sti(NPChar.Quest.Companion.Price))
		{
			link.l2 = PCharRepPhrase(RandPhraseSimple("Вот и отлично! Держи премиальные!", "Я и не сомневал" + GetSexPhrase("ся","ась") + ", что дело только в деньгах!"),
					RandPhraseSimple("Держи! Я рад" + GetSexPhrase("","а") + ", что ты остаёшься!", "Получи премиальные. Я надеюсь на твою поддержку."));
			link.l2.go = "Exit_Companion_Stay";
		}
		break;

	case "Exit_Companion_Leave":
		chrDisableReloadToLocation = false;
		RemoveCharacterCompanion(pchar, NPChar);

		NPChar.PGGAi.IsPGG = true;
		NPChar.RebirthPhantom = true;
		NPChar.PGGAi.location.town = GetCurrentTown();

		LAi_SetWarriorTypeNoGroup(NPChar);
		NextDiag.CurrentNode = "Second Time";
		DialogExit();
		break;

	case "Exit_Companion_Stay":
        GetCharacterPos(NPChar, &locx, &locy, &locz);
        sTmp = LAi_FindNearestFreeLocator("reload", locx, locy, locz);
		LAi_ActorGoToLocation(NPChar, "reload", sTmp, "none", "", "", "", 5.0);

		AddMoneyToCharacter(pchar, -(makeint(NPChar.Quest.Companion.Price)));
		NextDiag.CurrentNode = NextDiag.TempNode;
		DialogExit();
		break;

		case "Yes_or_no":
		Dialog.Text = "Каково ваше решение, капитан?";
		MakeRandomLinkOrderTwo(link, PCharRepPhrase(RandSwear() + RandPhraseSimple("Меня это устраивает. Но, надеюсь, ты не каждый день будешь требовать столько.", "Это чертовски дорого, но, думаю, ты того стоишь."),
				LinkRandPhrase("Я соглас" + GetSexPhrase("ен","на") + "!", "Хм... Пожалуй, я готов" + GetSexPhrase("","а") + " расстаться с этой суммой.", "Похоже, ты стоишь этих денег. Держи!")), "officer_hired",
									PCharRepPhrase(RandSwear() + RandPhraseSimple("Ты не стоишь столько. Бывай...", "Это чертовски дорого! Слишком дорого."),
				LinkRandPhrase("Да... жадность не порок...", "Ты издеваешься? За такие деньги я могу купить десять таких.", "Это грабеж... умерь свою хотелку.")), "exit_PIRATES");
		break;

//==================================================
// Quests ПРОДОЛЖАТЬ С ЭТОГО НИЖЕ!!!
//==================================================
//==== BETTA_TEST ====
	case "BT_Quest":
		Dialog.Text = "Выберите шаблон!";
		link.l1 = "Квест 1 Шаблон - морской.";
		link.l1.go = "BT_Quest_1";
		link.l2 = "Квест 2 Шаблон - сухопутный.";
		link.l2.go = "BT_Quest_2";
		link.l3 = "Квест 3 Шаблон - сухопутный.";
		link.l3.go = "HelpBackShip";
		break;

	case "BT_Quest_1":
		NPChar.PGGAi.ActiveQuest.QstNumber = 0;
		NPChar.PGGAi.ActiveQuest.QstNumber.Template = 1;
		Dialog.Text = "ВЫБРАН! Квест 1 Шаблон - морской.";
		link.l1 = "Ах да...";
		link.l1.go = "quest";
		break;
	case "BT_Quest_2":
		NPChar.PGGAi.ActiveQuest.QstNumber = 0;
		NPChar.PGGAi.ActiveQuest.QstNumber.Template = 0;
		Dialog.Text = "ВЫБРАН! Квест 1 Шаблон - сухопутный.";
		link.l1 = "Ах да...";
		link.l1.go = "quest";
		break;
//==== BETTA_TEST ====

	case "quest":
		chrDisableReloadToLocation = false;

		if (npchar.name == "Виспер" && !CheckAttribute(npchar, "PGGWhisperQuestStart") && !CheckAttribute(pchar,"GiantEvilSkeleton"))
		{
			if (GetCharacterShipClass(PChar) <= 4 && sti(npchar.Ship.Type) != SHIP_NOTUSED && pchar.rank >= 15)
			{
				NPChar.PGGWhisperQuestStart = true;
				Dialog.Text = "Знаешь? Ты как нельзя вовремя, есть одно дело.";
				link.l1 = "Хм. Ты о чём?";
				link.l1.go = "Quest_Whisper";
				break;
			}
			else
			{
				Dialog.Text = "Дело есть, но боюсь ты не справишься. Тебе бы кораблик посолидней...";
				link.l1 = "Ясно.";
				link.l1.go = "exit";
				break;
			}
		}

		int iDays = GetQuestPastDayParam("QuestTalk");
		if (CheckAttribute(NPChar, "PGGAi.Task.SetSail"))
		{
			if (findsubstr(npchar.mapEnc.Name, "торговцев" , 0) != -1)
			{
				Dialog.Text = "У меня сейчас своих дел хватает. Ты же видишь, что я плыву не одна?";
				link.l1 = "Понятно...";
				link.l1.go = "exit";
				break;
			}
			if (rand(100) > 60 && !CheckAttribute(pchar, "GenQuest.PGG_Quest") && GetCharacterShipClass(PChar) <= 4 && iDays > 7)
			{
				Dialog.Text = "Что за разговор? Хотя.. Почему бы и нет. Дело или дельце - это мы завсегда!";
				link.l1 = "Хм. Ты о чём?";
				link.l1.go = "Quest_1_Ship";
				NPChar.PGGAi.ActiveQuest = 1; // чтоб говорил от своего имени
				PChar.GenQuest.PGG_Quest = 1; // чтоб не достовали другие ПГГ
				SaveCurrentQuestDateParam("QuestTalk");
				break;
			}
			else
			{
				Dialog.Text = "Прости, но ничего такого у меня на примете сейчас нет.";
				link.l1 = "Понятно...";
				link.l1.go = "exit";
				if (GetCharacterShipClass(PChar) > 4)
				{
					Dialog.Text = "Дело с тобой!?? Подрасти сначала!";
				}
			}
		}
		else
		{
		switch (rand(2))
		{
		case 0:

			if (PGG_IsQuestAvaible() && !CheckAttribute(pchar, "GenQuest.PGG_Quest") && sti(NPChar.Ship.Type) != SHIP_NOTUSED && GetCharacterShipClass(PChar) <= 4 && sti(PChar.Ship.Type) != SHIP_NOTUSED && iDays > 14)
			{
				Dialog.Text = "Что за разговор? Хотя.. Почему бы и нет. Дело или дельце - это мы завсегда!";
				link.l1 = "Хм. Ты о чем?";
				link.l1.go = "Quest_1_Work";
				NPChar.PGGAi.ActiveQuest = 1; // чтоб говорил от своего имени
				PChar.GenQuest.PGG_Quest = 1; // чтоб не достовали другие ПГГ
				SaveCurrentQuestDateParam("QuestTalk");
			}
			else
			{
				Dialog.Text = RandPhraseSimple("Что ещё за дела?.. Не видишь мы кушаем!.. Ик..", "... Чего и вам советуем!");
				link.l1 = "Понятно...";
				link.l1.go = "exit";
				if (GetCharacterShipClass(PChar) > 4)
				{
					Dialog.Text = "Дело с тобой!?? Подрасти сначала!";
				}
			}
		break;
		case 1:
			if (PGG_IsQuestAvaible() && !CheckAttribute(pchar, "GenQuest.PGG_Quest") && sti(NPChar.Ship.Type) == SHIP_NOTUSED)
			{
				Dialog.Text = "Боюсь, это невозможно. На моем корабле был поднят бунт...";
				if (FindFreeRandomOfficer() > 0)
				{
					link.l3 = RandPhraseSimple("Не хочешь пойти офицером ко мне на корабль?", "Пожалуй, такой офицер, как ты, мне бы не помешал. Что скажешь?");
					link.l3.go = "officer";
				}
				link.l3 = RandPhraseSimple("Жаль... Ну, может вскоре повезёт больше.", "Вот это дела... Ну, мне пора, прощай.");
				link.l3.go = "exit";
			}
		else
		{
		Dialog.Text = RandPhraseSimple("Что ещё за дела?.. Не видишь мы кушаем!.. Ик..", "... Чего и вам советуем!");
		link.l1 = "Понятно...";
		link.l1.go = "exit";
			}
			break;
		case 2:
		Dialog.Text = RandPhraseSimple("Что ещё за дела?.. Не видишь мы кушаем!.. Ик..", "... Чего и вам советуем!");
		link.l1 = "Понятно...";
		link.l1.go = "exit";
		break;
		}
		}
		break;

	case "quest_onStay": // ПГГ сам подходит
		chrDisableReloadToLocation = false;
		Dialog.Text = "Поосторожнее!!! О! Я знаю тебя, ты " + GetFullName(PChar) + ". Известная личность! Наслышана, наслышана.";
		if (!CheckAttribute(NPChar, "meeting") || !sti(NPChar.meeting))
		{
			link.l1 = PCharRepPhrase(RandSwear() + RandPhraseSimple("Я капитан " + GetFullName(pchar) + ".",
						"Я капитан посудины '" + PChar.Ship.Name + "' и пары сотен настоящих чертей!!! Моё имя " + GetFullName(pchar) + ".") + " А тебя я что-то не припомню.",
					RandPhraseSimple("Позвольте представиться. Я капитан " + GetFullName(pchar) + ".",
						"Не имел чести быть вам представленным. Я капитан корабля '" + PChar.Ship.Name + "' под флагом " + NationNameGenitive(sti(PChar.nation)) + ". Моё имя " + GetFullName(pchar) + ".") + " А Вас я что-то не припоминаю.");
//			link.l1 = "Хм... а ты кто, что-то я тебя не помню.";
			link.l1.go = "Quest_1_Meeting";
		}
		else
		{
			link.l1 = "Привет, " + GetFullName(NPChar) + ". Как дела?";
			link.l1.go = "Quest_1_Work";
		}
		SaveCurrentQuestDateParam("QuestTalk");
		break;

	//=========== Первый квест ==========
	case "Quest_1_Meeting":
		sld = GetRealShip(sti(NPChar.Ship.Type));
		Dialog.Text = "Я - " + GetFullName(NPChar) + ", капитан " + xiStr(sld.BaseName + "Gen") + " " + NPChar.Ship.Name + NPCharRepPhrase(NPChar, ". Самая известная покорительница морей на всех Карибах.", " Самая обычная девушка-пират.");
		link.l1 = "Да, теперь я тебя запомню.";
		link.l1.go = "Quest_1_Work";
		NPChar.meeting = true;
		break;

	case "Quest_1_Work":
		iRnd = rand(3);
		PChar.GenQuest.PGG_Quest.Template = drand(1);
		if (CheckAttribute(NPChar, "PGGAi.ActiveQuest.QstNumber.Template"))
		{
			PChar.GenQuest.PGG_Quest.Template = NPChar.PGGAi.ActiveQuest.QstNumber.Template;
		}
		PChar.GenQuest.PGG_Quest.Parts = GetCompanionQuantity(PChar)+1;
		PChar.GenQuest.PGG_Quest.Nation = iRnd;
		if(PChar.GenQuest.PGG_Quest.Template == "1") PChar.GenQuest.PGG_Quest.Island = GetRandomUninhabitatIsland();
		else PChar.GenQuest.PGG_Quest.Island = GetRandomIslandId();
		while(PChar.GenQuest.PGG_Quest.Island == Islands[GetCharacterCurrentIsland(pchar)].id)
		{
			PChar.GenQuest.PGG_Quest.Island = GetRandomIslandId();
		}
		PChar.GenQuest.PGG_Quest.Island.Shore = GetIslandRandomShoreId(PChar.GenQuest.PGG_Quest.Island);
		while(PChar.GenQuest.PGG_Quest.Island.Shore == "")
		{
			PChar.GenQuest.PGG_Quest.Island = GetRandomIslandId();
			PChar.GenQuest.PGG_Quest.Island.Shore = GetIslandRandomShoreId(PChar.GenQuest.PGG_Quest.Island);
			if (sti(PChar.GenQuest.PGG_Quest.Template))
			{
				if (!isLocationFreeForQuests(PChar.GenQuest.PGG_Quest.Island)) PChar.GenQuest.PGG_Quest.Island.Shore = "";
			}
			else
			{
				if (!isLocationFreeForQuests(PChar.GenQuest.PGG_Quest.Island.Shore)) PChar.GenQuest.PGG_Quest.Island.Shore = "";
			}
		}
		PChar.GenQuest.PGG_Quest.Island.Town = FindTownOnIsland(PChar.GenQuest.PGG_Quest.Island);
		PChar.GenQuest.PGG_Quest.Days = GetMaxDaysFromIsland2Island(GetCharacterCurrentIslandId(pchar), PChar.GenQuest.PGG_Quest.Island) + 1;
		PChar.GenQuest.PGG_Quest.Goods = GOOD_SLAVES + drand(2);
		if(CheckAttribute(pchar, "BSStart") && !CheckAttribute(pchar, "BSInProgress"))	PChar.GenQuest.PGG_Quest.Goods = GOOD_GOLD;
		if (CheckAttribute(NPChar, "PGGAi.ActiveQuest"))
		{
//			Dialog.Text = "Дело у меня к тебе, приятель. Знаю, можно тебе довериться, но в таверне обсуждать не возьмусь, ушей много лишних. Жду тебя у меня на борту. Помнишь, моя посудина зовётся '" + NPChar.Ship.Name + "'.";
//			link.l1 = "Выкладывай сейчас, некогда мне по гостям расхаживать.";
			Dialog.Text = PCharRepPhrase(RandPhraseSimple("У меня есть отличненькое дельце для Вас и для ваших чертей.",
								"Объединим силы и мы сможем взять отличный куш! Ну, придётся кое-кого убить, естественно. Хе-хе."),
							RandPhraseSimple("У меня есть к вам деловое предложение, капитан.",
							"Капитан, ваша репутация хорошо известна и, поэтому, я хочу вам предложить участие в одном заманчивом деле.")) +
						RandPhraseSimple("Только между нами. Давай обсудим все у меня в кают-компании на '" + NPChar.Ship.Name + "' за бокалом превосходного вина. Сегодня.", "Здесь говорить об этом не резон, потолкуем у меня на судне '" + NPChar.Ship.Name + "' в тишине и в спокойствии. Не затягивайте с визитом.");
			link.l1 = PCharRepPhrase(RandSwear() + RandPhraseSimple("К чёрту проволочки! Хорошее хочу знать быстро, а плохое ещё быстрее!",
								"Незачем откладывать! В таверне есть комната, там и обсудим!"),
							RandPhraseSimple("Почему бы не обсудить ваше предложение прямо сейчас, в комнате таверны?",
								"Боюсь, у меня нет желания посещать ваше судно. Если вам что-то нужно, выкладывайте здесь!"));
		}
		else
		{
			PChar.GenQuest.PGG_Quest.Nation = FindEnemyNation2NationWithoutPirates(sti(PChar.Nation));
			Dialog.Text = "Тс-с-с... В таверне обсуждать дела не стоит, ушей много лишних. Жду тебя на моем корабле '" + NPChar.Ship.Name + "'. Там и поговорим.";
			link.l1 = "Некогда мне, да и бегать я не люблю.";
		}
		link.l1.go = "Quest_1_Work_1";

		if(NPChar.name == "Виспер" && !CheckAttribute(NPChar, "PGGWhisperQuestEnd")  && !CheckAttribute(PChar, "PGGWhisperComplete"))//фикс - QuestEnd - отказ от квеста, Complete - успешное выполнение
		{
			NPChar.PGGWhisperQuestStart = true;
			DeleteAttribute(pchar, "GenQuest.PGG_Quest");
			Dialog.Text = "Знаешь? Ты как нельзя вовремя, есть одно дело.";
			link.l1 = "Ты о чём?";
			link.l1.go = "Quest_Whisper";
			break;
		}

		link.l2 = PCharRepPhrase(RandPhraseSimple("Я приду! Но, если ты попусту потратишь моё время, я вырву твой язык и отдам собакам!",
					RandSwear() + "Жди, надеюсь, дело стоящее. И не вздумай шутить со мной!"),
				RandPhraseSimple("Я с удовольствием принимаю ваше приглашение, мадам.",
					"Вы меня заинтриговали. Разумеется, я приду."));
		link.l2.go = "Exit_Quest_1_AfterTavernTalk";
		break;

	case "Quest_1_Work_1":
		Dialog.Text = PCharRepPhrase(RandPhraseSimple("Да тебя, небось, от качки тошнит! Иди, найди себе мамашу с соской!!!",
					"Что, приятель" + GetSexPhrase("","ница") + ", " + GetSexPhrase("обоссался","обоссалась") + " от страха?!! Ну и проваливай, " + GetSexPhrase("трус несчастный","трусиха несчастная") + "!"),
				RandPhraseSimple("Нет - так нет. Принуждать не буду, значит, неинтересно тебе золото.",
					"Или так, или никак. Тебе решать. Многие хотят золотишком разжиться."));
		link.l1 = PCharRepPhrase(RandPhraseSimple("Ха! А ты дерзкая! И не боишься... Я приду, малышка!",
					"А ты умеешь настоять на своём, детка! Жди!"),
				RandPhraseSimple("Хорошо, я соглас" + GetSexPhrase("ен","на") + ".",
					"Чтож, вы очень убедительны. Я готов" + GetSexPhrase("","а") + " обсудить дела на вашем судне."));
		link.l1.go = "Exit_Quest_1_AfterTavernTalk";
		link.l2 = PCharRepPhrase(RandPhraseSimple("Ха! Думала заманить меня на свой корабль и убить? Не на " + GetSexPhrase("того","ту") + " нарвалась!",
					"Слова твои не стоят и выеденного яйца! Ни к чему мне с тобой дела иметь!"),
				RandPhraseSimple("Сомнительное предложение. Я вынужден" + GetSexPhrase("","а") + " отказаться.",
					"Приятно было познакомиться, " + GetFullName(NPChar) + ". Прощайте."));
		link.l2.go = "Quest_1_NotWork";
		break;

	case "Quest_1_NotWork":
		Dialog.Text = PCharRepPhrase(RandPhraseSimple("Рому мне! А ты, барыга, убирайся с глаз долой!",
					"Мы уже все обсудили, не так ли, ты?.."),
				RandPhraseSimple("Идите своей дорогой, я занята.",
					"Полагаю, у нас с вами не может быть общих тем."));
		link.l1 = RandSwear();
		link.l1.go = "exit_2";
		break;

	case "Quest_1_Work_2":
		Dialog.Text = "Я же сказала, что жду тебя на корабле!";
		link.l1 = "А... конечно...";
		link.l1.go = "exit";
		NextDiag.TempNode = "Quest_1_Work_2";
		break;

	case "Exit_Quest_1_AfterTavernTalk":
		PChar.GenQuest.PGG_Quest = 1;
		PChar.GenQuest.PGG_Quest.Stage = 0;
		PChar.GenQuest.PGG_Quest.PGGid = NPChar.id;

		Group_AddCharacter("PGGQuest", NPChar.id);
		Group_SetGroupCommander("PGGQuest", NPChar.id);
		Group_SetAddress("PGGQuest", Islands[GetCharacterCurrentIsland(PChar)].id, "Quest_Ships", "Quest_Ship_1");
		Group_SetTaskNone("PGGQuest");

		SetTimerConditionParam("PGGQuest1_RemoveShip_Timer", "PGGQuest1_RemoveShip_Timer", 0, 0, 0, MakeInt(GetHour() + 6), false);
		PChar.Quest.PGGQuest1_RemoveShip_Timer.function = "PGG_Q1RemoveShip";

		NPChar.Ship.Mode = "Pirate";
		NPChar.DeckDialogNode = "Quest_1_Ship";
		NPChar.Nation.Bak = NPChar.Nation;
		NPChar.Nation = GetCityNation(GetCurrentTown());
		NPChar.AlwaysFriend = true;
		NPChar.Abordage.Enable = false; //нельзя брать на абордаж
		SetCharacterRelationBoth(sti(PChar.index), sti(NPChar.index), RELATION_FRIEND);

		ReOpenQuestHeader("Gen_PGGQuest1"+Npchar.sex);
		if (CheckAttribute(NPChar, "PGGAi.ActiveQuest"))
		{
			AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_Tavern");
		}
		else
		{
			AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_Tavern_1");
		}
		AddQuestUserData("Gen_PGGQuest1"+Npchar.sex, "sShipName", NPChar.Ship.Name);

		NextDiag.CurrentNode = "Quest_1_Work_2";
		DialogExit();
		if (NPChar.Chr_Ai.Type == "actor") LAi_ActorGoToLocation(NPchar, "reload", "reload1_back", "none", "", "", "", 20);
		break;

	case "Quest_1_Ship":
		PChar.Quest.PGGQuest1_RemoveShip_Timer.Over = "yes";
		if (GetCompanionQuantity(PChar) == COMPANION_MAX)
		{
			Dialog.Text = RandPhraseSimple("Э, нет... Так дело не пойдет... Не слишком ли много тебе кораблей, " + GetSexPhrase("дружок","подруга") + "?",
					"Ха! В такой большой компании секрета не утаишь! Проваливай.");
			link.l1 = RandPhraseSimple("Ну, как хочешь!",
					"Что ж, не очень-то и хотелось.");
			link.l1.go = "Exit";
			PChar.Quest.PGGQuest1_RemoveEnd.win_condition.l1 = "ExitFromLocation";
			PChar.Quest.PGGQuest1_RemoveEnd.win_condition.l1.Location = PChar.location;
			PChar.Quest.PGGQuest1_RemoveEnd.function = "PGG_Q1RemoveShip";
			break;
		}
		if (CheckAttribute(NPChar, "PGGAi.ActiveQuest"))
		{
			if (CheckAttribute(NPChar, "PGGAi.Task.SetSail") )
			{
					PChar.GenQuest.PGG_Quest.Stage = 1;
					iRnd = rand(3);
					PChar.GenQuest.PGG_Quest.Template = drand(1);
					PChar.GenQuest.PGG_Quest.Parts = GetCompanionQuantity(PChar)+1;
					PChar.GenQuest.PGG_Quest.Nation = iRnd;
					if(PChar.GenQuest.PGG_Quest.Template == "1") PChar.GenQuest.PGG_Quest.Island = GetRandomUninhabitatIsland();
					else PChar.GenQuest.PGG_Quest.Island = GetRandomIslandId();

					PChar.GenQuest.PGG_Quest.Island.Shore = GetIslandRandomShoreId(PChar.GenQuest.PGG_Quest.Island);
					while(PChar.GenQuest.PGG_Quest.Island.Shore == "")
					{
						PChar.GenQuest.PGG_Quest.Island = GetRandomIslandId();
						PChar.GenQuest.PGG_Quest.Island.Shore = GetIslandRandomShoreId(PChar.GenQuest.PGG_Quest.Island);
						if (sti(PChar.GenQuest.PGG_Quest.Template))
						{
							if (!isLocationFreeForQuests(PChar.GenQuest.PGG_Quest.Island)) PChar.GenQuest.PGG_Quest.Island.Shore = "";
						}
						else
						{
							if (!isLocationFreeForQuests(PChar.GenQuest.PGG_Quest.Island.Shore)) PChar.GenQuest.PGG_Quest.Island.Shore = "";
						}
					}
					PChar.GenQuest.PGG_Quest.Island.Town = FindTownOnIsland(PChar.GenQuest.PGG_Quest.Island);
					PChar.GenQuest.PGG_Quest.Days = rand (4) + 5;
					PChar.GenQuest.PGG_Quest.Goods = GOOD_SLAVES + drand(2);
					if(CheckAttribute(pchar, "BSStart") && !CheckAttribute(pchar, "BSInProgress"))	PChar.GenQuest.PGG_Quest.Goods = GOOD_GOLD;
					PChar.GenQuest.PGG_Quest.PGGid = npchar.id;
					NPChar.Nation.Bak = NPChar.Nation;

					Dialog.Text = "Удачное время вы выбрали, чтобы ступить ко мне на палубу, капитан! У меня есть для вас выгодное предложение – взять немного бесхозного добра.";
					link.l1 = RandPhraseSimple("А что тут сложного? И почему ты делишься этим со мной, милочка?",
					"Бесхозного? Да ты шутишь, милая!");
					link.l1.go = "Quest_1_Ship_1";
			}
			else
			{
				PChar.GenQuest.PGG_Quest.Stage = 1;
				Dialog.Text = RandPhraseSimple("Добро пожаловать на борт, капитан!",
					"Ну, вот и славно, теперь я уверен - лишних ушей нет, мои матросы уже в курсе.") +
					" Предложение такое – взять немного бесхозного добра.";
					link.l1 = RandPhraseSimple("А что тут сложного? И почему ты делишься этим со мной, милочка?",
					"Бесхозного? Да ты шутишь, милая!");
					link.l1.go = "Quest_1_Ship_1";
			}
//			Dialog.Text = "Ну, вот и славно, теперь я уверен - лишних ушей нет, мои матросы уже в курсе. Предложение такое - взять немного бесхозного добра!";
//			link.l1 = "А что тут сложного? И почему ты делишься этим со мной?";

		}
		else
		{
			Dialog.Text = "Ну, вот и славно, теперь я уверен" + GetSexPhrase("","а") + " - лишних ушей нет, рассказывай!";
			link.l1 = "Предложение такое - взять немного бесхозного добра";
			link.l1.go = "Quest_1_Ship_1";
		}

		break;

	case "Quest_1_Ship_1":
		if (CheckAttribute(NPChar, "PGGAi.ActiveQuest"))
		{
			Dialog.Text = RandPhraseSimple("Ну, есть люди, которые считают его своим, а нужно убедить их в обратном.",
					"Ну конечно, придётся кое-кого ухлопать. Но ведь за этим дело не станет?!");
			link.l1 = PCharRepPhrase(RandSwear() + RandPhraseSimple("Ближе к делу!",
					"Это уже пахнет хорошей резнёй! Вопрос: где и кого?"),
				RandPhraseSimple("Хотелось бы узнать подробности вашего предложения.",
					"Что конкретно вы хотите мне предложить?"));
			link.l1.go = "Quest_1_Ship_Detail";
			link.l2 = PCharRepPhrase(RandPhraseSimple("Что-то ты темнишь. Не хочу я с тобой в это ввязываться!",
					"Выглядит просто, да я тебе не верю! Хочешь чужими руками жар загребать? Не соглас" + GetSexPhrase("ен","ная я") + "!"),
				RandPhraseSimple("Предложение заманчивое, но вынужден" + GetSexPhrase("","а") + " отказаться.",
					"Нет, чужое я с детства не беру, предпочитаю, что бы дарили. Без меня."));
			link.l2.go = "Quest_1_Ship_Refuse";
		}
		else
		{
			Dialog.Text = "А что тут сложного? И почему ты делишься этим со мной?";
			link.l1 = "Ну, есть люди, которые считают его своим, а нужно убедить их в обратном.";
			link.l1.go = "Quest_1_Ship_Detail";
		}
		break;

	case "Quest_1_Ship_Detail":
		sTmp = "Караван, принадлежащий " + NationNameGenitive(sti(PChar.GenQuest.PGG_Quest.Nation)) + ", перевозящий ";
		if (sti(PChar.GenQuest.PGG_Quest.Goods) == GOOD_SLAVES)
		{
			sTmp += "Рабов";
			PChar.GenQuest.PGG_Quest.Goods.Text = "Рабов";
		}
		else
		{
			sTmp += XI_ConvertString(Goods[sti(PChar.GenQuest.PGG_Quest.Goods)].Name);
			PChar.GenQuest.PGG_Quest.Goods.Text = XI_ConvertString(Goods[sti(PChar.GenQuest.PGG_Quest.Goods)].Name);
		}

		if (PChar.GenQuest.PGG_Quest.Island.Town == "" || PChar.GenQuest.PGG_Quest.Island.Town == "Caiman" ||
			PChar.GenQuest.PGG_Quest.Island.Town == "Terks" || PChar.GenQuest.PGG_Quest.Island.Town == "Dominica")
		{
			sLoc = GetConvertStr(PChar.GenQuest.PGG_Quest.Island, "LocLables.txt") + "");
		}
		else
		{
			sLoc = XI_ConvertString("Colony" + PChar.GenQuest.PGG_Quest.Island.Town + "Gen");
		}

		if (sti(PChar.GenQuest.PGG_Quest.Template))
		{
			sTmp +=	", будет проходить около острова " + sLoc + " у бухты " + GetConvertStr(PChar.GenQuest.PGG_Quest.Island.Shore, "LocLables.txt") + ", им пришлось отклониться от привычного маршрута.";
		}
		else
		{
			sTmp += ", попал в шторм недалеко от острова " + sLoc + " и пошёл на дно. Но они успели спасти часть груза и высадились в бухте " + GetConvertStr(PChar.GenQuest.PGG_Quest.Island.Shore, "LocLables.txt") +
				" Сейчас они ждут прихода своей эскадры.";
		}

		Dialog.Text = sTmp;
		link.l1 = PCharRepPhrase(RandSwear() + RandPhraseSimple("Не тяни, выкладывай все поживее!",
					"Я в тебе не ошиб" + GetSexPhrase("ся","лась") + ", что ты ещё знаешь?"),
				RandPhraseSimple("Очень интересно, продолжайте!",
					"Я " + GetSexPhrase("весь","вся") + " внимание!"));
		link.l1.go = "Quest_1_Ship_Detail_1";

		if (CheckAttribute(NPChar, "PGGAi.ActiveQuest"))
		{
			link.l2 = PCharRepPhrase(RandPhraseSimple("Дельце неплохое, но откажусь. Не резон мне с " + NationNameAblative(sti(PChar.GenQuest.PGG_Quest.Nation)) + " ссорится.",
					"Караван? Бесхозное? Да там тысяча солдат при нем! Не годится. Я ухожу."),
				RandPhraseSimple("Нет, с " + NationNameAblative(sti(PChar.GenQuest.PGG_Quest.Nation)) + " я не воюю, не интересно.",
					"Мой ответ – нет! Я не собираюсь портить отношения с " + NationNameAblative(sti(PChar.GenQuest.PGG_Quest.Nation)) + "!"));
			link.l2.go = NPCharRepPhrase(NPChar, "Quest_1_Ship_BadWay", "Quest_1_Ship_Refuse");
		}
		else
		{
			Dialog.Text = "Хм... Это уже пахнет хорошей добычей. Детали?";
			link.l1 = sTmp;
		}
		if (sti(PChar.GenQuest.PGG_Quest.Template))
		{
			AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_Detail_A");
		}
		else
		{
			AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_Detail_B");
		}
		AddQuestUserData("Gen_PGGQuest1"+Npchar.sex, "sNation", NationNameGenitive(sti(PChar.GenQuest.PGG_Quest.Nation)));
		AddQuestUserData("Gen_PGGQuest1"+Npchar.sex, "sGoods", PChar.GenQuest.PGG_Quest.Goods.Text));
		AddQuestUserData("Gen_PGGQuest1"+Npchar.sex, "sColony", sLoc);
		AddQuestUserData("Gen_PGGQuest1"+Npchar.sex, "sShore", GetConvertStr(PChar.GenQuest.PGG_Quest.Island.Shore, "LocLables.txt"));
		break;

	case "Quest_1_Ship_Detail_1":
		if (CheckAttribute(NPChar, "PGGAi.ActiveQuest"))
		{
//			Dialog.Text = "У нас есть только " + FindRussianDaysString(sti(PChar.GenQuest.PGG_Quest.Days)) + " для того, чтобы перехватить их.";
			Dialog.Text = PCharRepPhrase(RandPhraseSimple("Через " + FindRussianDaysString(sti(PChar.GenQuest.PGG_Quest.Days)) + " караван уйдёт и нам их уже не догнать.",
						"У нас есть ровно " + FindRussianDaysString(sti(PChar.GenQuest.PGG_Quest.Days)) + " дней, чтобы успеть их вырезать и забрать добычу!"),
					RandPhraseSimple("В нашем распоряжении " + FindRussianDaysString(sti(PChar.GenQuest.PGG_Quest.Days)) + " дней на всю операцию.",
						"Нам стоит поторопиться, " + PChar.Name + ". У нас в запасе всего " + FindRussianDaysString(sti(PChar.GenQuest.PGG_Quest.Days)) + "."));
			link.l1 = RandPhraseSimple("Мы успеем! Отплываем сегодня же.", "Не будем медлить. Прикажите отплывать сегодня же.");
			link.l1.go = "Exit_Quest_1_Accept";
			AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_Accept");
		}
		else
		{
			Dialog.Text = "Очень интересно, продолжай.";
			link.l1 = "У нас есть только " + FindRussianDaysString(sti(PChar.GenQuest.PGG_Quest.Days)) + " для того, чтобы перехватить их.";
			link.l1.go = "Quest_1_Ship_Accept";
			AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_Accept_1");
		}
		AddQuestUserData("Gen_PGGQuest1"+Npchar.sex, "nDays", FindRussianDaysString(sti(PChar.GenQuest.PGG_Quest.Days)));
		break;

	case "Quest_1_Ship_Accept":
		Dialog.Text = "Не будем медлить! В путь!";
		link.l1 = "В путь!";
		link.l1.go = "Exit_Quest_1_Accept";
		break;

	case "Exit_Quest_1_Accept":
		if (CheckAttribute(NPChar, "PGGAi.Task.SetSail"))
		{
			PGG_Disband_Fleet(npchar);
		}
		if (sti(PChar.GenQuest.PGG_Quest.Stage) < 2)
		{
			PChar.GenQuest.PGG_Quest.Stage = 2;
			PGG_Q1AcceptedQuestDeleteFantom("");
			Map_ReleaseQuestEncounter(npchar.id);

			if (sti(PChar.GenQuest.PGG_Quest.Template))
			{
				PGG_Q1PlaceShipsNearIsland();
			}
			else
			{
				Locations[FindLocation(PChar.GenQuest.PGG_Quest.Island.Shore)].DisableEncounters = true;

				PChar.Quest.PGGQuest1_CheckStartState.win_condition.l1 = "Location";
				PChar.Quest.PGGQuest1_CheckStartState.win_condition.l1.Location = PChar.GenQuest.PGG_Quest.Island.Shore;
				PChar.Quest.PGGQuest1_CheckStartState.function = "PGG_Q1CheckStartState";
			}
			PChar.Quest.PGGQuest1_PGGDead.win_condition.l1 = "NPC_Death";
			PChar.Quest.PGGQuest1_PGGDead.win_condition.l1.Character = PChar.GenQuest.PGG_Quest.PGGid;
			PChar.Quest.PGGQuest1_PGGDead.function = "PGG_Q1PGGDead";

			SetTimerCondition("PGGQuest1_Time2Late", 0, 0, sti(PChar.GenQuest.PGG_Quest.Days), false);
			PChar.Quest.PGGQuest1_Time2Late.function = "PGG_Q1Time2Late";

			NPChar.PGGAi.IsPGG = false;
			NPChar.PGGAi.location.town = "none";
			NPChar.CompanionEnemyEnable = true;
			DeleteAttribute(NPChar, "PGGAi.Task");
			DeleteAttribute(NPChar, "PGGAi.LockService");
			DeleteAttribute(NPChar, "AlwaysFriend");

			SetCompanionIndex(PChar, -1, sti(NPChar.index));
			SetCharacterRemovable(NPChar, false);

			SetBaseShipData(NPChar);
            DeleteAttribute(NPChar,"ship.sails");
			DeleteAttribute(NPChar,"ship.masts");
			DeleteAttribute(NPChar,"ship.blots");

			Fantom_SetCannons(NPChar, "pirate");
			Fantom_SetBalls(NPChar, "pirate");
		}
		NextDiag.CurrentNode = "Quest_1_Ship_Accept";
		DialogExit();
		break;

	case "Quest_1_Ship_Refuse":
		Dialog.Text = RandSwear() + "Вы меня разочаровали, капитан. А вы думали, что я вас приглашу на "+ RandPhraseSimple("воскресную мессу?!!", "детский утренник!??"));
		link.l1 = PCharRepPhrase(RandPhraseSimple("Это твоё дело, дорогуша. А решать моё.",
					"Я не хочу сушиться на солнце из-за пары пиастров."),
				RandPhraseSimple("Моё решение окончательное, капитан.",
					"Нам не о чем больше говорить."));
		link.l1.go = "Exit_Quest_1_Refuse";
		break;

	case "Exit_Quest_1_Refuse":
		if (sti(PChar.GenQuest.PGG_Quest.Stage) != -1)
		{
			PChar.GenQuest.PGG_Quest.Stage = -1;
			PChar.Quest.PGGQuest1_RemoveShip.win_condition.l1 = "ExitFromLocation";
			PChar.Quest.PGGQuest1_RemoveShip.win_condition.l1.Location = PChar.location;
			PChar.Quest.PGGQuest1_RemoveShip.function = "PGG_Q1RemoveShip";

			AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_Close");
			CloseQuestHeader("Gen_PGGQuest1"+Npchar.sex);
			DeleteAttribute(NPChar, "AlwaysFriend");
			SaveCurrentQuestDateParam("QuestTalk");
		}
		NPChar.Dialog.CurrentNode = "Quest_1_Ship_Refuse";
		NPChar.DeckDialogNode = "Quest_1_Ship_Refuse";
		DialogExit();
		break;

	case "Quest_1_Ship_BadWay":
		Dialog.Text = PCharRepPhrase(RandPhraseSimple("Да брось, все пройдёт как по маслу и никто не узнает. Мы всех зарежем.",
					"Узнал все и сам хочешь дельце провернуть? Не выйдет!"),
				RandPhraseSimple("Куда это вы заторопились, капитан? Уж не к властям ли?",
					"Весьма глупо влезть в логово тигра и думать, что можно запросто выбраться."));
		link.l1 = PCharRepPhrase(RandSwear() + RandPhraseSimple("Убирайся к морскому дьяволу! Я капитан " + GetFullName(PChar) + " и ты мне не указ! Я ухожу!",
					"Клянусь дьяволом, ты меня выводишь из себя!"),
				RandPhraseSimple("Ваше предложение мне неинтересно, и говорить нам более не о чем. Прощайте.",
					"Полагаю, нам не о чем более говорить. Меня ждут дела."));
		link.l1.go = "Quest_1_Ship_BadWay_1";
		break;

	case "Quest_1_Ship_BadWay_1":
		Dialog.Text = RandSwear() + PCharRepPhrase(RandPhraseSimple("Схватите " + GetSexPhrase("его","её") + "! Свяжите и " + GetSexPhrase("насадите жопой на пушку","надругайтесь по очереди") + "! " + GetSexPhrase("Посмотрим, какого цвета у него кишки","Послушаем, как она орёт") + "!!!",
					"Эй, Билли! Том! Хватайте эту суку! Пропустите " + GetSexPhrase("его","её") + " к шлюпке и я сама вас выпотрошу, клянусь дьяволом!!!"),
				RandPhraseSimple("Жаль, капитан! Надеюсь, в нашем трюме вам будет уютно. Ну, а потом решим, что с вами сделать.",
					"Белые рабы долго не живут, капитан, так что решайте: или Дерек прострелит вам череп из мушкета или вы остаток жизни проведёте на рудниках."));
		link.l1 = PCharRepPhrase(RandPhraseSimple("Гнида поганая! Я заставлю тебя жрать твои поганые потроха, " + GetFullName(NPChar) + "!!!",
					"А ну прочь с дороги, говно собачье! Раскрошу башку, как гнилую тыкву!"),
				RandPhraseSimple("Ваше предложение неприемлемо... И крайне неблагоразумно!!!",
					"А вы не очень гостеприимны... Прочь с дороги!!!"));
		link.l1.go = "Exit_Quest_1_DeckFight";
		break;

	case "Exit_Quest_1_DeckFight":
        GetCharacterPos(NPChar, &locx, &locy, &locz);
		DeleteAttribute(NPChar, "AlwaysFriend");
        sTmp = LAi_FindNearestFreeLocator("reload", locx, locy, locz);
		LAi_SetImmortal(NPChar, true);
		LAi_SetActorType(NPChar);
		LAi_ActorRunToLocation(NPChar, "reload", sTmp, "none", "", "", "", 5.0);

		LAi_LocationFightDisable(&Locations[FindLocation(pchar.location)], false);
		//группа может быть занята, а проверок по группам у нас нет... :(
		if (!CheckAttribute(pchar, "questTemp.PGGContra.Know"))
		{
			sTmp = "PGGTmp";
		}
		else
		{
			sTmp = "PGGQst";
		}
		PChar.GenQuest.PGG_Quest.GrpID = sTmp;

		for (i=1; i<5; i++)
		{
			sld = CharacterFromID("saylor_0" + i);
			LAi_group_MoveCharacter(sld, sTmp);
		}
		LAi_group_FightGroups(LAI_GROUP_PLAYER, sTmp, true);
		LAi_group_SetCheck(sTmp, "PGG_Q1AfterDeckFight");
		chrDisableReloadToLocation = true;

		PGG_ChangeRelation2MainCharacter(NPChar, -20);
		NextDiag.CurrentNode = NextDiag.TempNode;
		DialogExit();
		LAi_SetFightMode(pchar, true);
		break;

	case "Quest_1_Time2Late":
		DeleteAttribute(&Locations[FindLocation(PChar.GenQuest.PGG_Quest.Island.Shore)],"DisableEncounters");
		chrDisableReloadToLocation = false;
		SaveCurrentQuestDateParam("QuestTalk");

		//перенёс сюда.. х.з. вроде будет лучше (Баг Изгоя.)
		PChar.Quest.PGGQuest1_PGGDead.Over = "Yes";
		PChar.Quest.PGGQuest1_GroupDead.Over = "Yes";
		PChar.Quest.PGGQuest1_CheckStartState.Over = "Yes";

//		Dialog.Text = "Так, " + GetFullName(PChar) + ", что-то зря я с тобой связался, добыча утекла сквозь пальцы как вода. Прощай!";
		Dialog.Text = PCharRepPhrase(RandPhraseSimple("Гром и молния! Мы опоздали! А все из-за вас, ленивые шлюхины дети! Нечего нам с тобой теперь делить, " + GetFullName(PChar) + ". Поднять стаксель! Травить марс помалу! ",
					"Слышь, " + GetFullName(PChar) + ", зря я с тобой связалась, добыча утекла сквозь пальцы как вода. Проклятье! Уходим ребята!"),
				RandPhraseSimple("Они исчезли! Виной всему ваша нерасторопность! Нам с вами не по пути " + GetFullName(PChar) + ".",
					"Караван мы не догоним, можно сушить весла. Только зря с вами связалась! Прощайте."))
		link.l1 = PCharRepPhrase(RandPhraseSimple("Да и чёрт с этим караваном! Ловцы жемчуга ничуть не хуже, а риска никакого!",
					"Удача с нами, ещё не вечер! Море изобилует барыгами, ждущими, пока мы отнимем их денежки!"),
				RandPhraseSimple("Действительно, жаль, что такая блестящая операция закончилась полным фиаско! Прощайте!",
					"Человек предполагает, а бог располагает... Всего хорошего!"));
		link.l1.go = "Exit_Quest_1_2Late";

		AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_Time2Late");
		CloseQuestHeader("Gen_PGGQuest1"+Npchar.sex);
		break;

	case "Exit_Quest_1_2Late":
        LAi_SetPlayerType(PChar);
		if (sti(PChar.GenQuest.PGG_Quest.Stage) != -1)
		{
			PChar.GenQuest.PGG_Quest.Stage = -1;
			RemoveCharacterCompanion(pchar, NPChar);

			NPChar.PGGAi.IsPGG = true;
			NPChar.RebirthPhantom = true;

			LAi_SetWarriorTypeNoGroup(NPChar);
			LAi_group_MoveCharacter(NPChar, "GroupDeck");

			PChar.Quest.PGGQuest1_Clear.win_condition.l1 = "ExitFromLocation";
			PChar.Quest.PGGQuest1_Clear.win_condition.l1.Location = PChar.location;
			if (PChar.location == "Ship_deck")
			{
/*				PChar.Quest.PGGQuest1_RemoveShip.win_condition.l1 = "ExitFromSea";
				PChar.Quest.PGGQuest1_RemoveShip.function = "PGG_Q1RemoveShip";
				PChar.Quest.PGGQuest1_Clear.win_condition.l1 = "ExitFromSea";
*/				PChar.quest.Munity = "Deads";
			}
			PChar.Quest.PGGQuest1_Clear.function = "PGG_Q1EndClear";
		}
		NextDiag.CurrentNode = "Quest_1_Failed";
		DialogExit();
		break;

	case "Quest_1_CheckResult":
		if (PChar.location == PChar.GenQuest.PGG_Quest.Island.Shore)
		{
			Locations[FindLocation(PChar.GenQuest.PGG_Quest.Island.Shore)].DisableEncounters = false;
		}
		else
		{
			PChar.quest.Munity = "Deads";
		}
		chrDisableReloadToLocation = false;
		SaveCurrentQuestDateParam("QuestTalk");

		//не взяли груз...
		if (CheckAttribute(NPChar, "PGGAi.ActiveQuest"))
		{
			PChar.GenQuest.PGG_Quest.FailedPaySum = sti(PChar.GenQuest.PGG_Quest.Days)*10000;
//			Dialog.Text = "Н-да, связался я с тобой. Все погубил. Ты теперь мне должен неустойку в размере " + FindRussianMoneyString(sti(PChar.GenQuest.PGG_Quest.FailedPaySum)) + ".";
			Dialog.Text = PCharRepPhrase(RandPhraseSimple("Проклят" + GetSexPhrase("ый ублюдок","ая сука") + "! Все ушло на дно к морскому дьяволу! " + FindRussianMoneyString(sti(PChar.GenQuest.PGG_Quest.FailedPaySum)) + " пиастров на бочку, и я видеть тебя больше не желаю!",
						"Ты себя кем вообразил" + GetSexPhrase("","а") + "? Потопил" + GetSexPhrase("","а") + " всю добычу, идиот" + GetSexPhrase("","ка") + "! Отсыпь мне " + FindRussianMoneyString(sti(PChar.GenQuest.PGG_Quest.FailedPaySum)) + " пиастров и убирайся к чёрту!"),
					RandPhraseSimple("Вы здесь войну решили устроить! Это совершенно никуда не годится! Полагаю, мы все забудем, если вы уплатите нам " + FindRussianMoneyString(sti(PChar.GenQuest.PGG_Quest.FailedPaySum)) + " пиастров! ",
						"Ваши методы недопустимы в такого рода делах! Вы провалили все дело! Немедленно уплатите нашу долю в размере " + FindRussianMoneyString(sti(PChar.GenQuest.PGG_Quest.FailedPaySum)) + " пиастров и отправляйтесь на все четыре стороны! "));
			link.l1 = PCharRepPhrase(RandPhraseSimple("Если бы не я, ты бы сейчас крабов кормила, обезьяна корявая!",
						"А лучше было позволить флагману взять на абордаж твоё корыто, тогда бы ты уже корчилась под матроснёй! "),
					RandPhraseSimple("Ваши требования неуместны, а намёки оскорбительны!",
						"Договора о неустойке не было, а значит и платить я не буду!"));
			link.l1.go = "Quest_1_NotPay";
			if (sti(pchar.money) >= sti(PChar.GenQuest.PGG_Quest.FailedPaySum))
			{
				link.l2 = PCharRepPhrase(RandPhraseSimple("Я не могу тебе дать сейчас бой, и ты это знаешь! Подавись своими пиастрами! Вот!",
								"Пиастры!!! Что ж, фортуна показала мне свой зад. Держи, не рассыпь!"),
							RandPhraseSimple("Ваши требования возмутительны, но выбора у меня, похоже, нет.",
								"Ваши аппетиты чрезмерны, но я вынужден согласиться!"));
				link.l2.go = "Exit_Quest_1_Failed";
			}
		}
		else
		{
			PChar.GenQuest.PGG_Quest.Stage = -1;
			Dialog.Text = "Н-да, связалась я с тобой. Все погубил" + GetSexPhrase("","а") + ". Не умеешь - не берись, и других не подстрекай.";
			link.l1 = "Да ну! Сама же видела, не получалось.";
			link.l1.go = "Exit_Quest_1_Failed";
		}

		//минимум треть если взял, то гуд!
		if (sti(PChar.GenQuest.PGG_Quest.Goods.Taken) > MakeInt(sti(PChar.GenQuest.PGG_Quest.Goods.Qty)/3))
		{
			PChar.GenQuest.PGG_Quest.Ok = 1;
//			Dialog.Text = "Итак, добыча составила " + PChar.GenQuest.PGG_Quest.Goods.Taken + " " + PChar.GenQuest.PGG_Quest.Goods.Text + ". Давай делить. ";
			Dialog.Text = PCharRepPhrase("Жаркое дельце! Добыча составила " + PChar.GenQuest.PGG_Quest.Goods.Taken + " " + PChar.GenQuest.PGG_Quest.Goods.Text + ".",
					"Отлично сработали, " + GetSexPhrase("капитан","подруга") + "! Добыча составила " + PChar.GenQuest.PGG_Quest.Goods.Taken + " " + PChar.GenQuest.PGG_Quest.Goods.Text + ".");
			DeleteAttribute(Pchar, "PGGShoreQuest");
			int greedyPGG = 0;
			string greed = "";
			if (GetCharacterShipClass(NPChar) > GetCharacterShipClass(PChar))
			{
				PChar.GenQuest.PGG_Quest.Parts = (GetCharacterShipClass(NPChar) - GetCharacterShipClass(PChar));
				i = sti(PChar.GenQuest.PGG_Quest.Parts)+2-greedyPGG;
				PChar.GenQuest.PGG_Quest.Goods.Part = MakeInt(sti(PChar.GenQuest.PGG_Quest.Goods.Taken) / i);
			}
			else
			{
				if (makeint(NPChar.reputation) < 41 && PGG_ChangeRelation2MainCharacter(NPChar, 0) < 70 && drand(200) > sti(GetSummonSkillFromName(pchar, SKILL_LEADERSHIP)))
				{
					greedyPGG = 2;
					greed = " И не советую тебе рыпаться.";
					npchar.Greed = true;
				}
				PChar.GenQuest.PGG_Quest.Parts = (GetCharacterShipClass(PChar) - GetCharacterShipClass(NPChar));
				i = sti(PChar.GenQuest.PGG_Quest.Parts)+2+greedyPGG;
				PChar.GenQuest.PGG_Quest.Goods.Part = MakeInt(sti(PChar.GenQuest.PGG_Quest.Goods.Taken)) - MakeInt(sti(PChar.GenQuest.PGG_Quest.Goods.Taken) / i);
			}
			if (CheckAttribute(NPChar, "PGGAi.ActiveQuest"))
			{
				Dialog.Text = Dialog.Text + PCharRepPhrase(" Моя доля ", "Доля, приходящаяся на моё судно - ");
			}
			else
			{
				Dialog.Text = Dialog.Text + " Твоя доля ";
			}
			Dialog.Text = Dialog.Text + PChar.GenQuest.PGG_Quest.Goods.Part + ". "+greed;
			link.l1 = PCharRepPhrase(RandPhraseSimple("Справедливо! Уже грузят в шлюпки!", "Да, все точно... Уговор дороже денег."),
					RandPhraseSimple("Все честно. Я соглас" + GetSexPhrase("ен","на") + ".", "Претензий нет."));
			link.l1.go = "Exit_Quest_1_End";
			if (!CheckAttribute(npchar, "Greed"))
			{
			link.l2 = PCharRepPhrase(RandPhraseSimple("И ты ещё требуешь свою долю? Да тебе надо выпустить все кишки!",
						"Долю? Здесь каждый сам за себя, и если тебе ничего не досталось - твои проблемы!"),
					RandPhraseSimple("Не думаю, что вы на что-то можете рассчитывать.",
						"Мой ответ – нет! Я не собираюсь делиться с разным отребьем!"));
			}
			else
			{
				link.l2 = "Ты что, надуть меня хочешь? В таком случае я забираю себе всё!";
			}
			link.l2.go = "Quest_1_NotPay";
		}
		else
		{
			AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_Fail");
		}
		break;

	case "Quest_1_NotPay":
		Dialog.Text = PCharRepPhrase(RandPhraseSimple("Нет, так нет! Спорить не буду! Иди к чёрту!",
					"Не будем проливать кровь и усугублять неудачу! В другой раз повезёт больше!"),
				RandPhraseSimple("Что же, прощайте, капитан, я не в том положении, чтобы настаивать...",
					"Повреждения моего корабля и потери не позволяют мне настаивать на справедливом решении вопроса. Оставлю это на вашей совести, капитан!"));
		link.l1 = PCharRepPhrase(RandPhraseSimple("Попутного ветра!", "Семь футов под килем!"),
				RandPhraseSimple("Прощайте! Полагаю, свежий морской воздух пойдёт вам на пользу!",
					"Надеюсь, что ваши неудачи не сделают ваш характер ещё более несносным, прощайте!"));
		link.l1.go = "Exit_Quest_1_Failed";
		PChar.GenQuest.PGG_Quest.Stage = -1;

		if (!CheckAttribute(npchar, "Greed"))	ChangeCharacterReputation(PChar,-20);
		else	npchar.PGG_Hunter = true;
		DeleteAttribute(npchar, "Greed");

		bOk = makeint(NPChar.reputation) < 41 && PGG_ChangeRelation2MainCharacter(NPChar, 0) < 75;
		if (bOk || CheckAttribute(PChar, "GenQuest.PGG_Quest.Ok"))
		{
			PChar.GenQuest.PGG_Quest.Stage = 4;
			Dialog.Text = PCharRepPhrase(RandPhraseSimple("Ты не понял" + GetSexPhrase(", баран","а, овца") + ".! Этим ты мог" + GetSexPhrase("","ла") + " купить себе жизнь! Задавите эт" + GetSexPhrase("от мешок с говном","у тупорылую шлюху") + "!",
						"Ты, наверное, думаешь, что с тобой шутят " + GetSexPhrase("дурак","овца") + "? Пропустим тебя под килем, по-другому запоёшь!"),
					RandPhraseSimple("Придётся укоротить вас на голову, капитан! Не хотите по-хорошему, познакомитесь с апостолом Павлом!",
						"Вы не оставляете мне выбора, " + GetFullName(PChar) + "! Я возьму своё, а вас " + GetSexPhrase("проткнут как жука","порежут на ремни") + "!"));
			link.l1 = PCharRepPhrase(RandPhraseSimple("Клянусь дьяволом, ты за это заплатишь, сука! Разрублю до жопы!!!",
						"Бла-бла-бла! Я " + GetFullName(PChar) + ", а вы все - шавки, захлопните вонючие пасти! "),
					RandPhraseSimple("Придётся отсечь вам ваш язык под самый корень! ",
						"Хотите подохнуть сразу или немного помучиться?"));
			link.l1.go = "Exit_Quest_1_FailedFight";
		}
		break;

	case "Exit_Quest_1_Failed":
		if (sti(PChar.GenQuest.PGG_Quest.Stage) != -1)
		{
			AddMoneyToCharacter(PChar, -(sti(PChar.GenQuest.PGG_Quest.FailedPaySum)));
			AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_FailPay");
		}

		ChangeCharacterReputation(NPChar, 10);

		CloseQuestHeader("Gen_PGGQuest1"+Npchar.sex);
		RemoveCharacterCompanion(pchar, NPChar);

		if (PChar.Location == "Ship_deck")
		{
			PChar.Quest.PGGQuest1_FailedExitSea.win_condition.l1 = "ExitFromSea";
			PChar.Quest.PGGQuest1_FailedExitSea.function = "PGG_Q1EndClear";
		}
		else
		{
			PChar.Quest.PGGQuest1_FailedExitLoc.win_condition.l1 = "ExitFromLocation";
			PChar.Quest.PGGQuest1_FailedExitLoc.win_condition.l1.Location = PChar.location;
			PChar.Quest.PGGQuest1_FailedExitLoc.function = "PGG_Q1EndClear";
		}
		PGG_ChangeRelation2MainCharacter(NPChar, -5);

		LAi_SetImmortal(NPChar, true);
		//что б не били сопровождение.
		for (i = 1; i < sti(PChar.GenQuest.PGG_Quest.GrpID.Qty); i++)
		{
			sld = CharacterFromID("pirate_" + i);
			LAi_SetImmortal(sld, true);
		}

		NextDiag.CurrentNode = "Quest_1_Failed";
		DialogExit();
		if (NPChar.Chr_Ai.Type == "actor") LAi_SetWarriorTypeNoGroup(NPChar);
		break;

	case "Quest_1_Failed":
		Dialog.Text = "Не хочу больше иметь с тобой дел!";
		link.l1 = "Да и не нужно.";
		link.l1.go = "Exit";
		NextDiag.TempNode = "Quest_1_Failed";
		break;

	case "Quest_1_End":
		Dialog.Text = "Сегодня мы отчаливаем в " + XI_ConvertString("Colony"+npchar.PGGAi.location.town) + " пропивать добычу! Если хочешь, присоединяйся! В любом случае, приятно иметь с тобой дело! Удачи.";
		link.l1 = "Взаимно.";
		link.l1.go = "Exit";
		NextDiag.TempNode = "Quest_1_End";
		break;

	case "Exit_Quest_1_FailedFight":
		RemoveCharacterCompanion(pchar, NPChar);

		ChangeCharacterReputation(NPChar, -5);

		LAi_LockFightMode(pchar, false);
		LAi_LocationFightDisable(&Locations[FindLocation(PChar.location)], false);
		LAi_group_SetRelation("PGGTmp", LAI_GROUP_PLAYER, LAI_GROUP_ENEMY);
		LAi_group_FightGroups(LAI_GROUP_PLAYER, "PGGTmp", true);
		LAi_group_SetCheck("PGGTmp", "PGG_Q1AfterDeckFight");

		PChar.GenQuest.PGG_Quest.GrpID = "PGGTmp";
		chrDisableReloadToLocation = true;

		Group_AddCharacter("PGGQuest", NPChar.id);
		Group_SetGroupCommander("PGGQuest", NPChar.id);
		Group_SetAddress("PGGQuest", PChar.GenQuest.PGG_Quest.GrpLocation, "Quest_Ships", PChar.GenQuest.PGG_Quest.GrpLoc);
		Group_SetTaskNone("PGGQuest");

		PGG_ChangeRelation2MainCharacter(NPChar, -15);

		GetCharacterPos(NPChar, &locx, &locy, &locz);
        sTmp = LAi_FindNearestFreeLocator("reload", locx, locy, locz);
		NextDiag.CurrentNode = "Second Time";
		DialogExit();

		NPChar.location = PChar.location;
		Log_TestInfo("go to loc " + sTmp + " " + NPChar.location);
		if (PChar.location != "Ship_Deck") sTmp = "sea";

		PChar.questTemp.Chr2Remove = NPChar.id;
		LAi_ActorRunToLocator(NPChar, "reload", sTemp, "RemoveCharacterFromLocation", 5.0);

		LAi_SetImmortal(NPChar, true);
		LAi_SetFightMode(pchar, true);
		break;

	case "Exit_Quest_1_End":
		DeleteAttribute(npchar, "Greed");
		RemoveCharacterCompanion(PChar, NPChar);
		PGG_ChangeRelation2MainCharacter(NPChar, 30);
		npchar.PGGAi.location.town = PGG_FindRandomTownByNation(sti(npchar.nation));
		npchar.PGGAfterShare = true;
		npchar.PGGAi.AfterSail.TaskCounter = 0;
		ChangeCharacterReputation(PChar, 5);

		i = sti(PChar.GenQuest.PGG_Quest.Goods.Part);
		RemoveCharacterGoods(PChar, sti(PChar.GenQuest.PGG_Quest.Goods), i);
			PChar.Quest.PGGQuest1_EndExitLoc.win_condition.l1 = "ExitFromLocation";
			PChar.Quest.PGGQuest1_EndExitLoc.win_condition.l1.Location = PChar.location;
			PChar.Quest.PGGQuest1_EndExitLoc.function = "PGG_Q1EndClear";
		AddQuestRecord("Gen_PGGQuest1"+Npchar.sex, "q1_OkShare");
		CloseQuestHeader("Gen_PGGQuest1"+Npchar.sex);

		//что б не били сопровождение.
		for (i = 1; i < sti(PChar.GenQuest.PGG_Quest.GrpID.Qty); i++)
		{
			sld = CharacterFromID("pirate_" + i);
			LAi_SetImmortal(sld, true);
		}

		LAi_SetImmortal(NPChar, true);
		NextDiag.CurrentNode = "Quest_1_End";
		DialogExit();
  		LAi_SetWarriorType(NPChar); // сброс группы ГГ
		LAi_group_MoveCharacter(NPChar, LAI_GROUP_PLAYER);
		break;

	case "Quest_1_SharePrise":
		chrDisableReloadToLocation = false;
		SaveCurrentQuestDateParam("QuestTalk");
		Dialog.Text = PCharRepPhrase("Настоящая бойня, книпель мне в зад!, жаль, кончилось быстро! Добыча составила " + PChar.GenQuest.PGG_Quest.Goods.Taken + " " + PChar.GenQuest.PGG_Quest.Goods.Text + ".", "Неплохо, капитан, угря мне в ущелье! Добыча составила " + PChar.GenQuest.PGG_Quest.Goods.Taken + " " + PChar.GenQuest.PGG_Quest.Goods.Text + ".");

		pchar.PGGShoreQuest = true;
		PChar.GenQuest.PGG_Quest.Parts = 2;
		i = sti(PChar.GenQuest.PGG_Quest.Parts);
		PChar.GenQuest.PGG_Quest.Goods.Part = MakeInt(sti(PChar.GenQuest.PGG_Quest.Goods.Taken) / i);
        SetCharacterGoods(PChar, sti(PChar.GenQuest.PGG_Quest.Goods), sti(PChar.GenQuest.PGG_Quest.Goods.Taken) + GetCargoGoods(PChar, sti(PChar.GenQuest.PGG_Quest.Goods)));
		if (CheckAttribute(NPChar, "PGGAi.ActiveQuest"))
		{
			Dialog.Text = Dialog.Text + " Моя доля ";
		}
		else
		{
			Dialog.Text = Dialog.Text + " Твоя доля ";
		}
		Dialog.Text = Dialog.Text + PChar.GenQuest.PGG_Quest.Goods.Part + ".";
		link.l1 = PCharRepPhrase(RandPhraseSimple("Справедливо, корабль тебе в бухту! (смеётся)", "Да, все точно, сто залпов тебе в то же место! (смеётся)"),
			RandPhraseSimple("Похоже все точно... Куда вам?.. Чего? (закашля" + GetSexPhrase("лся","лась") + ")", "Честный дележ... Кхм.. И словцо у вас тоже не слабое. (смеётся)"));
		link.l1.go = "Exit_Quest_1_End";
		break;
	case "Exit":
		NextDiag.CurrentNode = NextDiag.TempNode;
		DialogExit();
		if (NPChar.Chr_Ai.Type == "actor")
		{
		LAi_SetWarriorTypeNoGroup(NPChar);
		}
		break;

		case "Exit_PIRATES":
		NextDiag.CurrentNode = NextDiag.TempNode;
		DialogExit();
		LAi_SetPlayerType(pchar);
		break;

	case "Exit_2":
		if (CheckAttribute(pchar, "GenQuest.PGG_Quest")) DeleteAttribute(pchar, "GenQuest.PGG_Quest"); //fix
		NextDiag.CurrentNode = NextDiag.TempNode;
		DialogExit();
		if (NPChar.Chr_Ai.Type == "actor") LAi_SetWarriorTypeNoGroup(NPChar);
		break;

	case "Exit_Smugglers_Fight":
		NextDiag.CurrentNode = "Second Time";
		npchar.willDie = true;
		CloseQuestHeader("Gen_StrangeInfo");
		DialogExit();
		LAi_group_FightGroups(LAI_GROUP_PLAYER, "PGGTmp", true);
		LAi_SetFightMode(pchar, true);
		break;

	case "Exit_ShowParam":
		NextDiag.CurrentNode = "Second Time";
//		NPChar.quest.meeting = true;
		DialogExit();

		PChar.SystemInfo.OnlyShowCharacter = true;
		LaunchCharacter(NPChar);
		break;
	}
}
