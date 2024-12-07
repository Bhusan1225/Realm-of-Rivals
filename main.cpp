using namespace std;
#include <iostream>
#include "Zharith.hpp"
#include "worriers.hpp" 
#include "GameManager.hpp"


enum class warrior
{
	Guardian = 1,
	Sentinel,
	Slayer
};

int main()
{
	Zharith* Zhar = new Zharith();

	Zhar->AltheriaIntro();
	cout << "Tell me, warrior, what name shall echo in the Codex of Rivals?" << endl;
	gameManager manager;
	worriers* worriers1 = manager.chooseCharacter();
	
	
	
	
	



	



	
	
	
	cout << "+++++++++++++++++end of the code++++++++++++++++++"<< endl;
	delete Zhar;     // Freeing memory for the Zharith object
	//delete worriers1;  // Freeing memory for the player object
	return 0;

}