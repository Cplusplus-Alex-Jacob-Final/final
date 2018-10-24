#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "Headergame.h"
using namespace std;

//TO DO:
//add info to the Info/Bag
//set enemy stats

void finallvlStart()
{
	enemyAgility = 0;
	enemyLuck = 0;
	enemyHp = 0;
	enemyArmor = 0;
	enemyMr = 0;
	enemyStamina = 0;
	enemyMana = 0;
	enemyAttackDmg = 0;
	enemyMagicDmg = 0;
	finallvlPlayerTurn();
}

void finallvlChecker()
{
	if (enemyHp <= 0)
	{
		cout << "You Win" << endl;
		finalBossWins++;
		lvlChooser();
	}
	else if (hp <= 0)
	{
		cout << "You Died" << endl;
		lives--;
		lvlChooser();
	}
	finallvlPlayerTurn();
}

void finallvlEnemyTurn()
{
	while (enemyStamina != 0 || enemyStamina < 0)
	{
		enemyStamina--;
		newDmg = enemyAttackDmg;
		srand(time(NULL));
		secret = rand() % (100 - agility) + 1;
		secret2 = rand() % (100 - agility) + 1;
		if (secret == secret2)
		{
			finallvlEnemyTurn();
		}
		secret = rand() % (100 - enemyLuck) + 1;
		secret2 = rand() % (100 - enemyLuck) + 1;
		if (secret == secret2)
		{
			newDmg = newDmg * 2;
		}
		newHp = hp * 1 + (armor / 100);
		newHp = newHp - newDmg;
		hp = newHp / 1 + (armor / 100);
		finallvlEnemyTurn();

	}

	while (enemyMana != 0 || enemyMana < 0)
	{
		enemyMana--;
		newDmg = enemyMagicDmg;
		secret = rand() % (100 - agility) + 1;
		secret2 = rand() % (100 - agility) + 1;
		if (secret == secret2)
		{
			finallvlEnemyTurn();
		}
		newHp = hp * 1 + (mr / 100);
		newHp = newHp - newDmg;
		enemyHp = newHp / 1 + (mr / 100);
		finallvlEnemyTurn();

	}
	finallvlChecker();
}

void finallvlPlayerTurn()
{
	do
	{
		cout << "\n";
		cout << "Health: " << hp;
		cout << "   Mana: " << mp;
		cout << "   Stamina: " << stamina << endl;
		cout << "" << endl;
		cout << "BLANK Appeared!" << endl; //BLANK = enemy name
		cout << "What will you do? :" << endl;
		cout << "" << endl;
		cout << "_______________" << endl;
		cout << "||  Attack.1" << endl;
		cout << "||  Magic.2" << endl;
		cout << "||  Info Bag.3" << endl;
		cout << "||  End Turn.4" << endl;
		cout << "||" << endl;
		cin >> input;

	} while (input < 1 || input > 4);

	if (input == 1)
	{
		stamina--;
		newDmg = ad;
		srand(time(NULL));
		secret = rand() % (100 - enemyAgility) + 1;
		secret2 = rand() % (100 - enemyAgility) + 1;
		if (secret == secret2)
		{
			cout << "\nYou Miss" << endl;
			finallvlPlayerTurn();
		}
		secret = rand() % (100 - luck) + 1;
		secret2 = rand() % (100 - luck) + 1;
		if (secret == secret2)
		{
			newDmg = newDmg * 2;
		}
		newHp = enemyHp * 1 + (enemyArmor / 100);
		newHp = newHp - newDmg;
		enemyHp = newHp / 1 + (enemyArmor / 100);
		finallvlPlayerTurn();
	}
	else if (input == 2)
	{
		mp--;
		newDmg = ap;
		srand(time(NULL));
		secret = rand() % (100 - enemyAgility) + 1;
		secret2 = rand() % (100 - enemyAgility) + 1;
		if (secret == secret2)
		{
			cout << "\nYou Miss" << endl;
			finallvlPlayerTurn();
		}
		newHp = enemyHp * 1 + (enemyMr / 100);
		newHp = newHp - newDmg;
		enemyHp = newHp / 1 + (enemyMr / 100);
		finallvlPlayerTurn();
	}
	else if (input == 3)
	{
		cout << "info" << endl;
		finallvlPlayerTurn();
	}
	else
	{
		finallvlEnemyTurn();
	}
}