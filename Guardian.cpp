#include "Guardian.h"
#include <iostream>

using namespace std;

Guardian::Guardian() 
{
	cout << "hy i am guardian." << endl;
}


int Guardian::attack(worriers& target)
{
	//attack logic
	target.takeDamage(target.attackPower);

	cout << "Enemy health After taking damage: " << target.health << endl;

	return target.health;
}

int Guardian::takeDamage(int baseDamage)
{
	if (health - baseDamage < 0)
	{
		health = 0;
	}
	else
	{
		health -= baseDamage;
	}

	
	cout << "health after base damame:" << health << endl << endl;
	return health;

}

int Guardian::SurpriseMove(int min_S_Damage, int max_S_Damage, worriers& target)
{

	srand(static_cast<unsigned>(time(0))); // Seed random generator
	int surpriseDamage = min_S_Damage + rand() % (max_S_Damage - min_S_Damage + 1); //formula for random no. generation 


	if (target.health - surpriseDamage < 0)
	{
		target.health = 0;
	}
	else
	{
		target.health -= surpriseDamage;
	}

	cout << "health after Surprise Move:" << health << endl;
	return target.health;

}

int Guardian::heal(int minheal, int maxheal, int& health)
{


	srand(static_cast<unsigned>(time(0))); // Seed random generator
	int p_heal = minHeal + rand() % (maxHeal - minHeal + 1); //formula for random no. generation 

	if (health + p_heal < 0)
	{
		health = 0;
		cout << " player is died" << endl;

	}
	else if (health + p_heal > 100)
	{
		health = 100;
		cout << "health is full" << endl;
	}
	else
	{
		health += p_heal;
		cout << "health after healing:" << health << endl;
	}


	return health;

}