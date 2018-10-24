#include <iostream>
#include <string>
#include "Headergame.h"
using namespace std;

void buy(int cost)//asks the user if they want to buy the item
{
	if (gold >= cost)
	{
		item = getItem(itemNum);
		if (item == true)
		{
			cout << "you already have this item" << endl;
			consumables();
		}
		else
		{
			cout << "\nAre you sure you want to buy this item?" << endl;
			do
			{
				cout << "yes.1\n or" << endl;
				cout << "no.2" << endl;
				cin >> input;
			} while (input < 1 || input > 2);
			if (input == 1)
			{
				gold = gold - cost;
				setItem(itemNum, true);
				setItemStats(itemNum);
			}
			consumables();
		}
	}
}

void shop()//the shop
{
	do
	{
		cout << "Welcome to the shop" << endl;
		cout << "Your Gold: " << gold << endl;
		cout << "What do you want to buy?: " << endl;
		cout << "0.Back to Level Select";
		cout << "1.Consumables";
		cout << "2.Weapons";
		cout << "3.Armor";
		cout << "4.End Program";
		cin >> input;
	} while (input < 0 || input > 9);
	if (input == 0)
	{
		lvlChooser();
	}
	else if (input == 1)
	{
		consumables();
	}
	else if (input == 2)
	{
		weapons();
	}
	else if (input == 3)
	{
		armors();
	}
	else
	{
		endProgram();
	}
}

void consumables()// the potions shop
{
	do
	{
		cout << "Your Gold: " << gold << endl;
		cout << "What do you want to buy?: " << endl;
		cout << "0.Back to Level Select";
		cout << "1.Back to the Shop";
		cout << "2.Health Potion: 100g restores 25hp"; //item 0
		cout << "3.Stamina Potion: 100g restores 1 mana"; //item 1
		cout << "4.Mana Potion: 100g restores 1 stamina"; //item 2
		cout << "5.End Program";
		cin >> input;
	} while (input < 0 || input > 9);
	if (input == 0)
	{
		lvlChooser();
	}
	else if (input == 1)
	{
		shop();
	}
	else if (input == 2)
	{
		itemNum = 0;
		buy(100);
	}
	else if (input == 2)
	{
		itemNum = 1;
		buy(100);
	}
	else if (input == 3)
	{
		itemNum = 2;
		buy(100);
	}
	else
	{
		endProgram();
	}
}

void weapons()// the weapons shop
{
	do
	{
		cout << "Your Gold: " << gold << endl;
		cout << "What do you want to buy?: " << endl;
		cout << "0.Back to Level Select";
		cout << "1.Back to the shop";
		cout << "2.Short Sword: 150g gives 15 attack damage"; //item 3
		cout << "3.Short bow: 150g gives 5 attack damage, 5 luck and 1 stamina"; // item 4
		cout << "4.Magical Wooden staff: 150g gives 6 magical damage and 2 mana"; // item 5
		cout << "5.Long sword: 250g gives 30 attack damage"; // item 6
		cout << "6.Long bow: 250g gives 10 attack damage, 10 luck and 2 stamina"; // item 7
		cout << "7.Slightly better magical wooden stick 250g gives 12 magical damage and 3 mana"; // item 8
		cout << "8.Staff of Magical WOW: 400g gives 30 magical damage and 1 mana"; // item 9
		cout << "9.End Program";
		cin >> input;
	} while (input < 0 || input > 9);
	if (input == 0)
	{
		lvlChooser();
	}
	else if (input == 1)
	{
		shop();
	}
	else if (input == 2)
	{
		itemNum = 3;
		buy(150);
	}
	else if (input == 3)
	{
		itemNum = 4;
		buy(150);
	}
	else if (input == 4)
	{
		itemNum = 5;
		buy(150);
	}
	else if (input == 5)
	{
		itemNum = 6;
		buy(250);
	}
	else if (input == 6)
	{
		itemNum = 7;
		buy(250);
	}
	else if (input == 7)
	{
		itemNum = 8;
		buy(250);
	}
	else if (input == 8)
	{
		itemNum = 9;
		buy(400);
	}
	else
	{
		endProgram();
	}
}

void armors()//the armor shop
{
	do
	{
		cout << "Your Gold: " << gold << endl;
		cout << "What do you want to buy?: " << endl;
		cout << "0.Back to Level Select";
		cout << "1.Back to the shop";
		cout << "2.Helm 150g gives 10 armor";// item 10
		cout << "3.Boots 150g gives 15 agility";// item 11
		cout << "4.Magical Cowl 150g gives 10 mr";// item 12
		cout << "5.Sheild 250g gives 15 armor";// item 13
		cout << "6.Leather Gloves 250g gives 10 agility and 10 mr";// item 14
		cout << "7.Blue Ring 250g gives 10 mr and 2 mana";// item 15
		cout << "8.Steel Chestplate 400g gives 10 armor and 100 hp"; // item 16
		cout << "9.End Program";
		cin >> input;
	} while (input < 0 || input > 9);
	if (input == 0)
	{
		lvlChooser();
	}
	else if (input == 1)
	{
		shop();
	}
	else if (input == 2)
	{
		itemNum = 10;
		buy(150);
	}
	else if (input == 3)
	{
		itemNum = 11;
		buy(150);
	}
	else if (input == 4)
	{
		itemNum = 12;
		buy(150);
	}
	else if (input == 5)
	{
		itemNum = 13;
		buy(250);
	}
	else if (input == 6)
	{
		itemNum = 14;
		buy(250);
	}
	else if (input == 7)
	{
		itemNum = 15;
		buy(250);
	}
	else if (input == 8)
	{
		itemNum = 16;
		buy(400);
	}
	else
	{
		endProgram();
	}
}
