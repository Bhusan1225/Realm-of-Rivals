#include <iostream>
using namespace std;

#include  "player.hpp"
enum class warrior
{
	Guardian, 
	Sentinel, 
	Slayer
};



class Zharith
{
public:

	int option = 0;
	Zharith()
	{
		cout << "I am Zharith, the Eternal Chronicler." << endl;
	}
	void AltheriaIntro()
	{
		cout << "Ah, another soul enters the Arena of Eternity\n" <<
			"in the land of Altheria, where the skies burn crimson\nand secrets whisper in the winds.\n"<< endl;
	}
	void PlayerIntro(string& pl_name) {
		
		cin >> pl_name;
		cout << "Ah,"  << pl_name <<", a name worthy of the Arena.\nThe Eternal Chronicler welcomes you.\nYour journey begins now, but remember—only the strongest will carve their name into the Codex.\nWill you rise... or fade into legend?\n\n";
			
	}
	void optionWarrior(int option, string &p_name)
	{
		cout<<"You have 3 options to choose the worriers.\n\n"<<
			"Option 1: The Guardian\n"
			"Option 2: The sentinel\n"
			"Option 3: The Slyer\n";
		
		
		cin >> option;
		choosewarrior(option, p_name);
		
		
	}
	
	
	void choosewarrior(int option, string &p_name)
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

	int checkchoice(int goat)
	{
		 goat -= 20;
		 cout <<"in side function" << goat << endl;

		 return 0;
	}

};




int main() 
{
	player* player1 = new player();
	player* enemy = new player();
	Zharith* Zhar = new Zharith();
	


	Zhar ->AltheriaIntro();
	cout << "Tell me, warrior, what name shall echo in the Codex of Rivals?" << endl;
	player1->p_name;
	Zhar->PlayerIntro(player1->p_name);
	
	
	
	Zhar->optionWarrior(Zhar->option, player1->p_name);


	
	//player base damage
	player1->p_basicDamage(player1->baseDamage, player1->health);
	player1->p_basicDamage(player1->baseDamage, player1->health);
	player1->p_basicDamage(player1->baseDamage, player1->health);
	player1->p_basicDamage(player1->baseDamage, player1->health);
	
	
	


	//player addition damage
	player1->SurpriseMove(player1->min_S_Damage, player1->max_S_Damage, player1->health);

	

	
	//player heal 
	player1->p_heal(player1->minHeal, player1->maxHeal, player1->health);
	
	player1->attack(*enemy);

	delete Zhar;     // Freeing memory for the Zharith object
	delete player1;  // Freeing memory for the player object
	return 0;

}
