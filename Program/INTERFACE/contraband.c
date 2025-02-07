////    контрабанда
string 	totalInfo = "";
int  	TableSelect = 0;
int		nCurScrollNum = 0;
int 	iShipCapacity;
int 	iTotalSpace;
float 	fShipWeight, fStoreWeight;
int 	iMaxGoodsStore = 50000;
bool nocheck = true;


bool 	bShowChangeWin = false;
int  	BuyOrSell = 0; // 1-buy -1 sell
string 	sChrId;
ref 	refStore, refCharacter, refShipChar, refContraChar;
int 	iShipQty, iStoreQty, iShipPrice, iStorePrice, iUnits;
float 	fWeight;
int  	iCurGoodsIdx;
bool 	ok; // for if

#define FIS_ALL		0		// Normal
#define FIS_SHIP	1		// Show ship
#define FIS_STORE	2		// Show store
int FIS_FilterState = 0;

void InitInterface_RR(string iniName, ref ContraTrader , ref pStore)
{
 	StartAboveForm(true);
	pchar.contratradedmoney = 0;
	sld = CharacterFromId(PChar.CurrentSmuggler);
	pchar.Goods.Store.Contraband = true;
	//Log_Info(pchar.Goods.Store.Contraband);
    refStore 		= pStore;
	refCharacter 	= pchar;
	refContraChar	= ContraTrader;

	GameInterface.TABLE_LIST.hr.td1.str = XI_ConvertString("In the hold");
	GameInterface.TABLE_LIST.hr.td1.scale = 0.9;
	GameInterface.TABLE_LIST.hr.td2.str = "Вес";
	GameInterface.TABLE_LIST.hr.td2.scale = 0.9;
	GameInterface.TABLE_LIST.hr.td3.str = XI_ConvertString("Price sell");
	GameInterface.TABLE_LIST.hr.td3.scale = 0.9;
	GameInterface.TABLE_LIST.hr.td4.str = XI_ConvertString("Good name");
	GameInterface.TABLE_LIST.hr.td4.scale = 0.9;
	GameInterface.TABLE_LIST.hr.td5.str = XI_ConvertString("Price buy");
	GameInterface.TABLE_LIST.hr.td5.scale = 0.9;
	GameInterface.TABLE_LIST.hr.td6.str = XI_ConvertString("In the contra");
	GameInterface.TABLE_LIST.hr.td6.scale = 0.9;
	GameInterface.TABLE_LIST.hr.td7.str = "Пачка";
	GameInterface.TABLE_LIST.hr.td7.scale = 0.9;
	GameInterface.TABLE_LIST.hr.td8.str = "Вес пачки";
	GameInterface.TABLE_LIST.hr.td8.scale = 0.9;

    FillShipsScroll();

	SendMessage(&GameInterface,"ls",MSG_INTERFACE_INIT,iniName);

	if (checkattribute(pchar, "ContraFilter")) FIS_FilterState = sti(pchar.ContraFilter); else FIS_FilterState = 0;
	switch (FIS_FilterState)
	{
	case FIS_ALL: SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_ALL", 2, 1, 1); break;
	case FIS_SHIP: SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_SHIP", 2, 1, 1); break;
	case FIS_STORE: SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_STORE", 2, 1, 1); break;
	}

	CreateString(true,"ShipName","",FONT_NORMAL,COLOR_MONEY, 405,108,SCRIPT_ALIGN_CENTER,1.0);

    SetShipWeight();
	SetDescription();
	SetFormatedText("INFO_TEXT",totalInfo);

	SendMessage(&GameInterface,"lsl",MSG_INTERFACE_MSG_TO_NODE,"INFO_TEXT",5);

	SetEventHandler("InterfaceBreak","ProcessBreakExit",0);
	SetEventHandler("exitCancel","ProcessCancelExit",0);
	SetEventHandler("ievnt_command","ProcCommand",0);
	SetEventHandler("evntDoPostExit","DoPostExit",0);

	SetEventHandler("OnTableClick", "OnTableClick", 0);
	SetEventHandler("MouseRClickUP","EndTooltip",0);
	SetEventHandler("ShowHelpHint", "ShowHelpHint", 0);
	SetEventHandler("ShowItemInfo", "ShowItemInfo", 0);
	SetEventHandler("TableSelectChange", "CS_TableSelectChange", 0);
	SetEventHandler("TransactionOK", "TransactionOK", 0);
	SetEventHandler("confirmChangeQTY_EDIT", "confirmChangeQTY_EDIT", 0);

	SetEventHandler("ADD_ALL_BUTTON", "ADD_ALL_BUTTON", 0);
	SetEventHandler("ADD_BUTTON","ADD_BUTTON",0);
	SetEventHandler("REMOVE_BUTTON", "REMOVE_BUTTON", 0);
	SetEventHandler("REMOVE_ALL_BUTTON", "REMOVE_ALL_BUTTON", 0);

	SetEventHandler("frame","ProcessFrame",1);

	SetFormatedText("STORECAPTION1", XI_ConvertString("Colony" + refStore.Colony) + ": " + XI_ConvertString("titleContraband"));
}

