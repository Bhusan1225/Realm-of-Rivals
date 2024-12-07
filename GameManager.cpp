#include <iostream>
using namespace std;
#include "warriors.hpp"



enum class warrior
{
	Guardian =1,
	Sentinel,
	Slayer
};



class gameManager {
public:
	int option= 0;
	
	
	gameManager() 
	{
		cout << "*******************************************Lets start the battle.***************************************" << endl;
	}


	void chooseWarrior(int & option)
	{
		bool selectplayer = false;
		

		while (selectplayer ==false )
		{

			cin >> option;
			switch (option)
			{
			case 1:// The Guardian introduction

				
				cout << "You have chosen the Guardian,Enduring strength, unbreakable defense, steady." << endl;
				selectplayer = true;
				break;

			case 2:
				// The Sentinel introduction

				
				cout << "You have chosen the Sentinel, balanced, adaptable, masters no specialty." << endl;
				selectplayer = true;
				break;

			case 3:
				// The Slayer introduction


				cout << "You have chosen the Slayer, High damage, fast, but fragile." << endl;
				selectplayer = true;
				break;

			default:
				cout << "Invalid choice. Please select a valid character type." << endl;
				
				break;
			}
		}
		

	}

	void battlebegins(const string& p_name,player& selected, player& target)
	{
		cout << "The Arena gates creak open, and the crowd's roar fills the air.\nAcross from you, your rival stands, eyes burning with fierce ambition. Every heartbeat echoes in your chest.\nThere's no turning back now.Prepare yourself—the battle begins!\n";
		cout << "Are you ready " << p_name << "?" << endl;

		battleloop(selected,target);

	}

	void battleloop(player& selected, player& target)
	{
		//battle loop logic

	}
};


