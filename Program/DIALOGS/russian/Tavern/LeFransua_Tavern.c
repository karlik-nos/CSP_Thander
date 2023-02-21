// диалог по городам
void ProcessCommonDialogEvent(ref NPChar, aref Link, aref NextDiag)
{
    switch (Dialog.CurrentNode)
	{
		case "quests":
			dialog.text = NPCStringReactionRepeat(RandPhraseSimple("Какие вопросы?", "Что вам угодно, " + GetAddress_Form(NPChar) + "?"), "Совсем недавно вы пытались задать мне вопрос, " + GetAddress_Form(NPChar) + "...", "В течение этого дня вы уже третий раз говорите о каком-то вопросе...",
                          "Опять вопросы будем задавать?", "block", 1, npchar, Dialog.CurrentNode);
			link.l1 = HeroStringReactionRepeat(RandPhraseSimple("Я "+ GetSexPhrase("передумал","передумала") +"...", "Сейчас мне не о чем говорить"), "Хм, что-то с памятью моей стало...",
                      "Да уж, действительно в третий раз...", "Да нет, какие вопросы...", npchar, Dialog.CurrentNode);
			link.l1.go = "exit";
			if (pchar.questTemp.piratesLine == "BlackLabel_toLaVega")
			{
				link.l1 = "Подскажи, приятель, не проживает ли у вас в городишке Эдвард Лоу?";
				link.l1.go = "PL_Q2_1";
			}
			if (pchar.questTemp.piratesLine == "KillLoy_toSeek")
			{
				link.l1 = "Дружище, я опять к тебе... Скажи, а куда подевался Эдвард Лоу? Мне он срочно нужен...";
				link.l1.go = "PL_Q3_1";
			}

			//-->ОЗГ
			if(CheckAttribute(pchar, "questTemp.Headhunter"))
			{
	    		if (pchar.questTemp.Headhunter == "vector_barmen")
				{
					link.l1 = "Добрый день. Меня прислал ваш друг, из контрабандистов. Он сказал, что вы ищете человека для выполнения какого-то задания.";
					link.l1.go = "Barmen_check";
					break;
				}

				if (npchar.city == "LeFransua" && pchar.questTemp.Headhunter == "barmen_wait")
				{
					link.l1 = "Добрый день, " + npchar.name + ". Это опять я. Что вы скажете по поводу вашего задания?";
					link.l1.go = "Barmen_check";
					break;
				}
				if (pchar.questTemp.Headhunter == "hunt_carlos_yes")
				{
					link.l1 = "Добрый день, " + npchar.name + ". У меня хорошие новости. Карлос Кассир уничтожен.";
					link.l1.go = "Endtaskhunt_1";
				}
				if(pchar.questTemp.Headhunter == "next_task_2" && GetQuestPastDayParam("pchar.questTemp.Headhunter_next_task_2") > 9)
				{
					link.l1 = "Добрый день, " + npchar.name + ". Я приш"+ GetSexPhrase("ел","ла") +", как мы и договаривались. Раздобыли какую-нибудь полезную информацию?";
					link.l1.go = "Givetaskhunt_2";
				}
				if (pchar.questTemp.Headhunter == "hunt_houm_yes")
				{
					link.l1 = "Добрый день, " + npchar.name + ". Мне удалось отправить Ганнибала Холма на корм рыбам, хоть это было и непросто.";
					link.l1.go = "Endtaskhunt_2";
				}
				if(pchar.questTemp.Headhunter == "next_task_3" && GetQuestPastDayParam("pchar.questTemp.Headhunter_next_task_3") > 14)
				{
					link.l1 = "Здравствуйте, " + npchar.name + ". Надеюсь, я вовремя?";
					link.l1.go = "Givetaskhunt_3";
				}
				if (pchar.questTemp.Headhunter == "hunt_rat_yes1")
				{
					link.l1 = "Я прибыл"+ GetSexPhrase("","а") +" с хорошими новостями, " + npchar.name + ". Мне удалось выманить Крысу. Я абордировал"+ GetSexPhrase("","а") +" его корабль, а самого его отправил"+ GetSexPhrase("","а") +" к Дэви Джонсу.";
					link.l1.go = "Endtaskhunt_3";
				}
				if (pchar.questTemp.Headhunter == "hunt_rat_yes2")
				{
					link.l1 = "Я прибыл"+ GetSexPhrase("","а") +" с хорошими новостями, " + npchar.name + ". Мне удалось выманить Крысу. Я отправил"+ GetSexPhrase("","а") +" его к Дэви Джонсу вместе с его кораблем.";
					link.l1.go = "Endtaskhunt_3";
				}
				if(pchar.questTemp.Headhunter == "next_task_4" && GetQuestPastDayParam("pchar.questTemp.Headhunter_next_task_4") > 17)
				{
					link.l1 = "Приветствую вас, " + npchar.name + ". Вот и я. Какие новости?";
					link.l1.go = "Givetaskhunt_4";
				}
				if (pchar.questTemp.Headhunter == "hunt_halen_yes")
				{
					link.l1 = "Мартин ван  Хален больше не будет тревожить покой жителей Ле Франсуа, " + npchar.name + ".";
					link.l1.go = "Endtaskhunt_4";
				}
				if(pchar.questTemp.Headhunter == "hunt_ja_yes")
				{
					link.l1 = "Добрый день, " + npchar.name + ". Сегодня он действительно добрый. С бандой Джа Престона покончено навсегда.";
					link.l1.go = "Endtaskhunt_5";
				}
			}
		break;
		//пиратка, квест №2, чёрная метка для Лоу
		case "PL_Q2_1":
			dialog.text = NPCStringReactionRepeat("Как же не проживает? очень даже проживает.",
				"Я уже говорил, что проживает.",
				"Проживает, проживает...",
                ""+ GetSexPhrase("Утомил","Утомила") +"...", "block", 1, npchar, Dialog.CurrentNode);
			link.l1 = HeroStringReactionRepeat("А как мне его найти, не подскажешь?",
				"Да-да, я "+ GetSexPhrase("понял","поняла") +"...",
                ""+ GetSexPhrase("Понял","Поняла") +"...",
				"...", npchar, Dialog.CurrentNode);
			link.l1.go = DialogGoNodeRepeat("PL_Q2_2", "exit", "exit", "exit", npchar, Dialog.CurrentNode);
		break;
		case "PL_Q2_2":
			dialog.text = "Отчего ж не подсказать? подскажу, "+ GetSexPhrase("хорошему человеку","такой красивой девушке") +" и подсказать приятно.\nДом его найти совсем просто. Тебе нужно выйти из таверны, повернуть направо и пройти до упора. Обшитый досками дом и есть дом Эдварда Лоу.";
			link.l1 = "Спасибо тебе, приятель!";
			link.l1.go = "exit";
			AddQuestRecord("Pir_Line_2_BlackLabel", "2");
		break;
		//пиратка, квест №3, поиски Лоу
		case "PL_Q3_1":
			dialog.text = NPCStringReactionRepeat("Э-э-э, "+ GetSexPhrase("опоздал ты, приятель","опоздала ты, подруга") +". Он ушёл из города, совсем ушёл.",
				"Уже говорил тебе, что Лоу ушёл из города.",
				"Ушёл он, ушёл...",
                "Ох, и до чего же ты "+ GetSexPhrase("надоедливый","надоедливая") +"!", "block", 1, npchar, Dialog.CurrentNode);
			link.l1 = HeroStringReactionRepeat("Куда ушёл?",
				"Да, я помню.",
                "Да, "+ GetSexPhrase("запамятовал","запамятовала") +"...",
				""+ GetSexPhrase("Понял","Поняла") +", ухожу...", npchar, Dialog.CurrentNode);
			link.l1.go = DialogGoNodeRepeat("PL_Q3_2", "", "", "", npchar, Dialog.CurrentNode);
		break;
		case "PL_Q3_2":
			dialog.text = "Да кто ж его знает?  Все срочно распродал и ушёл... Главное, ведь бочонок-то не забрал, а так просил. Отложи, говорит, для меня бочонок Ямайского рому. Видать, торопился сильно. Ну ничего, бочонок-то я уже пристроил...";
			link.l1 = "Да погоди ты со своим бочонком. Ты лучше скажи, где мне его теперь искать?";
			link.l1.go = "PL_Q3_3";
		break;
		case "PL_Q3_3":
			dialog.text = "Ой, не знаю... Говорят, он корабль пошёл покупать. Ты народ поспрошай, может, кто чего видел, может, кто чего знает. А я-то не знаю, он ведь ко мне за бочонком-то не зашёл. А хороший бочонок был...";
			link.l1 = "Понятно... Спасибо тебе, дружище.";
			link.l1.go = "exit";
		break;

		case "Barmen_check":
			if (IsEquipCharacterByItem(Pchar, "patent_eng") || IsEquipCharacterByItem(Pchar, "patent_fra") || IsEquipCharacterByItem(Pchar, "patent_spa") || IsEquipCharacterByItem(Pchar, "patent_hol"))
			{
				dialog.text = "Вы не принадлежите к Береговому братству - вы патентованный капер. Я не могу вам довериться, извините.";
				link.l1 = "Эх, жаль!";
				link.l1.go = "exit";
				CloseQuestHeader("Headhunt");
				pchar.questTemp.Headhunter = "end_quest";
				break;
			}
			if (sti(Pchar.Rank) < 5)
			{
				dialog.text = "Кхм... Работа есть, но боюсь, она вам будет не по плечу. Не обижайтесь, я ведь просто не хочу, чтобы вы бессмысленно погибли. Приходите попозже, когда наберётесь больше опыта.";
				link.l1 = "Понятно. Ну что же, загляну к вам позднее.";
				link.l1.go = "exit";
				pchar.questTemp.Headhunter = "barmen_wait";
				break;
			}
			/* if (sti(Pchar.Rank) > 12)
			{
				dialog.text = "Гм... Извините, но я уже нашёл человека для выполнения этой работы. Так что не обессудьте, капитан.";
				link.l1 = "Ясно. Значит, не судьба. Прощайте.";
				link.l1.go = "exit";
				pchar.questTemp.Headhunter = "end_quest";
				break;
			} */
			dialog.text = "Вы очень вовремя! Мне нужен именно такой капитан, как вы. Позвольте мне рассказать суть проблемы, а потом уже перейдём непосредственно к заданию.";
			link.l1 = "Слушаю вас внимательно, "+ npchar.name +".";
			link.l1.go = "barmen_history";
		break;

		case "barmen_history":
			dialog.text = "В общем, история такова. Как вам наверное, известно, каждое поселение охотников и буканьеров имеет своего главу. В Ла Веге заправляет Эдвард Мэнсфилд, в Пуэрто-Принсипе - Соукинс, на Бермудах - правая рука Моргана, Джекмен, а у нас - Бартоломью Роджерс. Каждый глава поселения известен и уважаем в Береговом братстве и занимает свои посты уже давно\nОднако всё имеет своё начало и свой конец. Пришёл конец и спокойному существованию в нашем поселении. Шайка отъявленных мерзавцев и головорезов решила воспользоваться ситуацией и прибрать Ле Франсуа к своим рукам.  Они не только запугивают рыбаков и поселенцев, собирая с них дань, но и заставляют более... достойных людей, отчислять им свои прибыли!\nИ эти, достойные персоны, ничего не могут поделать... Понимаете, капитан? А наш глава, Бартоломью Роджерс, то ли не видит этого, то ли предпочитает не видеть - мне неясно\nОдно лишь совершенно очевидно - что несмотря на поступавшие жалобы, он не предпринял никаких действий. Более того, он обвинил проявивших недовольство людей в том, что они пытаются выклянчить себе понижение отчислений в казну Берегового братства\nМорган далеко и занят политическими интригами в Порт-Рояле, Мэнсфилда не интересует ничего, кроме его буканьеров, Соукинс погряз в распрях внутри братства, а Джекмену вообще на всё плевать, кроме полноты своего кошеля! Таким образом, мы все остались отданы на растерзание кучке грязных проходимцев\nБолее того, упомянутые достойные люди уверены, что все происходящее лишь начало, первый шаг к переделу влияния на Мартинике. Следующим будет смещение самого Роджерса, а дальше - неизвестно.";
			link.l1 = "Гм... А почему бы этим достойным людям, о которых вы говорите, не отправить посыльного к Моргану, чтобы он довёл до сведения адмирала о том произволе, что здесь творится?";
			link.l1.go = "barmen_history_1";
		break;

		case "barmen_history_1":
			dialog.text = "Эх, судар"+ GetSexPhrase("ь","ыня") +", если бы все было так просто. Моргану сейчас нет никакого дела, что творится в нашем Богом забытом поселении. Его внимание пытались привлечь и не раз, но результата – никакого\nПоэтому, притесняемые негодяями достойные люди, решили действовать самостоятельно. Они ищут человека, пирата, не имеющего известности в Береговом Братстве, и готовы ему достойно заплатить.";
			link.l1 = "Я так понимаю, мы уже переходим непосредственно к обсуждению моей роли в планируемой кампании?";
			link.l1.go = "barmen_history_2";
		break;

		case "barmen_history_2":
			dialog.text = "Да, именно так. Поскольку главы пиратов бездействуют, а мириться с существующим положением дел нет никакой возможности, было решено ответить мерзавцам на их же языке. Разыскать и уничтожить по одному всю банду\nИменно за этим я и ищу подходящего человека. Вы готовы ввязаться в это дело? Оплата будет щедрой, я вам гарантирую.";
			link.l1 = "То есть как я понял"+ GetSexPhrase("","a") +", мне придётся побыть кем-то вроде охотника за головами?";
			link.l1.go = "barmen_history_3";
		break;

		case "barmen_history_3":
			dialog.text = "Именно так. Вы ведь не боитесь вида крови? Особенно, если эта кровь будет сполна оплачена, и не только золотом.";
			link.l1 = "Можно узнать размер вознаграждения, прежде чем я дам своё согласие?";
			link.l1.go = "barmen_history_4";
		break;

		case "barmen_history_4":
			dialog.text = "Безусловно. Уважаемые и достойные люди, о которых я вам столь долго рассказывал, предлагают в награду тому, кто выследит и отправит в преисподнюю всех мерзавцев, сумму денег в размере ста тысяч пиастров и великолепный комплект оружия и снаряжения, в который входят танат, мушкет, эксклюзивная подзорная труба, офицерская кираса и крысобог. Что скажете?";
			link.l1 = "Да, вознаграждение солидное. Пожалуй, я берусь за это дело.";
			link.l1.go = "barmen_history_5";
			link.l2 = "И всего-то? Вы хотите, чтобы я за эти гроши и жалкие побрякушки противостоял"+ GetSexPhrase("","a") +" банде, подмявшей под себя целое поселение? Ищите дурака в другом месте.";
			link.l2.go = "exit_quest";
		break;

		case "exit_quest":
			dialog.text = "Жаль. Похоже, я в вас ошибся. Тогда забудем об этом разговоре.";
			link.l1 = "Всего доброго.";
			link.l1.go = "exit";
			pchar.questTemp.Headhunter = "end_quest";
			CloseQuestHeader("Headhunt");
		break;

		case "barmen_history_5":
			dialog.text = "Великолепно! Я очень рад, что вы согласились. Кроме означенного вознаграждения за всю работу, мне положено выдавать вам некое вознаграждение за каждого по отдельности из членов банды, чтобы хотя бы частично компенсировать ваши накладные расходы\nНегодяи редко собираются вместе, да и напасть на них в таком случае было бы слишком рискованно. Потому вы будете выслеживать их по одному.";
			link.l1 = "Ну, давайте перейдём к делу. Расскажите поподробнее, что вы знаете об этой банде? Может, будут какие советы?";
			link.l1.go = "barmen_history_6";
		break;

		case "barmen_history_6":
			dialog.text = "Конечно. Справиться с ними, даже указанным образом, будет крайне сложно и опасно, потому – вам будет предоставлено всяческое содействие в плане информации. Через мою скромную персону вы будете получать сведения о местонахождении негодяев и устранять их порознь\nЭто не только наёмники и пиратские капитаны, но и вовсе странные личности, промышляющие своими тёмными делишками в нашей мутной воде. Во главе их стоит некий Джа Престон. Ходят слухи, что именно он является капитаном неуловимого фрегата 'Ахерон', бича карибских торговцев, что у всех на устах последнее время. И я имею все основания полагать, что это именно так.";
			link.l1 = "Выходит, список жертв будет длинным...";
			link.l1.go = "barmen_history_7";
		break;

		case "barmen_history_7":
			dialog.text = "Да. Хотя на деле он ещё больше – ведь у многих есть свои корабли с полными командами отчаянных головорезов, а один из них – его имя вам пока ничего не скажет – и вовсе является персоной, приближенной к властям, с очень и очень серьёзными связями. Но, повторюсь, их можно изловить поодиночке\nОни постоянно перемещаются по Карибам, так что выследить их не самое простое занятие. Но в моей таверне много моряков и много рома, а это значит - что у меня много пьяных болтливых моряков, хе-хе... Так что я смогу кое в чём вам помочь.";
			link.l1 = "Что же, пока мне все ясно. Можете и дальше не называть имена ваших этих 'достойных людей', но мои будущие жертвы меня куда более интересуют.";
			link.l1.go = "Givetaskhunt_1";
		break;

		case "Givetaskhunt_1":
			SelectCarlosCity();
			dialog.text = "Ну, тогда приступим. Первый, кого вам необходимо выследить – Карлос Кассир, он наёмник, и, насколько мне известно, обретается сейчас в городе " + pchar.questTemp.Headhunter.Cityname + ". Готов поставить свою таверну против дырявой шляпы: вы легко сможете найти этого мерзавца или в таверне, или в борделе - сейчас он, должно быть, спускает награбленные денежки на пойло и девок. Он убил человека, отказавшегося ему платить, здесь в поселении, и это, к слову, стало последней каплей\nКогда встретитесь с ним - постарайтесь обставить все так, чтобы это выглядело как дуэль - вы ведь не хотите проблем с властями, не так ли? Ради спасения своей шкуры Кассир пойдёт на что угодно – но сыграйте на его гордости, оскорбите и заставьте принять вызов, и не раскрывайте своих намерений – спугнёте раз, потом уже не сыщешь\nКлинком он владеет знатно, но помните – что бы вы не предприняли, не ждите от него честной игры, это наёмник, а не дворянин.";
			link.l1 = "Ну что же, тогда не буду терять времени. Выдвигаюсь в путь!";
			link.l1.go = "Givetaskhunt_1_1";
			pchar.questTemp.Headhunter = "hunt_carlos";
			pchar.questTemp.Headhunter.Chance = rand(1);
			CreateCarlos();
		break;

		case "Givetaskhunt_1_1":
			dialog.text = "Желаю вам удачи. И ещё: по любому вопросу, связанному с этим делом, обращайтесь только ко мне. Достойные люди... которым мы с вами помогаем, желали бы сохранить свои имена в тайне, на случай непредвиденных обстоятельств.";
			link.l1 = "Я все понял"+ GetSexPhrase("","а") +". До встречи, " + npchar.name + "!";
			link.l1.go = "exit";
            AddQuestRecord("Headhunt", "1");
			AddQuestUserData("Headhunt", "sCity", pchar.questTemp.Headhunter.Cityname);
			AddQuestUserData("Headhunt", "sSex", GetSexPhrase("","а"));
		break;

		case "Endtaskhunt_1":
			dialog.text = "Великолепно! Одним мерзавцем на этом свете стало меньше. Мы здесь подготовили компенсацию за ваши труды. Возьмите пять тысяч наличными и этот сундук с золотом. Приходите дней через десять - у меня должна будет появиться информация, которая сможет помочь вам в поиске следующего негодяя.";
			link.l1 = "Спасибо за золото! И до встречи через десять дней.";
			link.l1.go = "exit";
			pchar.questTemp.Headhunter = "next_task_2";
			SaveCurrentQuestDateParam("pchar.questTemp.Headhunter_next_task_2");
			AddMoneyToCharacter(pchar, 5000);
			TakeNItems(pchar, "chest", 1);
			Log_Info("Вы получили кредитный сундук");
			PlaySound("interface\important_item.wav");
			AddQuestRecord("Headhunt", "3");
		break;

		case "Givetaskhunt_2":
			if (IsEquipCharacterByItem(Pchar, "patent_eng") || IsEquipCharacterByItem(Pchar, "patent_fra") || IsEquipCharacterByItem(Pchar, "patent_spa") || IsEquipCharacterByItem(Pchar, "patent_hol"))
			{
				dialog.text = "Вы более не принадлежите к Береговому братству - теперь вы патентованный капер. Я не могу вам довериться, извините.";
				link.l1 = "Эх, жаль!";
				link.l1.go = "exit";
				CloseQuestHeader("Headhunt");
				pchar.questTemp.Headhunter = "end_quest";
				break;
			}
			pchar.questTemp.Headhunter.Chance = rand(4);
			pchar.questTemp.Headhunter.Chance1 = rand(1);
			SelectHoumCity();
			dialog.text = "Да. Как я уже говорил - от пьяных моряков можно узнать все, что угодно. Недавно мне удалось узнать кое-что о Ганнибале Холме. Это бывший раб, хитрый, коварный и безжалостный. Говорят, он по диким обычаям своего племени съедает сердца своих врагов... бр-р-р\nТак вот. Недавно он напал на голландский торговый караван, перевозивший серебро. Много добрых ясинеистов представилось Господу в том  жестоком бою. А сейчас он скрывается от голландцев в английских колониях\nТочнее, увы, сказать не могу – спрашивайте в портах про его судно – 'Мёртвая Голова'. Это заметная здоровенная посудина – я уверен, пропустить его будет сложно\nПолагаю, Холм уже купил себе место под солнцем у англичан за захваченное серебро, так что власти будут его прикрывать – будьте готовы.";
			link.l1 = "Задача ясна. Поднимаю якорь!";
			link.l1.go = "Givetaskhunt_2_1";
		break;

		case "Givetaskhunt_2_1":
			pchar.questTemp.Headhunter = "Houm";
			AddQuestRecord("Headhunt", "4");
			//Log_Info("Хоум в находится в "+pchar.questTemp.Headhunter.Cityname+"");
			DialogExit();
		break;


		case "Endtaskhunt_2":
			dialog.text = "Превосходно. Я рад, что не ошибся в вас. Вот ваша награда. Загляните ко мне недельки через две - мы с коллегами сейчас собираем информацию по третьему негодяю.";
			link.l1 = "Хорошо. Буду через две недели.";
			link.l1.go = "exit";
			pchar.questTemp.Headhunter = "next_task_3";
			SaveCurrentQuestDateParam("pchar.questTemp.Headhunter_next_task_3");
			AddMoneyToCharacter(pchar, 10000);
			TakeNItems(pchar, "chest", 2);
			Log_Info("Вы получили кредитные сундуки");
			PlaySound("interface\important_item.wav");
			AddQuestRecord("Headhunt", "9");
		break;

		case "Givetaskhunt_3":
			dialog.text = "Рад вас видеть, " + pchar.name + ". Следующее дело опасное как ни крути. Причём, здесь придётся действовать больше хитростью, нежели шпагой.";
			link.l1 = "Ну, я бы не сказал"+ GetSexPhrase("","а") +", что предыдущие два 'дела' были похожи на лёгкую прогулку... Слушаю вас внимательно.";
			link.l1.go = "Givetaskhunt_3_1";
		break;

		case "Givetaskhunt_3_1":
			if (IsEquipCharacterByItem(Pchar, "patent_eng") || IsEquipCharacterByItem(Pchar, "patent_fra") || IsEquipCharacterByItem(Pchar, "patent_spa") || IsEquipCharacterByItem(Pchar, "patent_hol"))
			{
				dialog.text = "Вы более не принадлежите к Береговому братству - теперь вы патентованный капер. Я не могу вам довериться, извините.";
				link.l1 = "Эх, жаль!";
				link.l1.go = "exit";
				CloseQuestHeader("Headhunt");
				pchar.questTemp.Headhunter = "end_quest";
				break;
			}
			dialog.text = "Очередной клиент - Матиас Грин, более известный, как Крыса. Мерзкий тип, на внешний вид - безобидный торговец, но на его совести уже не один десяток пропавших кораблей. Они просто исчезают, а потом по тавернам ползут слухи, что этот самый 'Крыса' до них добрался. Причём слухи с точным описанием груза, и самих кораблей\nЭтот негодяй скрывается отменно, но не забывает каждый раз пускать слухи о своих похождениях - тщеславен, мерзавец. Столь детально знать количество груза и описание пропавших кораблей, может лишь тот, кто был на них, и видел трюмы своими глазами... понимаете, куда я клоню? Притом, что живых свидетелей он не оставляет.";
			link.l1 = "Что-нибудь о местонахождении этого... Крысы сообщить можете?";
			link.l1.go = "Givetaskhunt_3_2";
		break;

		case "Givetaskhunt_3_2":
			dialog.text = "К сожалению, немного. Я даже не могу сказать, на каком корабле он ходит - Крыса частенько меняет посудины, заметая следы. Я могу лишь назвать порты из которых вышли последние три пропавших судна, и к исчезновению которых, как мы считаем, причастен Крыса – может, стоит там разузнать поподробнее о предшествовавших печальным событиям обстоятельствах\nГорода эти: Виллемстад, на Кюрасао, Картахена, что на Мэйне, и Порт-оф-Спейн, на острове Тринидад и Тобаго.";
			link.l1 = "Уже что-то! Думаю, мне пора отправляться в путь.";
			link.l1.go = "Givetaskhunt_3_3";
		break;

		case "Givetaskhunt_3_3":
			dialog.text = "Возьмите эту неприметную одежду - она поможет вам скрытно передвинаться во вражеских городах\nНу, и прежде, чем вы уйдёте, я хочу дать вам несколько советов. Матиас - хитрая бестия, попробуйте понять его, за чем и как он охотится. Предоставьте Крысе сделать ход, когда настигнете его\n Если вы проявите агрессию, власти могут счесть ваши действия беспричинным нападением, ведь вряд ли эта тварь ходит под Весёлым Роджером в открытую. Выманите его тем, что ему интересно, и бейте, когда он будет уверен, что победил\nНо запомните ещё одно: Крыса, даже загнанная в угол – может быть смертельно опасна. Вот, наверное, и все, капитан. Удачной охоты.";
			link.l1 = "Спасибо за разъяснения. Ждите меня с хорошими новостями.";
			link.l1.go = "exit";
			pchar.questTemp.Headhunter = "Rat";
			pchar.questTemp.Headhunter.count = 0;
			pchar.questTemp.Headhunter.countC = 0;
			pchar.questTemp.Headhunter.countV = 0;
			pchar.questTemp.Headhunter.countP = 0;
			AddQuestRecord("Headhunt", "11");
			TakeNItems(pchar, "suit_1", 1);
			Log_Info("Вы получили обноски");
			PlaySound("interface\important_item.wav");
		break;

		case "Endtaskhunt_3":
			dialog.text = "Отличная работа, " + pchar.name + ". Я искренне восхищён вами. Вы не только умеете драться, но и весьма хитры. Обмануть Крысу - это более, чем непростая задача. И тем не менее, вы с ней справились. Вот ваши деньги и небольшой подарок\nЗаходите через дней пятнадцать-двадцать - думаю, к этому моменту будет собрано уже достаточно сведений о местонахождении очередного негодяя.";
			link.l1 = "Спасибо! Буду в указанное время. Удачи!";
			link.l1.go = "exit";
			pchar.questTemp.Headhunter = "next_task_4";
			SaveCurrentQuestDateParam("pchar.questTemp.Headhunter_next_task_4");
			AddMoneyToCharacter(pchar, 20000);
			TakeNItems(pchar, "chest", 2);
			TakeNItems(pchar, "Totem_"+(rand(9)+1), 1);
			Log_Info("Вы получили кредитные сундуки");
			PlaySound("interface\important_item.wav");
			AddQuestRecord("Headhunt", "25");
		break;

		case "Givetaskhunt_4":
			if (IsEquipCharacterByItem(Pchar, "patent_eng") || IsEquipCharacterByItem(Pchar, "patent_fra") || IsEquipCharacterByItem(Pchar, "patent_spa") || IsEquipCharacterByItem(Pchar, "patent_hol"))
			{
				dialog.text = "Вы более не принадлежите к Береговому братству - теперь вы патентованный капер. Я не могу вам довериться, извините.";
				link.l1 = "Эх, жаль!";
				link.l1.go = "exit";
				CloseQuestHeader("Headhunt");
				pchar.questTemp.Headhunter = "end_quest";
				break;
			}
			dialog.text = "Новости есть. На этот раз, кстати, информация весьма чёткая. Мы выяснили, где в ближайшее время будет четвёртый член шайки - голландец Мартин ван Хален. В течение недели он должен прибыть из очередного пиратского рейда в Виллемстад. Вам нужно отправляться на Кюрасао...";
			link.l1 = "Ну что же, не придётся тратить время на мотание по архипелагу, как в прошлый раз. Это хорошо.";
			link.l1.go = "Givetaskhunt_4_1";
		break;

		case "Givetaskhunt_4_1":
			dialog.text = "Подождите, капитан, это ещё не все. Мартин ван Хален - не просто пират, а капер на службе Голландии, кроме того, он вхож к самому Стевезанту. Он покрывает остальных мерзавцев и предоставляет им связи в самых верхах общества. Сей вьюнош высокомерен и заносчив, однако при этом весьма осторожен. Не думаю, что он поддастся на какие-либо уловки\nВозможно, в данном случае придётся действовать просто грубой силой. Но будьте осторожны - если нападёте на Халена в открытую, вам придётся сражаться со всем гарнизоном Виллемстада.";
			link.l1 = "Хорошо, я учту это. До встречи, " + npchar.name + ".";
			link.l1.go = "exit";
			pchar.questTemp.Headhunter = "hunt_halen";
			AddQuestRecord("Headhunt", "26");
			SetFunctionTimerCondition("Headhunter_HalenOver", 0, 0, 10, false);
		break;

		case "Endtaskhunt_4":
			dialog.text = "Я рад. Чёрт возьми, как я рад, что вы согласились помочь нам. Вы поистине незаменимый человек, " + pchar.name + ". Вот ваша награда - деньги и подарок. И...";
			link.l1 = "Подождите, " + npchar.name + ". У нас появились проблемы. Точнее, у меня появились проблемы. Пока только у меня. Джа Престон каким-то образом узнал о том, КТО уничтожает его людей. В Виллемстаде меня пытались убить подосланные им наймиты.";
			link.l1.go = "Endtaskhunt_4_1";
			AddMoneyToCharacter(pchar, 25000);
			TakeNItems(pchar, "chest", 2);
			TakeNItems(pchar, "Totem_"+(rand(9)+1), 1);
			Log_Info("Вы получили кредитные сундуки");
			PlaySound("interface\important_item.wav");
		break;

		case "Endtaskhunt_4_1":
			dialog.text = "Господи, неужели... Неужели он прознал? Ну всё, тогда нам конец. Эти... убийцы - были от Джа? Как вы узнали, что их прислал именно он? Как они выглядели?";
			link.l1 = "Хех... Перед тем, как напасть на меня, они передали мне привет... от Джа Престона. Выглядели? Все в чёрном, в шляпах и с платками на физиономиях.";
			link.l1.go = "Endtaskhunt_4_2";
		break;

		case "Endtaskhunt_4_2":
			dialog.text = "Да. Это его люди. Нет никаких сомнений. А я-то уже начал надеятся...";
			link.l1 = "" + npchar.name + ", успокойтесь. Пока что Джа послал их только по мою душу, а я вполне могу за себя постоять. То, что вы ещё живы - означает, что и о вашем участии, и тех самых 'достойных людях', о которых вы говорили, ему пока неизвестно.";
			link.l1.go = "Endtaskhunt_4_3";
		break;

		case "Endtaskhunt_4_3":
			dialog.text = "Это ненадолго.";
			link.l1 = "Без сомнения. Он раскопает, кто стоял за всем этим. Надо немедленно наносить упреждающий удар. Пора заканчивать с этим делом – хватит гонятся за шавками, на очереди должен стоять сам Джа, иначе наши шансы выжить спускаются к ватерлинии. Нам просто необходимо выйти на Престона!";
			link.l1.go = "Endtaskhunt_4_4";
		break;

		case "Endtaskhunt_4_4":
			dialog.text = "Я располагаю сведениями относительно некоего Мико Пистольеро – это мулат-индеец, правая рука Джа. Точной информации собрать не удалось, но последний раз его видели на западном берегу Мейна. Предполагаю, что сейчас он находится в одном из поселений ловцов жемчуга\nЭто все, что мне известно. Возможно, вам удасться узнать больше от самого Пистольеро, когда его отыщете. Джа Престон - как обычно: неуловим.";
			link.l1 = "Информации достаточно. Немедленно отправляюсь в дорогу. А вам, " + npchar.name + ", я посоветую быть крайне осторожным, плотно закрывать на ночь двери и окна, и не выходить за городские ворота. Мне бы очень не хотелось потерять своего работодателя... До обещанной оплаты.";
			link.l1.go = "Givetaskhunt_5";
		break;

		case "Givetaskhunt_5":
			dialog.text = "Спасибо за заботу... Последую вашим рекомендациям. Касательно Пистольеро. Фехтовальщик он неважный, а вот стрелок - великолепный. Никогда не расстаётся со своим четырёхствольным пистолетом. Виртуозное обращение с этим оружием и дало ему прозвище. Будьте осторожны - он может превратить вас в решето, прежде чем вы успеете обнажить клинок.";
			link.l1 = "И не таких грозных видали... Ждите моего возвращения и берегите себя, " + npchar.name + "!";
			link.l1.go = "exit";
			pchar.questTemp.Headhunter = "hunt_miko";
			AddQuestRecord("Headhunt", "33");
			AddQuestUserData("Headhunt", "sSex", GetSexPhrase("ен","на"));
			CreateMiko();
		break;

		case "Endtaskhunt_5":
			dialog.text = "Уф-ф... Наконец-то можно вздохнуть полной грудью. " + pchar.name + ", я, да и все жители Ле Франсуа никогда не забудем того, что вы для нас сделали. Знайте - вам всегда здесь будут рады. Примите эти деньги и этот комплект амуниции, как и договаривались\nЕщё раз огромное спасибо. Вы даже не представляете, что для нас сделали. Заходите ко мне чаще - для вас всегда у меня будет самый лучший ром.";
			link.l1 = "Ладно вам уже, " + npchar.name + ", в краску меня вгонять! Я просто выполнил"+ GetSexPhrase("","а") +" условия нашего договора... А за амуницию спасибо, она мне очень пригодится. Да и деньги, конечно, тоже.";
			link.l1.go = "Endtaskhunt_5_1";
			AddMoneyToCharacter(pchar, 100000);
			TakeNItems(pchar, "blade28", 1);
			TakeNItems(pchar, "mushket", 1);
			TakeNItems(pchar, "spyglass5", 1);
			TakeNItems(pchar, "cirass4", 1);
			TakeNItems(pchar, "indian11", 1);
		break;

		case "Endtaskhunt_5_1":
			dialog.text = "Удачи вам, " + pchar.name + ". Пусть ветер для вас будет всегда попутным! Надеюсь, вы не забудете старого бармена, и будете заглядывать хоть иногда.";
			link.l1 = "Непременно, " + npchar.name + "! Мы ещё не раз увидимся. До встречи!";
			link.l1.go = "exit";
			AddQuestRecord("Headhunt", "39");
			AddQuestUserData("Headhunt", "sSex", GetSexPhrase("","а"));
			CloseQuestHeader("Headhunt");
			pchar.questTemp.Headhunter = "end_quest_full";
		break;
		//<--ОЗГ
	}
	UnloadSegment(NPChar.FileDialog2);  // если где-то выход внутри switch  по return не забыть сделать анлод
}

