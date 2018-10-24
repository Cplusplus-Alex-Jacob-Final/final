#include <iostream>
#include <string>
#include "Headergame.h"
using namespace std;

//Main Variables
string name;
int maxHp = 0;
int maxMp = 0;
int maxStamina = 0;
int armor = 0;
int mr = 0;
int ap = 0;
int ad = 0;
int agility = 0;
int luck = 0;
int input = 0;
int class1 = 0;
//Level Chooser Variables
int lives = 3;
int finalBossWins = 0;
int bonusBossWins = 0;
int hp = 0;
int mp = 0;
int stamina = 0;
int lvl1Wins = 0;
int lvl2Wins = 0;
int lvl3Wins = 0;
int lvl4Wins = 0;
int bonuslvl1Wins = 0;
int bonuslvl2Wins = 0;
int gold = 0;
int lvl = 0;
//Battle Variables
string enemyName;// 0      1      2       3     4       5    6       7      8      9      10     11     12    13      14    15      16
bool items[17] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
int attackNum = 0;
int enemyAgility = 0;
int enemyLuck = 0;
int enemyHp = 0;
int enemyArmor = 0;
int enemyMr = 0;
int enemyStamina = 0;
int enemyMana = 0;
int enemyAttackDmg = 0;
int enemyMagicDmg = 0;
int enemyMaxHp = 0;
int enemyMaxMana = 0;
int enemyMaxStamina = 0;
int newDmg = 0;
int secret = 0;
int newHp = 0;
int hpPotions = 0;
int mpPotions = 0;
int staminaPotions = 0;
//shop Variables
bool item = false;
int itemNum = 0;
//variable Variables
int number2 = 0;


bool getItem(int number)//returns if the player has an item in the item array or not
{
	number2 = items[number];
	return number2;
}

void setItem(int number, bool trueFalse)//sets a item to true or false in the item array
{
	items[number] = trueFalse;
}

void setItemStats(int itemNum)//when the player buys an item it goes here and gives them the item stats
{
	if (itemNum == 3)//Item 3
	{
		ad = ad + 15;
	}
	else if (itemNum == 4)//Item 4
	{
		ad = ad + 5;
		luck = luck + 5;
		stamina = stamina + 1;
	}
	else if (itemNum == 5)//Item 5
	{
		ap = ap + 6;
		mp = mp + 2;
	}
	else if (itemNum == 6)//Item 6
	{
		ad = ad + 30;
	}
	else if (itemNum == 7)//Item 7
	{
		ad = ad + 10;
		luck = luck + 10;
		stamina = stamina + 2;
	}
	else if (itemNum == 8)//Item 8
	{
		ap = ap + 12;
		mp = mp + 3;
	}
	else if (itemNum == 9)//Item 9
	{
		ap = ap + 30;
		mp = mp + 1;
	}
	else if (itemNum == 10)//Item 10
	{
		armor = armor + 10;
	}
	else if (itemNum == 11)//Item 11
	{
		agility = agility + 15;
	}
	else if (itemNum == 12)//Item 12
	{
		mr = mr + 10;
	}
	else if (itemNum == 13)//Item 13
	{
		armor = armor + 15;
	}
	else if (itemNum == 14)//Item 14
	{
		agility = agility + 10;
		mr = mr + 10;
	}
	else if (itemNum == 15)//Item 15
	{
		mr = mr + 10;
		mp = mp + 2;
	}
	else//Item 16
	{
		armor = armor + 10;
		maxHp = maxHp + 100;
		hp = hp + 100;
	}
}