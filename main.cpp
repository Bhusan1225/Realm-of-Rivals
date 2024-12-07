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
	
	
	
	worriers* worriers1 = new worriers();
	Zharith* Zhar = new Zharith();
	gameManager* game = new gameManager();



	Zhar->AltheriaIntro();
	cout << "Tell me, warrior, what name shall echo in the Codex of Rivals?" << endl;
	//worriers1->name;
	//Zhar->PlayerIntro(worriers1->name);


	//charecter selection
	Zhar->optionWarrior(Zhar->option);
	
	//game ->
	
	cout << "+++++++++++++++++end of the code++++++++++++++++++"<< endl;
	delete Zhar;     // Freeing memory for the Zharith object
	//delete worriers1;  // Freeing memory for the player object
	return 0;

}