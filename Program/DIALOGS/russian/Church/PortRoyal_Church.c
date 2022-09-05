// диалог по городам
void ProcessCommonDialogEvent(ref NPChar, aref Link, aref NextDiag)
{
    switch (Dialog.CurrentNode)
	{
		case "quests":
			dialog.text = NPCStringReactionRepeat(RandPhraseSimple("Какие вопросы, "+ GetSexPhrase("сын мой","дочь моя") +"?", "Спрашивай, я слушаю тебя..."), "Я слушаю тебя, говори, "+ GetSexPhrase("сын мой","дочь моя") +"...", "И в третий раз говорю тебе, "+ GetSexPhrase("сын мой","дочь моя") +": задавай свой вопрос.",
                          "Столько обязанностей у церковнослужителя, а тут ещё и ты донимаешь, "+ GetSexPhrase("сын мой","дочь моя") +"...", "block", 1, npchar, Dialog.CurrentNode);
			link.l1 = HeroStringReactionRepeat(RandPhraseSimple("Я передумал...", "Не сейчас, падре..."), "Да, пока особо и нечего сказать...",
                      "Задам, задам... Только позже...", "Простите, святой отец...", npchar, Dialog.CurrentNode);
			link.l1.go = "exit";
			if (pchar.questTemp.State == "MorrisWillams_ArrestedSeekInfo" || pchar.questTemp.State == "MorrisWillams_ArrestedSeekInfoFather")
            {
                link.l1 = "Святой отец, скажите мне, местный ростовщик ваш прихожанин?";
                link.l1.go = "Step_E6_1";
            }
			if (pchar.questTemp.PKM_SvtvA_PortRoyalChurch_1 == "Church1")		//Квест "Странные вещи творятся на архипелаге"
            {
                link.l1 = "Святой отец, я слышал, что вы тоже разыскиваете загадочный чёрный фрегат, который похитил детей на Сан Мартине.";
                link.l1.go = "PKM_SvtvA_Ch1_1";
            }
		break;
		//Квест "Странные вещи творятся на архипелаге"
		case "PKM_SvtvA_Ch1_1":
			dialog.text = "Похитили детей?! Хм. Я не знал про это.\nНо мы действительно обеспокоены, так как в Порт Рояле в одном из домов были обнаружены следы проведения языческого ритуала, и там же лежали мёртвые тела наших добрых законопослушных граждан. У каждого из них были зверски вырваны сердца...";
			link.l1 = "Что за монстры могли сотворить такое?";
			link.l1.go = "PKM_SvtvA_Ch1_2";
		break;
		case "PKM_SvtvA_Ch1_2":
			dialog.text = "Если вам действительно небезразлично всё это, то может быть вы могли бы выполнить моё поручение?\nВаша информация про детей проливает кое-какой свет на эту картину.\nЯ хочу, чтобы вы доставили письмо на Пуэрто-Рико, и передали его лично в руки человеку, которого зовут падре Домингес. Вы найдёте его в соборе, и он даст вам дальнейшие указания, если сочтёт нужным.";
			link.l1 = "Это довольно простое задание. Я немедленно отправляюсь, Святой отец.";
			link.l1.go = "PKM_SvtvA_Ch1_3";
		break;
		case "PKM_SvtvA_Ch1_3":
			dialog.text = "Не спешите, "+ GetSexPhrase("сын мой","дочь моя") +". Человек, который должен был отвезти письмо сегодня, был найден умирающим на пороге своего дома\nВсё, что он успел сказать перед смертью, было то, что на него напали какие-то люди в красных рясах, вооруженные кинжалами.\nУ меня есть основания полагать, что дело тут не чисто - кто-то явно не хочет, чтобы письмо было доставлено.";
			link.l1 = "Стало быть, и меня могут попробовать перехватить по дороге?";
			link.l1.go = "PKM_SvtvA_Ch1_4";
		break;
		case "PKM_SvtvA_Ch1_4":
			dialog.text = "Да, боюсь, что вы правы, поэтому, если вы откажитесь доставить письмо, я вас пойму.";
			link.l1 = "Не вижу причин, по которым мне пришлось бы отказаться от этого дела.";
			link.l1.go = "PKM_SvtvA_Ch1_5";
		break;
		case "PKM_SvtvA_Ch1_5":
			dialog.text = "Вот и отлично. Итак, вот письмо, вы должны доставить его священнику по имени падре Домингес и только ему. Вы сможете найти его на Пуэрто Рико\nТакже я вам выдам документ, который позволит вам находиться в Пуэрто-Рико на законных основаниях.\nИ умоляю вас - не заходите в порт. Высадитесь где-нибудь в укромной бухте, чтобы вас никто не видел. Это письмо имеет большую важность.";
			link.l1 = "Хорошо. не думаю, что это займет у меня слишком много времени.";
			link.l1.go = "PKM_SvtvA_Ch1_6";
		break;
		case "PKM_SvtvA_Ch1_6":
			DialogExit();
			AddQuestRecord("PKM_Animists", "8");
		break;
		
        case "Step_E6_1":
			dialog.text = "Да, он посещает церковь, но очень редко.";
			link.l1 = "Что он за человек?";
			link.l1.go = "Step_E6_2";
		break;

        case "Step_E6_2":
			dialog.text = "Мне сложно говорить о людях плохо.\n"+
                          "Я бы посоветовал тебе обратиться к одной нашей прихожанке Джиллиан Эттербери. Мне известно, что у неё серьёзные проблемы как раз с этим человеком. Возможно, вы сможете ей даже в чём-то помочь.\n"+
                          "Джиллиан хорошая прихожанка, как правило она бывает в церкви часов с одиннадцати утра ежедневно и молится в течение двух-трёх часов.\n"+
                          "А вообще её в городе можно встретить.";
			link.l1 = "Спасибо, святой отец.";
			link.l1.go = "exit";
			pchar.questTemp.State = "MorrisWillams_ArrestedSeekInfoWomen";
			AddQuestRecord("Eng_Line_6_MorrisWillams", "19");
			AddQuestUserData("Eng_Line_6_MorrisWillams", "sSex", GetSexPhrase("","а"));
            ref sld = GetCharacter(NPC_GenerateCharacter("Gillian Atterbury", "girl_8", "woman", "towngirl", 5, ENGLAND, 100, false));
        	sld.name 	= "Джиллиан";
        	sld.lastname = "Эттербери";
        	LAi_SetCitizenType(sld);
            sld.Dialog.Filename = "Quest\EngLineNpc_2.c";
            LAi_group_MoveCharacter(sld, "ENGLAND_CITIZENS");
           	ChangeCharacterAddressGroup(sld, "PortRoyal_town", "goto", "goto1");
			LAi_SetFanatic(sld, "PortRoyal_church", "sit", "sit1", 11.0, 14.0);
		break;
	}
	UnloadSegment(NPChar.FileDialog2);  // если где-то выход внутри switch  по return не забыть сделать анлод
}

