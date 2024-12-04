class player
{
public:

	string p_name;
	int health = 100;
	int baseDamage = 20;
	int attackDamage = 20;
	
	
	int minHeal = 10;
	int maxHeal = 60;

	int min_S_Damage = 10;
	int max_S_Damage= 20;
	
	player()
	{
		p_name = "harry";

	}

	int attack(player & target)
	{
		//attack logic
		target.p_basicDamage(target.attackDamage, target.health);

		cout << "Enemy health After taking damage: " << target.health<<endl;

		return target.health;
	}


	int p_basicDamage(int baseDamage, int & health)
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
		return health;
		
	}

	


	int SurpriseMove(int min_S_Damage, int max_S_Damage, int&health)
	{
		
		srand(static_cast<unsigned>(time(0))); // Seed random generator
		int surpriseDamage = min_S_Damage + rand() % (max_S_Damage - min_S_Damage + 1); //formula for random no. generation 
		
		
		if (health - surpriseDamage < 0)
		{
			health = 0;
		}
		else
		{
			health -= surpriseDamage;
		}

		cout << "health after Surprise Move:" << health << endl;
		return health;

	}

	int p_heal(int minheal,int maxheal, int&health)
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