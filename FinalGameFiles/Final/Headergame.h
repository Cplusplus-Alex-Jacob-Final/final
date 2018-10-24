#pragma
#include <string>
using namespace std;

//METHOD SECTION:
//Main Methods
void wizard();
void thief();
void warrior();
int main();
//lvlChooser Methods
void endProgram();
void statSetter();
void lvlChooser();
//battle Methods
void lvl1Start();
void lvl2Start();
void lvl3Start();
void lvl4Start();
void bonuslvl1Start();
void bonuslvl2Start();
void finallvlStart();
void bonusFinallvlStart();
void checker();
void enemyTurn();
void playerTurn();
int attack();
//shop Methods
void shop();
void consumables();
void weapons();
void armors();
//variable Methods
bool getItem(int number);
void setItemStats(int itemNum);
void setItem(int, bool trueFalse);

//VARIABLE SECTION:
//Main Variables
extern string name;
extern int maxHp;
extern int maxMp;
extern int maxStamina;
extern int armor;
extern int mr;
extern int ap;
extern int ad;
extern int agility;
extern int luck;
extern int input;
extern int class1;
//lvlChooser Variables
extern int lives;
extern int finalBossWins; 
extern int bonusBossWins;
extern int hp;
extern int mp;
extern int stamina;
extern int lvl1Wins;
extern int lvl2Wins;
extern int lvl3Wins;
extern int lvl4Wins;
extern int bonuslvl1Wins;
extern int bonuslvl2Wins;
extern int gold;
extern int lvl;
//battle Variables
extern string enemyName;
extern int attackNum;
extern int enemyAgility;
extern int enemyLuck;
extern int enemyHp;
extern int enemyArmor;
extern int enemyMr;
extern int enemyStamina;
extern int enemyMana;
extern int enemyAttackDmg;
extern int enemyMagicDmg;
extern int enemyMaxHp;
extern int enemyMaxMana;
extern int enemyMaxStamina;
extern int newDmg;
extern int secret;
extern int newHp;
extern int hpPotions;
extern int mpPotions;
extern int staminaPotions;
//shop Variables
extern bool item;
extern int itemNum;
//variable Variables
extern int number2;