// Find
	if (leader && (leader->IsEquipUniqueItem(UNIQUE_ITEM_PARTY_BONUS_EXP) || leader->IsEquipUniqueItem(UNIQUE_ITEM_PARTY_BONUS_EXP_MALL)
		|| leader->IsEquipUniqueItem(UNIQUE_ITEM_PARTY_BONUS_EXP_GIFT) || leader->IsEquipUniqueGroup(10010)))
	{
		iBonusPartyExpFromItem = 30;
	}

// Add After
#ifdef OFFICIAL_LEADER_BOOK_PLUS
	if (leader && (leader->IsEquipUniqueItem(UNIQUE_ITEM_PARTY_BONUS_EXP_GOLD) || leader->IsEquipUniqueItem(UNIQUE_ITEM_PARTY_BONUS_EXP_MALL_GOLD)))
	{
		iBonusPartyExpFromItem = 100;
	}
#endif
