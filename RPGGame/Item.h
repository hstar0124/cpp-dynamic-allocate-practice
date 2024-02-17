#pragma once

#include "Enums.h"

// =======================================
//                 ITEM
// =======================================


class Item
{
protected:
	Item(ItemType itemType);
public:
	virtual ~Item();

public:
	virtual void PrintInfo();
	ItemType GetItemType() { return _itemType; }

protected:
	int _itemId = 0;
	int _itemCount = 0;
	ItemRarity _rarity = IR_Normal;
	ItemType _itemType = IT_None;
};

// =======================================
//                 Weapon
// =======================================

class Weapon : public Item
{
public:
	Weapon();
	virtual ~Weapon();

	virtual void PrintInfo() override;

	void SetDamage(int damage);
	int GetDamage();

private:
	int _damage = 0;
};

// =======================================
//                 Armor
// =======================================


class Armor : public Item
{
public:
	Armor();
	virtual ~Armor();

	virtual void PrintInfo() override;

	void SetDefence(int defence);
	int GetDefence();
	
private :
	int _defence = 0;
};