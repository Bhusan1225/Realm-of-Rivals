
#include <iostream>
using namespace std;


#include "GameManager.hpp"

	
	gameManager::gameManager()
	{
		cout << "*******************************************Lets start the battle.***************************************" << endl;
	}


	worriers* gameManager::chooseCharacter() {
		int choice;

		cout << "Choose your character:" << endl;
		cout << "1. Guardian\n2. Sentinel\n3. Slayer\n";
		cin >> choice;

		switch (choice) {
		case 1:
			return new Guardian();
		case 2:
			return new sentinel();
		case 3:
			return new Slayer();
		default:
			cout << "Invalid choice, choosing Guardian by default." << endl;
			return new Guardian();
		}
	}


	

	void gameManager::battlebegins(worriers& selected, worriers& target)
	{
		cout << "The Arena gates creak open, and the crowd's roar fills the air.\nAcross from you, your rival stands, eyes burning with fierce ambition. Every heartbeat echoes in your chest.\nThere's no turning back now.Prepare yourself—the battle begins!\n";
		

		battleloop(selected,target);

	}

	void gameManager::battleloop(worriers& selected, worriers& target)
	{
		//battle loop logic

	}



