#pragma once



enum
{
	MAX_SLOT = 100
};

// 전방 선언
// 헤더 파일에 헤더를 Include 하는 것은 언젠가 문제를 일으킬수 있다.
// 상속을 해야하는 경우는 어쩔수 없이 선언해야하지만 최대한 지양하자.
// 클래스 내부에서 다른 클래스를 사용해야 한다면 포인터나 참조타입으로 들고 있는 것이 좋다
class Item;

class Inventory
{
public:
	Inventory();
	~Inventory();

	bool AddItem(Item* item);
	bool RemoveItem(Item* item);
	Item* GetItemAtSlot(int slot);

	void Clear();

	static Inventory* GetInstance();

private:
	int FindEmptySlot();
	int FindItemSlot(Item* item);

private:
	Item* _items[MAX_SLOT];
	int _itemCount = 0;

	static Inventory* s_instance;
};

