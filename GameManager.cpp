#include <iostream>
using namespace std;


class gameManager {
public:
	gameManager() 
	{
		cout << "*******************************************Lets start the battle.***************************************" << endl;
	}

	void chooseWarrior(int option, string& p_name)
	{


		switch (option)
		{
		case 1:// The Guardian introduction


			cout << "You have chosen the Guardian,Enduring strength, unbreakable defense, steady." << endl;
			battlebegins(p_name);
			break;

		case 2:
			// The Sentinel introduction


			cout << "You have chosen the Sentinel, balanced, adaptable, masters no specialty." << endl;
			battlebegins(p_name);
			break;

		case 3:
			// The Slayer introduction


			cout << "You have chosen the Slayer, High damage, fast, but fragile." << endl;
			battlebegins(p_name);
			break;

		default:
			cout << "Invalid choice. Please select a valid character type." << endl;
			break;
		}

	}

	void battlebegins(const string& pl_name)
	{
		cout << "The Arena gates creak open, and the crowd's roar fills the air.\nAcross from you, your rival stands, eyes burning with fierce ambition. Every heartbeat echoes in your chest.\nThere's no turning back now.Prepare yourself—the battle begins!\n";
		cout << "Are you ready " << pl_name << "?" << endl;

	}


};


