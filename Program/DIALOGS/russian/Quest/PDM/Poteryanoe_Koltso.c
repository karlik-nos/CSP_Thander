
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

		case "First time":							//Автор Sinistra
			dialog.text = "Вы не видели моё кольцо, "+ GetSexPhrase("месье","мадемуазель") +"?";
			link.l1 = "Прошу прощения, мадам?";
			link.l1.go = "Starshka_1";
			PlayVoice("Kopcapkz\Voices\PDM\Old Woman.wav");
		break;

		case "Starshka_1":
			dialog.text = "Я потеряла кольцо... Вы его не видели?";
			link.l1 = "Я не совсем уверен"+ GetSexPhrase("","а") +"... Что это было за кольцо?";
			link.l1.go = "Starshka_2";
		break;

		case "Starshka_2":
			dialog.text = "О, "+ GetSexPhrase("месье","мадемуазель") +", это было очень ценное кольцо... оно было очень дорогим... мне так жаль, что я его потеряла...";
			link.l1 = "Дорогое, говорите? В нём был драгоценный камень или что-нибудь в этом роде?";
			link.l1.go = "Starshka_3";
		break;

		case "Starshka_3":
			dialog.text = "Ха-ха-ха!!! Конечно! Там был камень! Алмаз! Да, это был алмаз. Или, может быть, рубин... нет, нет, нет - это был изумруд... точно, изумруд, на золотом кольце... или это был топаз... Ха-ха-ха!";
			link.l1 = "Мадам, я не смогу найти ваше кольцо без точного описания... Всего доброго.";
			link.l1.go = "Starshka_4";
			NextDiag.TempNode = "Starshka_5";
			DeleteAttribute(npchar, "talker");
		break;

		case "Starshka_4":
			SetQuestHeader("PDM_Poteryanoe_Koltso");
			AddQuestRecord("PDM_Poteryanoe_Koltso", "1");
			AddQuestUserData("PDM_Poteryanoe_Koltso", "sSex", GetSexPhrase("","а"));

			pchar.questTemp.PDM_PK_UznatLichnost = "UznatLichnost";

			NextDiag.CurrentNode = NextDiag.TempNode;
			DialogExit();
		break;

		case "Starshka_5":
			dialog.text = "Вы не видели моё кольцо, "+ GetSexPhrase("месье","мадемуазель") +"?";
			link.l1 = "О, нет, мадам. Я пока ещё не "+ GetSexPhrase("нашёл","нашла") +" его.";
			link.l1.go = "exit";
			PlayVoice("Kopcapkz\Voices\PDM\Old Woman.wav");
		break;

		case "Francheska":
			dialog.text = "Эй, "+ GetSexPhrase("моряк","морячка") +"? Я Франческа. Хочешь, мы с тобой уединимся, и ты расскажешь мне о своих путешествиях и великих подвигах? (улыбаясь) И покажешь...";
			link.l1 = "Хммм... Я мог"+ GetSexPhrase("","ла") +" бы. Но, я думаю, сперва ты расскажешь мне о своём кольце.";
			link.l1.go = "SrazuProKoltso";
			link.l2 = "Да, я многое могу порассказать о моих приключениях. Думаю, моя история тебе понравится, Франческа. В одной колонии живёт женщина. Довольно давно она потеряла своего сына...";
			link.l2.go = "Istoria";
			PlayVoice("Kopcapkz\Voices\PDM\Francesca.wav");
			pchar.questTemp.PDM_PK_UvestiNaVerh = "UvestiNaVerh";
		break;

		case "SrazuProKoltso":
			dialog.text = "Какое кольцо? Нет у меня никаких колец! Уходи, уходи!";
			link.l1 = "Хорошо, я ухожу.";
			link.l1.go = "exit";
			link.l2 = "Дай мне кольцо, а не то я разукрашу твоё хорошенькое личико моим ножиком!";
			link.l2.go = "Krik";
			link.l3 = "Пойми, это кольцо мне нужно для бедной женщины, которая...";
			link.l3.go = "Krik";
			NextDiag.TempNode = "Uhodi";
		break;

		case "Krik":
			dialog.text = "Aaaaaaaaaaaa!!!! (ужасный крик)";
			link.l1 = "Хватит! Хватит! Сейчас стража прибежит... Хорошо, я ухожу.";
			link.l1.go = "exit";
			ChangeCharacterReputation(pchar, -2);
		break;

		case "Uhodi":
			dialog.text = "Кольцо моё хочешь? Нет у меня никаких колец! Уходи прочь, прочь!";
			link.l1 = "Ладно, пойду к твоей хозяйке.";
			link.l1.go = "exit";
		break;

		case "Istoria":
			dialog.text = "Это грустная история! Грустные истории мне не нравятся, "+ GetSexPhrase("милый","милая") +". Лучше расскажи мне что-нибудь смешное!";
			link.l1 = "Нет, Франческа, сначала я закончу эту. Та женщина, как я уже сказал"+ GetSexPhrase("","а") +", потеряла своего сына, и когда пришло известие о его смерти, она сошла с ума. Она подарила своему мальчику на память один подарок. И вот в своём безумии она вообразила, что потеряла этот талисман... только талисман, а не сына. Мне бы хотелось вернуть ей эту вещь. Я думаю, что она невообразимо страдает...";
			link.l1.go = "Istoria_2";
		break;

		case "Istoria_2":
			dialog.text = "(всхлип) Она напоминает мне мою маму! Моя мама всегда путала меня с соседской девочкой - её тоже звали Франческа (всхлип). О чём это мы говорили? А, волшебная вещь! Талисман! Что это был за талисман?";
			link.l1 = "Это было кольцо. Ты ведь знаешь, кольца часто используются как талисманы.";
			link.l1.go = "Istoria_3";
		break;

		case "Istoria_3":
			dialog.text = "Ой! Посмотри, у меня тоже есть кольцо. Может, оно ВОЛШЕБНОЕ? Мне его дал добрый, хороший мужчина. Вот. Скажи, это ВОЛШЕБНОЕ кольцо?";
			link.l1 = "О, боже! Невероятно! Это то самое ВОЛШЕБНОЕ кольцо, которое потеряла женщина! Если ты вернёшь мне это кольцо, я отнесу его женщине.";
			link.l1.go = "Volshebnoe";
			link.l2 = "Что ты, нет, конечно нет, Франческа. Каждому ясно, что это самое ОБЫКНОВЕННОЕ кольцо. Если ты вернёшь мне это кольцо, я отнесу его женщине.";
			link.l2.go = "Obichnoe";
		break;

		case "Obichnoe":
			dialog.text = "Я не хочу кольцо мёртвого человека, тем более оно не ВОЛШЕБНОЕ. Вот, возьми его.";
			link.l1 = "Спасибо. Ты очень хорошая девушка, Франческа! Я обещаю тебе, что в один прекрасный день я вернусь и расскажу тебе длинную историю о моих приключениях. А теперь мне надо идти.";
			link.l1.go = "Pomenyt";
			AddCharacterExpToSkill(pchar, "Leadership", 250);
			AddCharacterExpToSkill(pchar, "Sneak", 250);
			ChangeCharacterReputation(pchar, 5);
			LAi_CharacterDisableDialog(npchar);
			npchar.lifeday = 0;

			DeleteAttribute(pchar, "questTemp.PDM_PK_UvestiNaVerh");
			GiveItem2Character(PChar, "PDM_PK_Koltso");
			AddQuestRecord("PDM_Poteryanoe_Koltso", "4");
			AddQuestUserData("PDM_Poteryanoe_Koltso", "sSex", GetSexPhrase("","а"));
		break;

		case "Volshebnoe":
			dialog.text = "Это кольцо? Но это ВОЛШЕБНОЕ кольцо! Как я могу его тебе отдать?";
			link.l1 = "Я только хочу вернуть его настоящей владелице. Сама подумай, разве такое ВОЛШЕБНОЕ кольцо принесёт тебе счастье?";
			link.l1.go = "Kupit";
		break;

		case "Kupit":
			dialog.text = "Двадцать тысяч миллионов! И не меньше, за ВОЛШЕБНОЕ-то кольцо! Кольцо ВОЛШЕБНОЕ! Ты сам так сказал, а значит оно должно стоить очень-очень много! Очень!";
			link.l1 = "Вот. (дать ей двадцать)";
			link.l1.go = "Kupit_20";
			link.l2 = "Вот. (дать ей двадцать тысяч)";
			link.l2.go = "Kupit_20000";
			link.l3 = "Вот. (дать ей двадцать миллионов)";
			link.l3.go = "Kupit_20000000";
			link.l4 = "Послушай, у меня сейчас нет при себе таких денег - но я принесу их тебе попозже...";
			link.l4.go = "exit";
			NextDiag.TempNode = "Popitka_Vtoraya";
		break;

		case "Kupit_20":
			dialog.text = "Двадцать тысяч миллионов! У меня есть двадцать тысяч миллионов!!! Вот, возьми кольцо.";
			link.l1 = "Спасибо. Я уверен"+ GetSexPhrase("","а") +", что теперь ты сможешь купить дворец губернатора. До свидания.";
			link.l1.go = "Pomenyt";
			AddMoneyToCharacter(pchar, -20);
			NextDiag.TempNode = "UNasKoltso";

			DeleteAttribute(pchar, "questTemp.PDM_PK_UvestiNaVerh");
			GiveItem2Character(PChar, "PDM_PK_Koltso");
			AddQuestRecord("PDM_Poteryanoe_Koltso", "4");
			AddQuestUserData("PDM_Poteryanoe_Koltso", "sSex", GetSexPhrase("","а"));
		break;

		case "Kupit_20000":
			if (sti(pchar.Money) >= 20000)
			{
				dialog.text = "Это только тысяча! Хочешь меня обмануть!!! Aaaaaaaaaaaa!!!! (ужасный крик)";
				link.l1 = "Хватит! Хватит! Сейчас стража придёт... Ладно, я ухожу.";
				link.l1.go = "exit";
				ChangeCharacterReputation(pchar, -1);
			}
			else
			{
				dialog.text = "";
				link.l1 = "Послушай, у меня сейчас нет при себе таких денег - но я принесу их тебе попозже...";
				link.l1.go = "exit";
			}
		break;

		case "Kupit_20000000":
			if (sti(pchar.Money) >= 20000000)
			{
				dialog.text = "Это только миллион! Хочешь меня обмануть!!! Aaaaaaaaaaaa!!!! (ужасный крик)";
				link.l1 = "Хватит! Хватит! Сейчас стража придёт... Ладно, я ухожу.";
				link.l1.go = "exit";
				ChangeCharacterReputation(pchar, -1);
			}
			else
			{
				dialog.text = "";
				link.l1 = "Послушай, у меня сейчас нет при себе таких денег - но я принесу их тебе попозже...";
				link.l1.go = "exit";
			}
		break;

		case "Popitka_Vtoraya":
			dialog.text = "Ой, это ты. Расскажешь мне историю?";
			link.l1 = "Нет. Я приш"+ GetSexPhrase("ёл","ла") +" за кольцом.";
			link.l1.go = "Popitka_Vtoraya_2";
		break;

		case "Popitka_Vtoraya_2":
			dialog.text = "Ты прин"+ GetSexPhrase("ёс","есла") +" мне двадцать тысяч миллионов за ВОЛШЕБНОЕ кольцо?";
			link.l1 = "Вот - (дать ей двадцать).";
			link.l1.go = "Kupit_20";
			link.l2 = "Вот - (дать ей двадцать тысяч).";
			link.l2.go = "Kupit_20000";
			link.l3 = "Вот - (дать ей двадцать миллионов).";
			link.l3.go = "Kupit_20000000";
			link.l4 = "Послушай, у меня сейчас нет при себе таких денег - но я принесу их тебе попозже...";
			link.l4.go = "exit";
		break;

		case "UNasKoltso":
			dialog.text = "Эй, моря"+ GetSexPhrase("к","чка") +"! У меня есть двадцать тысяч миллионов! Знаешь, откуда они у меня??";
			link.l1 = "Конечно! Я их тебе дал"+ GetSexPhrase("","а") +".";
			link.l1.go = "UNasKoltso_2";
			link.l2 = "Этот вопрос меня не интересует.";
			link.l2.go = "UNasKoltso_3";
		break;

		case "UNasKoltso_2":
			dialog.text = "Да, это был"+ GetSexPhrase("","а") +" ты! Теперь я куплю дворец губернатора! И я приглашаю тебя в гости!";
			link.l1 = "Спасибо, Франческа, очень рад"+ GetSexPhrase("","а") +" за тебя.";
			link.l1.go = "exit";
			LAi_CharacterDisableDialog(npchar);
			npchar.lifeday = 0;
		break;

		case "UNasKoltso_3":
			dialog.text = "Тогда уходи! Я тебе не расскажу, что я сделала со своими двадцатью тысячами миллионов!";
			link.l1 = "До встречи, Франческа.";
			link.l1.go = "exit";
			LAi_CharacterDisableDialog(npchar);
			npchar.lifeday = 0;
		break;

		case "Pomenyt":
			sld = CharacterFromID("Josephine_Lodet")
			sld.dialog.currentnode   = "Konets";
			NextDiag.CurrentNode = NextDiag.TempNode;
			DialogExit();
		break;

		case "NaVerhuSFrancheska":
			dialog.text = "Проходи, не стесняйся, чувствуй себя как дома на ближайшие два часа.";
			link.l1 = "Нет, Франческа, тебе отсюда не уйти живой.";
			link.l1.go = "UbitEE";
			link.l2 = "Иди ко мне, моя рыбка.";
			link.l2.go = "TrahEE";
			PlayVoice("Kopcapkz\Voices\PDM\Francesca.wav");
			npchar.lifeday = 0;
		break;

		case "TrahEE":
			AddDialogExitQuest("PlaySex_1");
			GiveItem2Character(pchar, "PDM_PK_Koltso");
			chrDisableReloadToLocation = false;
			sld = CharacterFromID("Josephine_Lodet")
			sld.dialog.currentnode   = "Konets";
			sld = CharacterFromID("PDM_PK_Francheska")
			sld.dialog.currentnode   = "PosleTraha";

			AddCharacterExpToSkill(pchar, "Sneak", 300);
			AddCharacterExpToSkill(pchar, "Leadership", 100);
			AddCharacterExpToSkill(pchar, "Fortune", 100);
			AddCharacterHealth(pchar, 10);

			AddQuestRecord("PDM_Poteryanoe_Koltso", "5");
			AddQuestUserData("PDM_Poteryanoe_Koltso", "sSex", GetSexPhrase("","а"));
			DialogExit();
		break;

		case "PosleTraha":
			dialog.text = "Так не хочется тебя отпускать, "+ GetSexPhrase("мой","моя") +" "+ GetSexPhrase("рыцарь","валькирия") +".";
			link.l1 = "Прощай, Франческа.";
			link.l1.go = "exit";
			PlayVoice("Kopcapkz\Voices\PDM\Francesca.wav");
			LAi_CharacterDisableDialog(npchar);
		break;

		case "UbitEE":
			LAi_LocationFightDisable(loadedLocation, false);
			Lai_SetPlayerType(pchar);
			LAi_SetFightMode(pchar, true);

			sld = CharacterFromID("PDM_PK_Francheska")
			LAi_SetHP(sld, 20.0, 20.0);
			LAi_SetImmortal(sld, false);
			sld.SaveItemsForDead = true
			RemoveAllCharacterItems(sld, true);
			GiveItem2Character(sld, "PDM_PK_Koltso");
			LAi_SetActorType(sld); 
			LAi_ActorAnimation(sld, "afraid", "", 4.5);

			PChar.quest.PDM_PK_Ubita.win_condition.l1 = "item";
			PChar.quest.PDM_PK_Ubita.win_condition.l1.item = "PDM_PK_Koltso";
			PChar.quest.PDM_PK_Ubita.win_condition = "PDM_PK_Ubita";

			DialogExit();
		break;

		case "Konets":
			dialog.text = "Вы не видели моё кольцо, "+ GetSexPhrase("месье","мадемуазель") +"? Я потеряла кольцо. Оно должно быть где-то здесь. Мне так неловко, я с трудом могу вспомнить... Иногда мне кажется, что я потеряла что-то ещё... Что-то, что я забыла...";
			link.l1 = "Да, я знаю, что вы потеряли. Я прин"+ GetSexPhrase("ёс","есла") +" вам ваше кольцо, мадам. Его сняли с тела вашего сына - который погиб во время сражения у стен Санто-Доминго. Вот, возьмите ваше кольцо.";
			link.l1.go = "Konets_2";

			PlayVoice("Kopcapkz\Voices\PDM\Josephine Lodet.wav");
		break;

		case "Konets_2":
			CloseQuestHeader("PDM_Poteryanoe_Koltso");
			TakeItemFromCharacter(pchar, "PDM_PK_Koltso");
			dialog.text = "Моё кольцо... я помню это кольцо... Я отдала его кому-то, кто должен был его вернуть. Он должен был вернуться... Мой Жак... О...";
			link.l1 = "Жизнь не кончается, мадам. Я думаю, вам надо найти ваших родственников, я уверен"+ GetSexPhrase("","а") +", что они очень по вам скучают. До свидания.";
			link.l1.go = "Nagrada";
		break;

		case "Nagrada":
			AddCharacterExpToSkill(pchar, "Sailing", 100);
			AddCharacterExpToSkill(pchar, "Leadership", 100);
			ChangeCharacterReputation(pchar, 2);
			sld = CharacterFromID("Josephine_Lodet")
			sld.dialog.filename   = "Common_citizen.c";
			sld.dialog.currentnode = "First Time";

			DialogExit();
		break;
	}
}
