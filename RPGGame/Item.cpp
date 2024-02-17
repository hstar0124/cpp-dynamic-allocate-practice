#include "Item.h"
#include <iostream>
using namespace std;

// =======================================
//                 ITEM
// =======================================


Item::Item(ItemType itemType)
	: _itemType(itemType)
{
	int randValue = rand() % 100;

	if (randValue < 50)
	{
		_rarity = IR_Normal;
	}
	else if (randValue < 80)
	{
		_rarity = IR_Rare;
	}
	else
	{
		_rarity = IR_Unique;
	}
}

Item::~Item()
{
}

void Item::PrintInfo()
{
	switch (_rarity)
	{
	case IR_Normal:
		cout << "[희귀도] 일반" << endl;
		break;
	case IR_Rare:
		cout << "[희귀도] 레어" << endl;
		break;
	case IR_Unique:
		cout << "[희귀도] 유니크" << endl;
		break;
	}
}

// =======================================
//                 Weapon
// =======================================

Weapon::Weapon() 
	:Item(IT_Weapon)
{
	switch (_rarity)
	{
	case IR_Normal:
		_damage = 1 + rand() % 5;
		break;
	case IR_Rare:
		_damage = 10 + rand() % 5;
		break;
	case IR_Unique:
		_damage = 50 + rand() % 5;
		break;
	}
}

Weapon::~Weapon()
{
}

void Weapon::PrintInfo()
{
	cout << "--------------------------------" << endl;
	cout << "[아이템 타입] : 무기" << endl;
	cout << "[공격력] : " << _damage << endl;
	Item::PrintInfo();
	cout << "--------------------------------" << endl;

}

void Weapon::SetDamage(int damage)
{
	_damage = damage;
}

int Weapon::GetDamage()
{
	return _damage;
}


// =======================================
//                 Armor
// =======================================

Armor::Armor()
	:Item(IT_Armor)
{
	switch (_rarity)
	{
	case IR_Normal:
		_defence = 1 + rand() % 3;
		break;
	case IR_Rare:
		_defence = 3 + rand() % 4;
		break;
	case IR_Unique:
		_defence = 5 + rand() % 5;
		break;
	}
}

Armor::~Armor()
{
}

void Armor::PrintInfo()
{
	cout << "--------------------------------" << endl;
	cout << "[아이템 타입] : 방어구" << endl;
	cout << "[방어력] : " << _defence << endl;
	Item::PrintInfo();
	cout << "--------------------------------" << endl;
}

void Armor::SetDefence(int defence)
{
	_defence = defence;
}

int Armor::GetDefence()
{
	return _defence;
}
