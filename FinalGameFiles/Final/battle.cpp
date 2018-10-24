#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "Headergame.h"
using namespace std;

//TO DO:
//1.Set Boss Stats

int greater = 0;//to lazy to put this in variables

void lvl1Start()//lvl 1 stats
{
	enemyName = "Dragon";
	cout << "\n" << enemyName << " Appeared!";
	enemyAgility = 5;
	enemyLuck = 5;
	enemyMaxHp = 100;
	enemyHp = 100;
	enemyArmor = 10;
	enemyMr = 10;
	enemyMaxStamina = 1;
	enemyStamina = 1;
	enemyMaxMana = 1;
	enemyMana = 1;
	enemyAttackDmg = 10;
	enemyMagicDmg = 10;
	playerTurn();
}
void lvl2Start()//lvl 2 stats
{
	enemyName = "Blue Serpent";
	cout << "\n" << enemyName << " Appeared!";
	enemyAgility = 10;
	enemyLuck = 10;
	enemyMaxHp = 200;
	enemyHp = 200;
	enemyArmor = 20;
	enemyMr = 20;
	enemyMaxStamina = 1;
	enemyStamina = 1;
	enemyMaxMana = 2;
	enemyMana = 2;
	enemyAttackDmg = 10;
	enemyMagicDmg = 20;
	playerTurn();
}
void lvl3Start()// lvl 3 stats
{
	enemyName = "Giant Bird";
	cout << "\n" << enemyName << " Appeared!";
	enemyAgility = 15;
	enemyLuck = 15;
	enemyMaxHp = 300;
	enemyHp = 300;
	enemyArmor = 30;
	enemyMr = 30;
	enemyMaxStamina = 3;
	enemyStamina = 3;
	enemyMaxMana = 2;
	enemyMana = 2;
	enemyAttackDmg = 20;
	enemyMagicDmg = 15;
	playerTurn();
}
void lvl4Start()//lvl 4 stats
{
	enemyName = "Barking Dog";
	cout << "\n" << enemyName << " Appeared!";
	enemyAgility = 20;
	enemyLuck = 20;
	enemyMaxHp = 400;
	enemyHp = 400;
	enemyArmor = 40;
	enemyMr = 40;
	enemyMaxStamina = 4;
	enemyStamina = 4;
	enemyMaxMana = 1;
	enemyMana = 1;
	enemyAttackDmg = 25;
	enemyMagicDmg = 20;
	playerTurn();
}
void bonuslvl1Start()//1st bonus lvl stats
{
	enemyName = "Hood Gangster";
	cout << "\n" << enemyName << " Appeared!";
	enemyAgility = 25;
	enemyLuck = 25;
	enemyMaxHp = 500;
	enemyHp = 500;
	enemyArmor = 50;
	enemyMr = 50;
	enemyMaxStamina = 5;
	enemyStamina = 5;
	enemyMaxMana = 2;
	enemyMana = 2;
	enemyAttackDmg = 20;
	enemyMagicDmg = 10;
	playerTurn();
}
void bonuslvl2Start()//2nd bonus lvl stats
{
	enemyName = "Bilboard that says \"Whatever\"";
	cout << "\n" << enemyName << " Appeared!";
	enemyAgility = 30;
	enemyLuck = 30;
	enemyMaxHp = 600;
	enemyHp = 600;
	enemyArmor = 100;
	enemyMr = 10;
	enemyMaxStamina = 1;
	enemyStamina = 1;
	enemyMaxMana = 1;
	enemyMana = 1;
	enemyAttackDmg = 10;
	enemyMagicDmg = 1;
	playerTurn();
}
void finallvlStart()//final boss lvl stats
{
	enemyName = "Snail";
	cout << "\n" << enemyName << " Appeared!";
	enemyAgility = 60;
	enemyLuck = 60;
	enemyMaxHp = 700;
	enemyHp = 700;
	enemyArmor = 140;
	enemyMr = 70;
	enemyMaxStamina = 1;
	enemyStamina = 1;
	enemyMaxMana = 2;
	enemyMana = 2;
	enemyAttackDmg = 50;
	enemyMagicDmg = 25;
	playerTurn();
}
void bonusFinallvlStart()//bonus final boss lvl stats
{
	enemyName = "Slime";
	cout << "\n" << enemyName << " Appeared!";
	enemyAgility = 10;
	enemyLuck = 0;
	enemyMaxHp = 800;
	enemyHp = 800;
	enemyArmor = 80;
	enemyMr = 160;
	enemyMaxStamina = 2;
	enemyStamina = 2;
	enemyMaxMana = 3;
	enemyMana = 3;
	enemyAttackDmg = 25;
	enemyMagicDmg = 25;
	playerTurn();
}

