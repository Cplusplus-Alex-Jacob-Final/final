#include <iostream>
#include <string>
#include "Headergame.h"
using namespace std;

void endProgram()//GAME OVER
{
	cout << endl;
	cout << "\nGAME OVER" << endl;
	cout << "Please Click Abort" << endl;
	terminate();//ENDS PROGRAM
}

void statSetter()//sets your stats back to normal after battle
{
	if (lives <= 0)
	{
		endProgram();
	}
	if (finalBossWins == 1 && bonusBossWins == 1)
	{
		cout << "You Win... congrats?" << endl;
		system("pause");
	}

	hp = maxHp;
	mp = maxMp;
	stamina = maxStamina;
	lvlChooser();
}

void lvlChooser()//allows the player to choose a area they wish to go to
{
	do
	{
		cout << "\n";
		cout << "Lives: " << lives << " || Gold: " << gold << endl;
		cout << "\n";
		cout << "Choose an area to go to: " << endl;
		cout << "9. Info/Shop: Buy Items and See Your Stats" << endl;
		cout << "1. Level 1: " << lvl1Wins << "/3 100g, 100xp" << endl;
		cout << "2. Level 2: " << lvl2Wins << "/3 200g, 200xp" << endl;
		cout << "3. Level 3: " << lvl3Wins << "/3 300g, 300xp" << endl;
		cout << "4. Level 4: " << lvl4Wins << "/3 400g, 400xp" << endl;
		cout << "5. Final Boss: " << finalBossWins << "/1 1000g, 1000xp" << endl;
		cout << "6. Bonus lvl1: " << bonuslvl1Wins << "/1 500g, 500xp" << endl;
		cout << "7. Bonus lvl2: " << bonuslvl2Wins << "/1 800g, 800xp" << endl;
		cout << "8. Bonus Final Boss: " << bonusBossWins << "/1 1000g, 1000xp" << endl;
		cout << "0. End the program" << endl;
		cout << "Enter a number here --> ";
		cin >> input;
		cout << "\n";
	} while (input < 0 || input > 9);
	if (input == 0)
	{
		endProgram();
	}
	else if (input == 1)
	{
		if (lvl1Wins < 3)
		{
			lvl = 1;
			lvl1Start();
		}
		else
		{
			cout << "You can only beat this level 3 times" << endl;
			lvlChooser();
		}
	}
	else if (input == 2)
	{
		if (lvl2Wins < 3 && lvl1Wins > 0)
		{
			lvl = 2;
			lvl2Start();
		}
		else
		{
			cout << "Level 1 needs to be beaten to play this level and" << endl;
			cout << "you can only beat this level 3 times" << endl;
			lvlChooser();
		}
	}
	else if (input == 3)
	{
		if (lvl3Wins < 3 && lvl2Wins > 0)
		{
			lvl = 3;
			lvl3Start();
		}
		else
		{
			cout << "Level 2 needs to be beaten to play this level and" << endl;
			cout << "you can only beat this level 3 times" << endl;
			lvlChooser();
		}
	}
	else if (input == 4)
	{
		if (lvl4Wins < 3 && lvl3Wins > 0)
		{
			lvl = 4;
			lvl4Start();
		}
		else
		{
			cout << "Level 3 needs to be beaten to play this level and" << endl;
			cout << "you can only beat this level 3 times" << endl;
			lvlChooser();
		}
	}
	else if (input == 5)
	{
		if (finalBossWins < 1 && lvl4Wins > 0)
		{
			lvl = 5;
			finallvlStart();
		}
		else
		{
			cout << "Level 4 needs to be beaten to play this level and" << endl;
			cout << "you can only beat this level 1 time" << endl;
			lvlChooser();
		}
	}
	else if (input == 6)
	{
		if (bonuslvl1Wins < 1 && lvl1Wins > 0 && lvl2Wins > 0)
		{
			lvl = 6;
			bonuslvl1Start();
		}
		else
		{
			cout << "Levels 1 and 2 need to be beaten to play this level and" << endl;
			cout << "you can only beat this level 1 time" << endl;
			lvlChooser();
		}
	}
	else if (input == 7)
	{
		if (bonuslvl1Wins < 1 && lvl1Wins > 0 && lvl2Wins > 0)
		{
			lvl = 7;
			bonuslvl2Start();
		}
		else
		{
			cout << "Levels 3 and 4 need to be beaten to play this level and" << endl;
			cout << "you can only beat this level 1 time" << endl;
			lvlChooser();
		}
	}
	else if (input == 8)
	{
		if (bonuslvl1Wins < 1 && lvl1Wins > 0 && lvl2Wins > 0)
		{
			lvl = 8;
			bonusFinallvlStart();
		}
		else
		{
			cout << "Bonus levels 1 and 2 need to be beaten to play this level and" << endl;
			cout << "you can only beat this level 1 time" << endl;
			lvlChooser();
		}
	}
	else
	{
		shop();
	}
}