void AddToTable()
{
	int n, i;
	string row, sShipGroup;
	ref rShip;
	string sGood;
	string sBuy, sSell, sShipQ, sStoreQ, sStoreWeight;
	int tradetype, iColor;
	aref refGoods;
	n = 1;
	Table_Clear("TABLE_LIST", false, true, false);
    for (i = 0; i< GOODS_QUANTITY; i++)
	{
        row = "tr" + n;
		sGood = Goods[i].name;
		makearef(refGoods,refStore.Goods.(sGood));
        tradeType = MakeInt(refGoods.TradeType);
		sShipQ = GetCargoGoods(refCharacter, i);
		sStoreQ = GetContraGoodsQuantity(refContraChar, i);

		if(sti(sStoreQ) < 0)
		{
			sStoreQ = 0; refGoods.quantity = 0;
		}
		if (sStoreQ == 0 && sShipQ == 0) continue; // только не нули

		if (sti(sStoreQ) == 0 && FIS_FilterState == FIS_STORE) continue;
		if (sti(sShipQ) == 0 && FIS_FilterState == FIS_SHIP) continue;

		GameInterface.TABLE_LIST.(row).td1.str = sShipQ;
		GameInterface.TABLE_LIST.(row).td2.str = GetGoodWeightByType(i, sti(sShipQ));
		GameInterface.TABLE_LIST.(row).td7.str = Goods[i].Units;
		GameInterface.TABLE_LIST.(row).td8.str = Goods[i].Weight;

		GameInterface.TABLE_LIST.(row).td6.str = sStoreQ;
		iColor = argb(255,255,255,255);
		switch(tradeType)
		{
			case TRADE_TYPE_NORMAL:
				iColor = argb(255,255,255,255);
			break;
			case TRADE_TYPE_EXPORT:
				iColor = argb(255,196,255,196);
			break;
			case TRADE_TYPE_IMPORT:
				iColor = argb(255,196,196,255);
			break;
			case TRADE_TYPE_CONTRABAND:
				iColor = argb(255,255,196,196);
			break;
			case TRADE_TYPE_CANNONS:
				iColor = argb(255,255,159,0);
			break;
			case TRADE_TYPE_AMMUNITION:
			    if (refStore.Colony == "none")
				{
					iColor = argb(255,196,196,196);
				}
				else
				{
					iColor = argb(255,255,255,255);
				}
			break;
			case TRADE_TYPE_AGGRESSIVE:
				iColor = argb(255,255,173,51);
			break;
		}

        GameInterface.TABLE_LIST.(row).td4.icon.group = "GOODS";
		GameInterface.TABLE_LIST.(row).td4.icon.image = sGood;
		GameInterface.TABLE_LIST.(row).td4.icon.offset = "0, 0";
		GameInterface.TABLE_LIST.(row).td4.icon.width = 20;
		GameInterface.TABLE_LIST.(row).td4.icon.height = 20;
		GameInterface.TABLE_LIST.(row).td4.textoffset = "20,0";
		GameInterface.TABLE_LIST.(row).td4.str = XI_ConvertString(sGood);
		GameInterface.TABLE_LIST.(row).index = i;
		GameInterface.TABLE_LIST.(row).td4.color = iColor;
		GameInterface.TABLE_LIST.(row).td4.scale = 0.9;

		if (tradeType == TRADE_TYPE_CANNONS) GameInterface.TABLE_LIST.(row).td5.str = makeint(GetStoreGoodsPrice(refStore, i, PRICE_TYPE_SELL, pchar, 1)*1.75);
		else GameInterface.TABLE_LIST.(row).td5.str = GetStoreGoodsPrice(refStore, i, PRICE_TYPE_SELL, pchar, 1);

		GameInterface.TABLE_LIST.(row).td3.str = GetStoreGoodsPrice(refStore, i, PRICE_TYPE_BUY, pchar, 1);
		n++;
	}
	NextFrameRefreshTable();
	nocheck = false;
}