void checker()//checks if either the player or enemy dies and then regens stats
{
	if (enemyHp <= 0)
	{
		cout << "You Win" << endl;
		gold = gold + 100;
		if (lvl == 1)
		{
			lvl1Wins++;
		}
		else if (lvl == 2)
		{
			lvl2Wins++;
		}
		else if (lvl == 3)
		{
			lvl3Wins++;
		}
		else if (lvl == 4)
		{
			lvl4Wins++;
		}
		else if (lvl == 5)
		{
			finalBossWins++;
		}
		else if (lvl == 6)
		{
			bonuslvl1Wins++;
		}
		else if (lvl == 7)
		{
			bonuslvl2Wins++;
		}
		else
		{
			bonusBossWins++;
		}
		statSetter();
	}
	else if (hp <= 0)
	{
		cout << "You Died" << endl;
		lives--;
		statSetter();
	}
	if (hp != maxHp)
	{
		hp = hp + 1;
	}
	if (mp != maxMp)
	{
		mp = mp + 1;
	}
	if (stamina != maxStamina)
	{
		stamina = stamina + 1;
	}
	if (enemyMana != enemyMaxMana)
	{
		enemyMana = enemyMana + 1;
	}
	if (enemyStamina != enemyMaxStamina)
	{
		enemyStamina = enemyStamina + 1;
	}
	playerTurn();
}

