#include <iostream>
#include "worriers.hpp"
using namespace std;

worriers::worriers()
{
	cout << " the worrier" << endl;
}
//worriers::worriers(string n, int h, int a)
//{
//	n = name;
//	h = health;
//	a = attackPower;
//}


//attack , /take damage, / super attack, / heal four option player have 
 int worriers:: attack(worriers& target)
{
	//attack logic
	target.takeDamage(target.attackPower);

	cout << "Enemy health After taking damage: " << target.health << endl;

	return target.health;
}						
 //why warries &target?

 int worriers:: takeDamage(int Damage)
 {
	 if (health - Damage < 0)
	 {
		 health = 0;
	 }
	 else
	 {
		 health -= Damage;
	 }

	 //cout << "health inside base:"<< health << endl;
	 cout << "health after base damame:" << health << endl << endl;
	 return health;

 }

 int worriers::SurpriseMove(int min_S_Damage, int max_S_Damage, worriers& target)
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

 int worriers::heal(int minheal, int maxheal, int& health)
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


 //added
 bool worriers::isAlive() {
	 return health > 0;
 }

 string worriers:: getName() {
	 return name;
 }

 int worriers::getHealth() {
	 return health;
 }