void ProcessFilter(string sButton)
{
	nocheck = false;
	switch (sButton)
	{
	case "CB_SHIP":
		/*
		Radio-button semantics:
		- If the button was selected the user is deselecting it, so reselect it and exit.
		- If the button was not selected, deselect all others, set the state variable and
		  reload the table.
		*/
		SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_SHIP", 2, 1, 1);
		if (FIS_FilterState != FIS_SHIP)
		{
			// Button being selected.
			SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_ALL", 2, 1, 0);
			SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_STORE", 2, 1, 0);
			FIS_FilterState = FIS_SHIP;
			AddToTable();
		}
		break;
	case "CB_ALL":
	    SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_ALL", 2, 1, 1);
		if (FIS_FilterState != FIS_ALL)
		{
			SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_SHIP", 2, 1, 0);
			SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_STORE", 2, 1, 0);
			FIS_FilterState = FIS_ALL;
			AddToTable();
		}
		break;
	case "CB_STORE":
	    SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_STORE", 2, 1, 1);
		if (FIS_FilterState != FIS_STORE)
		{
			SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_SHIP", 2, 1, 0);
			SendMessage(&GameInterface, "lslll", MSG_INTERFACE_MSG_TO_NODE, "CB_ALL", 2, 1, 0);
			FIS_FilterState = FIS_STORE;
			AddToTable();
		}
		break;
	}
}

void TransactionOK()
{
	int nTradeQuantity, moneyback;
	confirmChangeQTY_EDIT();
	nTradeQuantity = sti(GameInterface.qty_edit.str);
	if (BuyOrSell == 0)
	{
	    EndTooltip();
	    return;
	}
    if (!GetRemovable(refCharacter)) return;

 	if (BuyOrSell == 1) // BUY
	{
		SetContraGoods(refContraChar, iCurGoodsIdx, iStoreQty - nTradeQuantity);
		AddCharacterGoods(refCharacter, iCurGoodsIdx, nTradeQuantity);
		moneyback = makeint(iShipPrice*stf(GameInterface.qty_edit.str) / iUnits + 0.5);
		pchar.money = sti(pchar.money)  - moneyback;
		sld.SmugglingMoney = sti(sld.SmugglingMoney) + moneyback;
		Statistic_AddValue(Pchar, "Money_spend", moneyback);
        AddCharacterExpToSkill(pchar, "Commerce", moneyback / 800.0);
    	WaitDate("",0,0,0, 0, 15);
		Pchar.quest.Contraband.Counter = 1;
	}
 	else
	{ // SELL
        SetContraGoods(refContraChar, iCurGoodsIdx, iStoreQty + nTradeQuantity);
		RemoveCharacterGoods(refCharacter, iCurGoodsIdx, nTradeQuantity);
		moneyback = makeint(iStorePrice*stf(GameInterface.qty_edit.str) / iUnits + 0.5);
		if (!CheckAttribute(pchar,"contrabandmoneyback")) pchar.contrabandmoneyback = moneyback;
		else pchar.contrabandmoneyback = sti(pchar.contrabandmoneyback) + moneyback;
  		pchar.money = sti(pchar.money)  + moneyback;
		sld.SmugglingMoney = sti(sld.SmugglingMoney) - moneyback;
		Statistic_AddValue(Pchar, "Money_get", moneyback);
        AddCharacterExpToSkill(pchar, "Commerce", moneyback / 1600.0);
		pchar.contratradedmoney = sti(pchar.contratradedmoney) + moneyback;
    	WaitDate("",0,0,0, 0, 15);
		Pchar.quest.Contraband.Counter = 1;
	}
	AddToTable();
	EndTooltip();
	ShowGoodsInfo(iCurGoodsIdx); //сбросим все состояния
}

