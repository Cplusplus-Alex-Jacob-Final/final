#include <iostream>
#include <string>
#include "Headergame.h"
using namespace std;

//The Backwards Legend!!!

void wizard()//Wizard class
{
	maxHp = 150;
	maxMp = 5;
	maxStamina = 1;
	armor = 10;
	mr = 15;
	ap = 15;
	ad = 5;
	agility = 10;
	luck = 10;
	do
	{
		cout << " Your a wizard Harry! :D" << endl;
		cout << "\n" << endl;
		cout << "What type of wizard are you?: " << endl;
		cout << "1. Fire\n2. Ice\n3. Loser " << endl;
		cout << "\n";
		cout << "Enter Number Here --> ";
		cin >> input;
		cout << "\n";

	} while (input < 1 || input > 3);
	if(input == 1)//fire subclass
	{
		class1 = 1;
	}
	else if (input == 2)//ice subclass
	{
		class1 = 2;
	}
	else
	{
		endProgram();
	}
}

void thief()//thief class
{
	maxHp = 165;
	maxMp = 2;
	maxStamina = 5;
	armor = 10;
	mr = 8;
	ap = 10;
	ad = 8;
	agility = 15;
	luck = 15;
	do
	{
		cout << "What type of thief are you? " << endl;
		cout << "1. Archer\n2. Assassin\n3. Loser " << endl;
		cout << "\n";
		cout << "Enter Number Here --> ";
		cin >> input;
		cout << "\n";

	} while (input < 1 || input > 3);
	if (input == 1)//archer subclass
	{
		class1 = 3;
	}
	else if (input == 2)//assassin subclass
	{
		class1 = 4;
	}
	else
	{
		endProgram();
	}
}

void warrior()//warrior class
{
	maxHp = 180;
	maxMp = 1;
	maxStamina = 3;
	armor = 15;
	mr = 15;
	ap = 5;
	ad = 15;
	agility = 10;
	luck = 10;
	do
	{
		cout << "What type of warrior are you? " << endl;
		cout << "1. Fighter\n2. Tank\n3. Loser " << endl;
		cout << "\n";
		cout << "Enter Number Here --> ";
		cin >> input;
		cout << "\n";

	} while (input < 1 || input > 3);
	if (input == 1)//fighter subclass
	{
		class1 = 5;
	}
	else if (input == 2)//tank subclass
	{
		class1 = 6;
	}
	else
	{
		endProgram();
	}
}

int main()//start of program
{
	cout << "What is your name?: " << endl;
	cin >> name;
	cout << "\n";
	do
	{
		cout << "What class sounds cool to you? :\n1. Wizard\n2. Thief\n3. Warrior\n4. Loser " << endl;
		cout << "\n";
		cout << "Enter Number Here --> ";
		cin >> input;
		cout << "\n";

	} while (input < 1 || input > 4);
	if (input == 1)//wizard class
	{
		wizard();
	}
	else if (input == 2)//thief class
	{
		thief();
	}
	else if (input == 3)//warrior class
	{
		warrior();
	}
	else
	{
		endProgram();
	}
	statSetter();

	system("pause");
	return 0;
}