

class player
{
public:

	string p_name;
	int health = 100;
	int takenDamage = 20;
	int attackDamage = 20;
	
	
	int minHeal = 10;
	int maxHeal = 60;

	int min_S_Damage = 10;
	int max_S_Damage = 20;
	
	player()
	{
		p_name = "harry";

	}

	virtual int attack(player & target)
	{
		//attack logic
		target.takeDamage(target.attackDamage, target.health);

		cout << "Enemy health After taking damage: " << target.health<<endl;

		return target.health;
	}

	virtual int takeDamage(int baseDamage, int & health)
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

	virtual int SurpriseMove(int min_S_Damage, int max_S_Damage, player& target)
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

	virtual int heal(int minheal,int maxheal, int&health)
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

class Guardian : public player
{
public:
	string name;
	int health = 100;
	int baseDamage = 20;
	int attackDamage = 20;


	int minHeal = 10;
	int maxHeal = 60;

	int min_S_Damage = 10;
	int max_S_Damage = 20;

	Guardian()
	{
		name = "The Guardian";
	}

	int attack(player& target)
	{
		//attack logic
		target.takeDamage(target.attackDamage, target.health);

		cout << "Enemy health After taking damage: " << target.health << endl;

		return target.health;
	}

	int takeDamage(int baseDamage, int& health)
	{
		if (health - baseDamage < 0)
		{
			health = 0;
		}
		else
		{
			health -= baseDamage;
		}

		//cout << "health inside base:"<< health << endl;
		cout << "health after base damame:" << health << endl << endl;
		return health;

	}

	int SurpriseMove(int min_S_Damage, int max_S_Damage, player& target)
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
};

class Sentinel : public player
{
public:
	string name;
	int health = 100;
	int baseDamage = 20;
	int attackDamage = 20;


	int minHeal = 10;
	int maxHeal = 60;

	int min_S_Damage = 10;
	int max_S_Damage = 20;

	Sentinel()
	{
		name = "The Sentinel";
	}

	int attack(player& target)
	{
		//attack logic
		target.takeDamage(target.attackDamage, target.health);

		cout << "Enemy health After taking damage: " << target.health << endl;

		return target.health;
	}

	int takeDamage(int baseDamage, int& health)
	{
		if (health - baseDamage < 0)
		{
			health = 0;
		}
		else
		{
			health -= baseDamage;
		}

		//cout << "health inside base:"<< health << endl;
		cout << "health after base damame:" << health << endl << endl;
		return health;

	}

	int SurpriseMove(int min_S_Damage, int max_S_Damage, player& target)
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
};

class Slayer : public player
{
public:
	string name;
	int health = 100;
	int baseDamage = 20;
	int attackDamage = 20;


	int minHeal = 10;
	int maxHeal = 60;

	int min_S_Damage = 10;
	int max_S_Damage = 20;

	Slayer()
	{
		name = "The Slayer";
	}

	int attack(player& target)
	{
		//attack logic
		target.takeDamage(target.attackDamage, target.health);

		cout << "Enemy health After taking damage: " << target.health << endl;

		return target.health;
	}

	 int takeDamage(int baseDamage, int& health)
	{
		if (health - baseDamage < 0)
		{
			health = 0;
		}
		else
		{
			health -= baseDamage;
		}

		//cout << "health inside base:"<< health << endl;
		cout << "health after base damame:" << health << endl << endl;
		return health;

	}

	int SurpriseMove(int min_S_Damage, int max_S_Damage, player& target)
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
};