void ShowGoodsInfo(int iGoodIndex)
{
	string GoodName = goods[iGoodIndex].name;

	int lngFileID = LanguageOpenFile("GoodsDescribe.txt");
	string sHeader = XI_ConvertString(GoodName);

    iCurGoodsIdx = iGoodIndex;
    string goodsDescr = "";
    if (bBettaTestMode)
	{
		goodsDescr += NewStr() + "BaseNorm " + goods[iGoodIndex].Norm + " BaseCost " + goods[iGoodIndex].Cost + " StoreNorm " + refStore.Goods.(GoodName).Norm;
		goodsDescr += NewStr() + "NormPrMod " + FloatToString(stf(refStore.Goods.(GoodName).NormPriceModify), 4) + " CurPrMod " +
		                        FloatToString(stf(refStore.Goods.(GoodName).RndPriceModify), 4);
		goodsDescr += NewStr();
	}
	goodsDescr += GetAssembledString( LanguageConvertString(lngFileID,goodName+"_descr"), &Goods[iGoodIndex]);
    goodsDescr += newStr() + XI_ConvertString("weight") + " " + Goods[iGoodIndex].weight + " " + XI_ConvertString("cwt") +
	              ", пачка " + Goods[iGoodIndex].Units + " " + XI_ConvertString("units");

	iUnits  = sti(Goods[iGoodIndex].Units);
	fWeight = stf(Goods[iGoodIndex].weight);
	if(checkAttribute(pchar, "ship.cargo.goods." + GoodName + ".isquest"))
	{
		string sTradeQ = pchar.ship.cargo.goods.(GoodName).isquest.quantity;
		string sColony = pchar.ship.cargo.goods.(GoodName).isquest.colony;
		goodsDescr += NewStr() + XI_ConvertString("YouNeedToDelivery") + sTradeQ + XI_ConvertString("QuantityOfGoodsToColony") + XI_ConvertString("Colony"+sColony) + ".";
	}

    BuyOrSell = 0;
    SetFormatedText("QTY_TypeOperation", "");
    SetFormatedText("QTY_Result", "");
    GameInterface.qty_edit.str = "0";

	SetNewGroupPicture("QTY_GOODS_PICTURE", "GOODS", GoodName);
    SetFormatedText("QTY_CAPTION", sHeader);
    SetFormatedText("QTY_GOODS_INFO", goodsDescr);
	LanguageCloseFile(lngFileID);

	iShipQty = GetCargoGoods(refCharacter, iGoodIndex);
	iStoreQty = GetContraGoodsQuantity(refContraChar, iGoodIndex);

	SetFormatedText("QTY_INFO_STORE_QTY", its(iStoreQty));
	SetFormatedText("QTY_INFO_SHIP_QTY", its(iShipQty));
	BuyOrSell = 0;
    int tradeType = MakeInt(refStore.Goods.(GoodName).TradeType);
	if (tradeType == TRADE_TYPE_CANNONS) iStorePrice = makeint(GetStoreGoodsPrice(refStore, iGoodIndex, PRICE_TYPE_SELL, pchar, 1)*1.75);
	else iStorePrice = GetStoreGoodsPrice(refStore, iGoodIndex, PRICE_TYPE_SELL, pchar, 1);

    SetFormatedText("QTY_INFO_STORE_PRICE",XI_ConvertString("Price buy") + NewStr() + its(iStorePrice));

	iShipPrice = GetStoreGoodsPrice(refStore, iGoodIndex, PRICE_TYPE_BUY, pchar, 1);
	SetFormatedText("QTY_INFO_SHIP_PRICE", XI_ConvertString("Price sell") + NewStr() + its(iShipPrice));

	ShowFoodInfo();
}

void IDoExit(int exitCode)
{
	pchar.ContraFilter = FIS_FilterState;
	if(GetSummonSkillFromName(GetMainCharacter(), "Sneak") < Rand(120) && !CheckAttribute(pchar,"quest.Contraband.InterruptionGot"))
	{
		PChar.GenQuest.contraTravel.PatrolFight = true;
		PChar.quest.Contraband.InterruptionGot = true;
		DoQuestCheckDelay("Rand_ContrabandInterruption", 0.1);
		ContrabandInterruptionSetStatus(true);
	}
	DeleteAttribute(pchar,"Goods.Store.Contraband");
	//Log_Info(pchar.Goods.Store.Contraband);
	if (!CheckAttribute(pchar,"quest.Contraband.SneakGot"))
	{
		pchar.quest.Contraband.SneakGot = true;
		AddCharacterExpToSkill(Pchar, "Sneak", 100);
		SetTimerCondition("ContraClearGot", 0, 0, 1, false);
	}

	ChangeContrabandRelation(GetMainCharacter(), 15);
    OfficersReaction("bad");

    CloseQuestHeader("Gen_Contraband");

	DeleteAttribute(Pchar, "quest.Contraband.active");
	DeleteAttribute(Pchar, "quest.Contraband.counter");

	Pchar.quest.Rand_Smuggling.over = "yes";
	RemoveSmugglersFromShore();
	//RemoveAllContraGoods(CharacterFromId(pchar.GenQuest.Contraband.SmugglerId));

    EndAboveForm(true);

	DelEventHandler("InterfaceBreak","ProcessBreakExit");
	DelEventHandler("exitCancel","ProcessCancelExit");
	DelEventHandler("ievnt_command","ProcCommand");
	DelEventHandler("evntDoPostExit","DoPostExit");
	DelEventHandler("OnTableClick", "OnTableClick");
	DelEventHandler("MouseRClickUP","EndTooltip");
	DelEventHandler("ShowHelpHint", "ShowHelpHint");
	DelEventHandler("ShowItemInfo", "ShowItemInfo");
	DelEventHandler("TableSelectChange", "CS_TableSelectChange");
	DelEventHandler("frame","ProcessFrame");
	DelEventHandler("TransactionOK", "TransactionOK");
	DelEventHandler("confirmChangeQTY_EDIT", "confirmChangeQTY_EDIT");
	DelEventHandler("ADD_ALL_BUTTON", "ADD_ALL_BUTTON");
	DelEventHandler("ADD_BUTTON","ADD_BUTTON");
	DelEventHandler("REMOVE_BUTTON", "REMOVE_BUTTON");
	DelEventHandler("REMOVE_ALL_BUTTON", "REMOVE_ALL_BUTTON");

	interfaceResultCommand = exitCode;
	EndCancelInterface(true);
}

