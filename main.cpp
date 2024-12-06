#include <iostream>
#include  "player.hpp"
#include "Zharith.hpp"
#include "GameManager.cpp"

using namespace std;

enum class warrior
{
	Guardian,
	Sentinel,
	Slayer
};








int main()
{
	player* player1 = new player();
	player* guardian = new Guardian();
	Zharith* Zhar = new Zharith();
	gameManager* game = new gameManager();



	Zhar->AltheriaIntro();
	cout << "Tell me, warrior, what name shall echo in the Codex of Rivals?" << endl;
	player1->name;
	Zhar->PlayerIntro(player1->name);



	Zhar->optionWarrior(Zhar->option);
	game->chooseWarrior(Zhar->option, player1->name);



	//player base damage
	player1->takeDamage(player1->baseDamage, player1->health);
	player1->takeDamage(player1->baseDamage, player1->health);
	player1->takeDamage(player1->baseDamage, player1->health);
	player1->takeDamage(player1->baseDamage, player1->health);





	//player addition damage
	player1->SurpriseMove(player1->min_S_Damage, player1->max_S_Damage, *guardian);




	//player heal 
	player1->heal(player1->minHeal, player1->maxHeal, player1->health);

	player1->attack(*guardian);

	delete Zhar;     // Freeing memory for the Zharith object
	delete player1;  // Freeing memory for the player object
	return 0;

}