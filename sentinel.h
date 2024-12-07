#pragma once
#include <string>
#include "worriers.hpp"



class sentinel : public worriers
{
	public:
	string p_name;
	int health = 100;
	int takenDamage = 20;
	int attackPower = 20;


	int minHeal = 10;
	int maxHeal = 60;

	int min_S_Damage = 10;
	int max_S_Damage = 20;

	sentinel();

	int attack(worriers& target);


	int takeDamage(int baseDamage);

	int SurpriseMove(int min_S_Damage, int max_S_Damage, worriers& target);

	int heal(int minheal, int maxheal);



};