void SetVariable()
{
	string sText, sTextSecond;

	int nShipType = sti(refCharacter.ship.type);
	ref refBaseShip = GetRealShip(nShipType);

	iShipCapacity = sti(refBaseShip.Capacity);
	sText  = iShipCapacity;

	sText  = makeint(fShipWeight) + " / " + sText;
	sText = sText;
	SetFormatedText("CAPACITY", XI_ConvertString("Capacity") + ":\n" + sText);

	iTotalSpace = iMaxGoodsStore;
	string sMaxGoodsStore;

	sMaxGoodsStore = XI_ConvertString("contraband");

	SetFormatedText("STORE_CAPACITY", sMaxGoodsStore);

	sText = XI_ConvertString("OurMoney") + " " + FindRussianMoneyString(sti(pchar.money)) +  ", золото контрабандистов: " + FindRussianMoneyString(sti(sld.SmugglingMoney));
	SetFormatedText("OUR_GOLD", sText);

	if (CheckAttribute(refCharacter, "ship.name"))
	{
		GameInterface.strings.shipname = refCharacter.ship.name;
	}
	else
	{
	    GameInterface.strings.shipname = "";
	}
}

void ShowHelpHint()
{
    string sHeader;
	string sText1, sText2, sPicture, sGroup, sGroupPicture;
	sPicture = "none";
	sGroup = "none";
	sGroupPicture = "none";

	if (!bShowChangeWin)
	{// покажем помощь по работе с формой
        sHeader = "Интерфейс торговли";
		sText1 = "Двойной клик мыши или Enter по строкам таблицы вызывает форму покупки/продажи товара. "+ newStr() +
		         "Shift + лево/право на строках таблицы автоматически вызывают форму с предустановленным количеством покупки/продажи на максимальное. "+ newStr() +
				 "Ввод положительного количества с клавиатуры устанавливает покупку товара, а отрицательного (с минусом) продажу."+ newStr() +
				 "Стрелки лево/право изменяют количество по пачкам, а Shift + лево/право на максимально доступное. Нажатие Enter на форме равносильно ОК, а Esc - Отмена." + newStr() +
				 "Находясь в режиме формы и мотая список в таблице стрелкам вверх/вниз, можно просматривать описание товара под курсором таблицы.";

        sText2 = "Быстрая продажа всего: стрелками вверх/вниз по списку, Shift + право, Enter";

		CreateTooltip("#" + sHeader, sText1, argb(255,255,255,255), sText2, argb(255,192,192,192), "", argb(255,255,255,255), "", argb(255,255,255,255), sPicture, sGroup, sGroupPicture, 64, 64);
	}
}

void ChangePosTable()
{
}

void ProcessFrame()
{
	if(GetCurrentNode() == "SHIPS_SCROLL")
	{
		if(sti(GameInterface.SHIPS_SCROLL.current)!=nCurScrollNum)
		{
            XI_WindowDisable("QTY_WINDOW", true);
			XI_WindowShow("QTY_WINDOW", false);
			nCurScrollNum = sti(GameInterface.SHIPS_SCROLL.current);

			SetDescription();
   			GameInterface.TABLE_LIST.select = 1;
			GameInterface.TABLE_LIST.top = 0;
		}
	}
}

