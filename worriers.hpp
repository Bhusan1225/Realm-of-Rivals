using namespace std;
class worriers
{
public:

	string name;
	int health = 100;
	int takenDamage = 20;
	int attackPower = 20;
	
	
	int minHeal = 10;
	int maxHeal = 60;

	int min_S_Damage = 10;
	int max_S_Damage = 20;
	
	worriers();

	

	virtual int attack(worriers& target);
	

	virtual int takeDamage(int Damage);

	virtual int SurpriseMove(int min_S_Damage, int max_S_Damage, worriers& target);

	virtual int heal(int minheal, int maxheal, int& health);


	bool isAlive();

	string getName();

	int getHealth();
	
};

