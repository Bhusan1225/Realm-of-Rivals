class player
{
public:

	string p_name;
	int health = 100;
	int baseDamage = 20;
	
	
	int minHeal = 10;
	int maxHeal = 60;

	int minAdditionalDamage = 1;
	int maxAdditionDamage= 5;
	

	int p_basicDamage( int& health)
	{
		if (health- baseDamage < 0)
		{
			health = 0;
		}
		else
		{
			 health-= baseDamage;
		}
		
		//cout << "health inside base:"<< health << endl;
		cout << "health after base damame:" << health << endl << endl;
		return 0;
		
	}




	player()
	{
		p_name = "harry";
		
	}


	int p_additionDamage(int & minAdditionalDamage, int & maxAdditionDamage, int& health)
	{
		
		srand(static_cast<unsigned>(time(0))); // Seed random generator
		int additionalDamage = minAdditionalDamage + rand() % (maxAdditionDamage - minAdditionalDamage + 1); //formula for random no. generation 
		
		
		if (health - additionalDamage < 0)
		{
			health = 0;
		}
		else
		{
			health -= additionalDamage;
		}

		cout << "health after aditional damage:" << health << endl;
		return health;

	}

	int p_heal(int& minHeal, int& maxHeal , int& health)
	{
		
		
		srand(static_cast<unsigned>(time(0))); // Seed random generator
		int p_heal = minHeal + rand() % (maxHeal - minHeal + 1); //formula for random no. generation 

		if (health + p_heal < 0)
		{
			health = 0;
			cout << " player is died" << endl;

		}
		else if (health + p_heal> 100)
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
	
	

};