void ProcCommand()
{
	string comName = GetEventData();
	string nodName = GetEventData();

	switch(nodName)
	{
		case "QTY_OK_BUTTON":
			if(comName=="leftstep")
			{
	            ADD_BUTTON();
			}
			if(comName=="rightstep")
			{
	            REMOVE_BUTTON();
			}
			if(comName=="speedleft")
			{
	      		ADD_ALL_BUTTON();
			}
			if(comName=="speedright")
			{
	            REMOVE_ALL_BUTTON();
			}
		break;

		case "QTY_CANCEL_BUTTON":
			if(comName=="leftstep")
			{
	            ADD_BUTTON();
			}
			if(comName=="rightstep")
			{
	            REMOVE_BUTTON();
			}
			if(comName=="speedleft")
			{
	      		ADD_ALL_BUTTON();
			}
			if(comName=="speedright")
			{
	            REMOVE_ALL_BUTTON();
			}
		break;

		case "TABLE_LIST":
			if(comName=="leftstep")
			{
	            ADD_BUTTON();
			}
			if(comName=="rightstep")
			{
	            REMOVE_BUTTON();
			}
			if(comName=="speedleft")
			{
	      		ADD_ALL_BUTTON();
			}
			if(comName=="speedright")
			{
	            REMOVE_ALL_BUTTON();
			}
		break;
		case "CB_SHIP":		if (comName == "click")ProcessFilter(nodName); break;
		case "CB_ALL":		if (comName == "click")ProcessFilter(nodName); break;
		case "CB_STORE":	if (comName == "click")ProcessFilter(nodName); break;
	}
}

void DoPostExit()
{
	int exitCode = GetEventData();
	IDoExit(exitCode);
}

void CalculateInfoData()
{
    AddToTable();
	ShowGoodsInfo(sti(GameInterface.TABLE_LIST.tr1.index));
}

void ProcessBreakExit()
{
	IDoExit( RC_INTERFACE_CONTRATRADE );
}

void ProcessCancelExit()
{
	if (bShowChangeWin)
	{
		EndTooltip();
	}
	else
	{
		IDoExit( RC_INTERFACE_CONTRATRADE );
	}
}

void NextFrameRefreshTable()
{
	SetEventHandler("frame", "RefreshTableByFrameEvent", 0);
}

void RefreshTableByFrameEvent()
{
	DelEventHandler("frame", "RefreshTableByFrameEvent");
	SendMessage(&GameInterface,"lsl",MSG_INTERFACE_MSG_TO_NODE,"TABLE_LIST", 0 );
	if(!nocheck) DoChange();
}

void OnTableClick()
{
	string sControl = GetEventData();
	int iRow		= GetEventData();
	int iColumn 	= GetEventData();

	string sRow = "tr" + (iRow + 1);
    Table_UpdateWindow(sControl);
}

void RefreshTable()
{
    PostEvent("RefreshTable", 100);
    if (TableSelect != sti(GameInterface.TABLE_LIST.select))
    {
        TableSelect = sti(GameInterface.TABLE_LIST.select);
        ChangePosTable();
    }
}

void EndTooltip()
{
	CloseTooltip(); // всегда убирать, если был
    GameInterface.qty_edit.str = 0;
	SetShipWeight();
	SetVariable();
	SetCurrentNode("TABLE_LIST");
 	XI_WindowDisable("QTY_WINDOW", true);
	XI_WindowShow("QTY_WINDOW", false);
	bShowChangeWin = false;
}

void ShowItemInfo()
{
	if (bShowChangeWin) // жмем окей, когда курсор на таблице
	{
	    TransactionOK();
	}
	else
	{
		GameInterface.qty_edit.str = "0";
		BuyOrSell = 0;
		ChangeQTY_EDIT();

		XI_WindowDisable("QTY_WINDOW", false);
		XI_WindowShow("QTY_WINDOW", true);
		bShowChangeWin = true;
		if (GetRemovable(refCharacter))
		{
		    SetSelectable("QTY_OK_BUTTON", true);
		}
		else
		{
		    SetSelectable("QTY_OK_BUTTON", false);
		}
	}
}

void SetShipWeight()
{
    if (CheckAttribute(refCharacter, "Ship.Cargo.RecalculateCargoLoad") && sti(refCharacter.Ship.Cargo.RecalculateCargoLoad))
	{   // остатки с моря
		RecalculateCargoLoad(refCharacter);
		refCharacter.Ship.Cargo.RecalculateCargoLoad = 0;
	}
	fShipWeight  = makeint(GetCargoLoad(refCharacter)+ 0.4);
    fStoreWeight = 0;
}

void Log_InfoOwn(string _str)
{
    SetFormatedText("INFO_TEXT", _str);
}

void CS_TableSelectChange()
{
	string sControl = GetEventData();
	int iSelected = GetEventData();
    TableSelect = iSelected;
    string sRow = "tr" + (iSelected);
	SetShipWeight();
	SetVariable();
    ShowGoodsInfo(sti(GameInterface.TABLE_LIST.(sRow).index));
}