void enemyTurn()//enemies turn
{
	while (enemyStamina != 0)
	{
		enemyStamina--;
		newDmg = enemyAttackDmg;
		srand(time(NULL));
		secret = rand() % (100 - agility) + 1;
		if (secret <= agility)
		{
			cout << enemyName << " Missed" << endl;
			enemyTurn();
		}
		srand(time(NULL));
		secret = rand() % (100 - enemyLuck) + 1;
		if (secret <= luck)
		{
			cout << enemyName << " Missed" << endl;
			enemyTurn();
		}
		newHp = hp * 1 + (armor / 100);
		newHp = newHp - newDmg;
		hp = newHp / 1 + (armor / 100);
		cout << enemyName << " dealt " << newDmg << endl;
		enemyTurn();
	}

	while (enemyMana != 0 || enemyMana > 0)
	{
		enemyMana--;
		newDmg = enemyMagicDmg;
		srand(time(NULL));
		secret = rand() % (100 - agility) + 1;
		if (secret <= agility)
		{
			cout << enemyName << " Missed" << endl;
			enemyTurn();
		}
		newHp = hp * 1 + (mr / 100);
		newHp = newHp - newDmg;
		hp = newHp / 1 + (mr / 100);
		cout << enemyName << " dealt " << newDmg << endl;
		enemyTurn();
	}
	checker();
}
void infoBag()//displays info about the battle
{
	cout << "\nWelcome to your info bag" << endl;
	cout << "your name = " << name << " enemy name = " << enemyName << endl;
	cout << "your hp = " << hp << " enemy hp = " << enemyHp << endl;
	cout << "your stamina = " << stamina << " enemy stamina = " << enemyStamina << endl;
	cout << "your mana = " << mp << " enemy mana = " << enemyMana << endl;
	cout << "your AD = " << ad << " enemy AD = " << enemyAttackDmg << endl;
	cout << "your AP = " << ap << " enemy AP = " << enemyMagicDmg << endl;
	cout << "your Armor = " << armor << " enemy Armor = " << enemyArmor << endl;
	cout << "your MR = " << mr << " enemy Armor = " << enemyMr << endl;
	cout << "your Agility = " << agility << " enemy Agility = " << enemyAgility << endl;
	cout << "your luck = " << luck << " enemy luck = " << enemyLuck << endl;
	item = getItem(0);
	if (item == true)
	{
		cout << "You have a hp potion you can use" << endl;
		infoBag();
	}
	else
	{
		cout << "You have no hp potions" << endl;
		infoBag();
	}
	item = getItem(1);
	if (item == true)
	{
		cout << "You have a stamina potion you can use" << endl;
		infoBag();
	}
	else
	{
		cout << "You have no stamina potions" << endl;
		infoBag();
	}
	item = getItem(2);
	if (item == true)
	{
		cout << "You have a mana potion you can use" << endl;
		infoBag();
	}
	else
	{
		cout << "You have no mana potions" << endl;
		infoBag();
	}
	do
	{
		cout << "what would you like to do?: " << endl;
		cout << "1. use hp potion" << endl;
		cout << "2. use stamina potion" << endl;
		cout << "3. use mana potion" << endl;
		cout << "4. go back to battle" << endl;
		cout << "5. end program" << endl;
	} while (input < 1 || input > 5);
	if (input == 1)
	{
		if (hp == maxHp)
		{
			cout << "your hp is already full" << endl;
			infoBag();
		}
		item = getItem(0);
		if (item == true)
		{
			setItem(0, false);
			if (hp < maxHp - 25)
			{
				hp = maxHp;
			}
			else
			{
				hp = hp + 25;
			}
		}
		else
		{
			cout << "You have no hp potions" << endl;
		}
		infoBag();
	}
	else if (input == 2)
	{
		if (stamina == maxStamina)
		{
			cout << "your stamina is already full" << endl;
			infoBag();
		}
		item = getItem(1);
		if (item == true)
		{
			stamina = stamina + 1;
			infoBag();
		}
		else
		{
			cout << "You have no stamina potions" << endl;
		}
		infoBag();
	}
	else if (input == 3)
	{
		if (mp == maxMp)
		{
			cout << "your mana is already full" << endl;
			infoBag();
		}
		item = getItem(2);
		if (item == true)
		{
			setItem(2, false);
			mp = mp + 1;
			infoBag();
		}
		else
		{
			cout << "You have no mana potions" << endl;
		}
		infoBag();
	}
	else if (input == 4)
	{
		playerTurn();
	}
	else
	{
		endProgram();
	}
}
void playerTurn()//players turn
{
	do
	{
		cout << "\n";
		cout << "Health: " << hp << "   Mana: " << mp << "   Stamina: " << stamina << endl;
		cout << enemyName << "'s Health: " << enemyHp;
		cout << "\n";
		cout << "What will you do?:" << endl;
		cout << "_______________" << endl;
		cout << "||  Attack.1" << endl;
		cout << "||  Magic Attack.2" << endl;
		cout << "||  Info Bag.3" << endl;
		cout << "||  End Turn.4" << endl;;
		cout << "||  End Program.5" << endl;
		cout << "||";
		cin >> input;

	} while (input < 1 || input > 5);

	if (input == 1)
	{
		for (int i = attack(); i > 0; i--)
		{
			if (stamina > 0)
			{
				stamina--;
				newDmg = ad;
				srand(time(NULL));
				secret = rand() % (100 - enemyAgility) + 1;
				if (secret <= enemyAgility)
				{
					cout << "\nYou Miss" << endl;
					newDmg = 0;
				}
				secret = rand() % (100 - luck) + 1;
				if (secret <= luck)
				{
					newDmg = newDmg * 2;
				}
				newHp = enemyHp * 1 + (enemyArmor / 100);
				newHp = newHp - newDmg;
				enemyHp = newHp / 1 + (enemyArmor / 100);
				cout << "\nYou deal " << newDmg << " physical damage to " << enemyName;
			}
			else
			{
				cout << "\n";
				cout << "Your out of stamina " << endl;
				playerTurn();
			}
		}
		playerTurn();
	}
	else if (input == 2)
	{
		for (int i = attack(); i > 0; i--)
		{
			if (mp > 0)
			{
				mp--;
				newDmg = ap;
				srand(time(NULL));
				secret = rand() % (100 - enemyAgility) + 1;
				if (secret <= enemyAgility)
				{
					cout << "\nYou Miss" << endl;
					newDmg = 0;
				}
				newHp = enemyHp * 1 + (enemyMr / 100);
				newHp = newHp - newDmg;
				enemyHp = newHp / 1 + (enemyMr / 100);
				cout << "\nYou deal " << newDmg << " magic damage to " << enemyName;
			}
			else
			{
				cout << "\n";
				cout << "Your out of mana" << endl;
				playerTurn();
			}
		}
		playerTurn();
	}
	else if (input == 3)
	{
		infoBag();
	}
	else if (input == 4)
	{
		enemyTurn();
	}
	else
	{
		endProgram();
	}
}



int attack()//uses a for loop to make attacking easier
{
	cout << "How many times do you want to attack" << endl;
	cin >> attackNum;
	return attackNum;
}