void DoChange()
{
	AddToTable();
	string row = "tr"+sti(GameInterface.TABLE_LIST.select);
	if (row != "tr0") ShowGoodsInfo(sti(GameInterface.TABLE_LIST.(row).index));
	nocheck = true;
}

void FillShipsScroll()
{
	nCurScrollNum = -1;
	FillScrollImageWithCompanionShips("SHIPS_SCROLL", COMPANION_MAX);

	if(!CheckAttribute(&GameInterface,"SHIPS_SCROLL.current"))
	{
		GameInterface.SHIPS_SCROLL.current = 0;
	}
}

void SetDescription()
{
 	if(GetCurrentNode() == "SHIPS_SCROLL")
	{
		string attributeName = attributeName = "pic" + (nCurScrollNum+1);
		if(CheckAttribute(&GameInterface, "SHIPS_SCROLL." + attributeName))
		{
			int iCharacter = GameInterface.SHIPS_SCROLL.(attributeName).companionIndex;
			sChrId = characters[iCharacter].id;
			refCharacter = characterFromID(sChrId);
			SetShipWeight();
		}
	}
    CalculateInfoData();
	SetNewPicture("MAIN_CHARACTER_PICTURE", "interfaces\portraits\256\face_" + its(refCharacter.FaceId) + ".tga");
	SetVariable();
}

void ShowFoodInfo()
{
	if(iCurGoodsIdx == GOOD_FOOD)
	{
		// чтоб прикинуть как оно будет, скинем на время колво на продажное
		SetCharacterGoods(refCharacter, GOOD_FOOD, iShipQty + BuyOrSell*sti(GameInterface.qty_edit.str));
		SetFoodShipInfo(refCharacter, "FOOD_SHIP");
		SetCharacterGoods(refCharacter, GOOD_FOOD, iShipQty);
	}
	else
	{
		if(iCurGoodsIdx == GOOD_RUM) // Warship 11.07.09 На сколько хватит рому
		{
			// чтоб прикинуть как оно будет, скинем на время колво на продажное
			SetCharacterGoods(refCharacter, GOOD_RUM, iShipQty + BuyOrSell*sti(GameInterface.qty_edit.str));
			SetRumShipInfo(refCharacter, "FOOD_SHIP");
			SetCharacterGoods(refCharacter, GOOD_RUM, iShipQty);
		}
		else
		{
			SetFormatedText("FOOD_SHIP", "");
		}
	}
}

void confirmChangeQTY_EDIT()
{
	ChangeQTY_EDIT();
    SetCurrentNode("QTY_OK_BUTTON");
}

void ChangeQTY_EDIT()
{
	int  iWeight;
	SetShipWeight();
	GameInterface.qty_edit.str = sti(GameInterface.qty_edit.str);

	string GoodName = goods[iCurGoodsIdx].name;

	if (sti(GameInterface.qty_edit.str) == 0)
	{
	    SetFormatedText("QTY_TypeOperation", "");
	    SetFormatedText("QTY_Result", "");
	    BuyOrSell = 0;
	}
	else
	{
		if (sti(GameInterface.qty_edit.str) < 0 || BuyOrSell == -1)
		{
			if (BuyOrSell != -1)
			{
		    	GameInterface.qty_edit.str = -sti(GameInterface.qty_edit.str);
		    }
            BuyOrSell = -1;
		    // проверка на колво доступное -->
		    if (sti(GameInterface.qty_edit.str) > iShipQty)
		    {
		        GameInterface.qty_edit.str = iShipQty;
		    }
		    iWeight = GetGoodWeightByType(iCurGoodsIdx, sti(GameInterface.qty_edit.str));
		    if ((fStoreWeight + iWeight) > iTotalSpace)
		    {
		        iWeight = iTotalSpace - fStoreWeight - fWeight;
		        GameInterface.qty_edit.str = makeint(iWeight / fWeight * iUnits );
		        iWeight = GetGoodWeightByType(iCurGoodsIdx, sti(GameInterface.qty_edit.str));
		        GameInterface.qty_edit.str = makeint(iWeight / fWeight * iUnits ); // округдение
		    }
			if (makeint(iStorePrice*stf(GameInterface.qty_edit.str) / iUnits + 0.5) > sti(sld.SmugglingMoney))
		    {
		        GameInterface.qty_edit.str = makeint(sti(sld.SmugglingMoney)*iUnits / iStorePrice);
		        iWeight = GetGoodWeightByType(iCurGoodsIdx, sti(GameInterface.qty_edit.str));
		    }
		    // проверка на колво доступное <--
		    SetFormatedText("QTY_TypeOperation", "Продать");
		    SetFormatedText("QTY_Result", "Деньги " + makeint(iStorePrice*stf(GameInterface.qty_edit.str) / iUnits + 0.5) +
			                ", вес " + iWeight + " ц");
		}
		else
		{
			BuyOrSell = 1;
         	// проверка на колво доступное -->
		    if (sti(GameInterface.qty_edit.str) > iStoreQty)
		    {
		        GameInterface.qty_edit.str = iStoreQty;
		    }
		    iWeight = GetGoodWeightByType(iCurGoodsIdx, sti(GameInterface.qty_edit.str));
		    if ((fShipWeight + iWeight) > iShipCapacity)
		    {
		        iWeight = iShipCapacity - fShipWeight - fWeight;
				if (iWeight < 0) iWeight = 0;
		        GameInterface.qty_edit.str = makeint(iWeight / fWeight * iUnits );
		        iWeight = GetGoodWeightByType(iCurGoodsIdx, sti(GameInterface.qty_edit.str));
		        GameInterface.qty_edit.str = makeint(iWeight / fWeight * iUnits ); // округдение
		    }
		    if (makeint(iShipPrice*stf(GameInterface.qty_edit.str) / iUnits + 0.5) > sti(pchar.money))
		    {
		        GameInterface.qty_edit.str = makeint(sti(pchar.money)*iUnits / iShipPrice);
		        iWeight = GetGoodWeightByType(iCurGoodsIdx, sti(GameInterface.qty_edit.str));
		    }
		    // проверка на колво доступное <--

			SetFormatedText("QTY_TypeOperation", "Купить");
			SetFormatedText("QTY_Result", "Деньги " + makeint(iShipPrice*stf(GameInterface.qty_edit.str) / iUnits + 0.5) +
			                ", вес " + iWeight + " ц");
		}
	}
	// если получили ноль Jason: или особо хитрожопые ввели минус
	if (sti(GameInterface.qty_edit.str) <= 0)
	{
	    SetFormatedText("QTY_TypeOperation", "");
	    SetFormatedText("QTY_Result", "");
	    BuyOrSell = 0;
	}
    SetFormatedText("QTY_INFO_STORE_QTY", its(iStoreQty - BuyOrSell*sti(GameInterface.qty_edit.str)));
    SetFormatedText("QTY_INFO_SHIP_QTY", its(iShipQty + BuyOrSell*sti(GameInterface.qty_edit.str)));
    SetShipWeight();
    fShipWeight  = fShipWeight  + BuyOrSell * iWeight;
	fStoreWeight = fStoreWeight - BuyOrSell * iWeight;
    SetVariable();
    ShowFoodInfo();
}

void REMOVE_ALL_BUTTON()  // продать все
{
    if (!GetRemovable(refCharacter)) return;
	if (!bShowChangeWin)
	{
	    ShowItemInfo();
	}
	ShowGoodsInfo(iCurGoodsIdx);
	GameInterface.qty_edit.str = -iShipQty;
	BuyOrSell = 0;
	ChangeQTY_EDIT();
}

void ADD_ALL_BUTTON()  // купить все
{
    if (!GetRemovable(refCharacter)) return;
	if (!bShowChangeWin)
	{
	    ShowItemInfo();
	}
	ShowGoodsInfo(iCurGoodsIdx);
	GameInterface.qty_edit.str = iStoreQty;
	BuyOrSell = 0;
	ChangeQTY_EDIT();
}

void REMOVE_BUTTON()  // продать
{
    if (!GetRemovable(refCharacter)) return;
	if (!bShowChangeWin) return;
	if (BuyOrSell == 0)
    {
        GameInterface.qty_edit.str = -iUnits;
    }
    else
    {
		if (BuyOrSell == -1)
		{
			GameInterface.qty_edit.str = -(sti(GameInterface.qty_edit.str) + iUnits);
		}
		else
		{
			GameInterface.qty_edit.str = (sti(GameInterface.qty_edit.str) - iUnits);
		}
		BuyOrSell = 0;
	}
	ChangeQTY_EDIT();
}

void ADD_BUTTON()  // купить
{
    if (!GetRemovable(refCharacter)) return;
	if (!bShowChangeWin) return;
	if (BuyOrSell == 0)
    {
        GameInterface.qty_edit.str = iUnits;
    }
    else
    {
  		if (BuyOrSell == 1)
		{
			GameInterface.qty_edit.str = (sti(GameInterface.qty_edit.str) + iUnits);
		}
		else
		{
			GameInterface.qty_edit.str = -(sti(GameInterface.qty_edit.str) - iUnits);
		}
		BuyOrSell = 0;
	}
	ChangeQTY_EDIT();
}
