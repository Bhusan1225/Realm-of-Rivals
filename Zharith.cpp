#include "Zharith.hpp";

#include <iostream>
using namespace std;


Zharith::Zharith()
{
	cout << "I am Zharith, the Eternal Chronicler." << endl;
}

void Zharith::AltheriaIntro()
{
	cout << "Ah, another soul enters the Arena of Eternity\n" <<
		"in the land of Altheria, where the skies burn crimson\nand secrets whisper in the winds.\n" << endl;
}

string Zharith::PlayerIntro(string& name) {

	cin >> name;
	cout << "Ah," << name << ", a name worthy of the Arena.\nThe Eternal Chronicler welcomes you.\nYour journey begins now, but remember—only\nthe strongest will carve their name into the Codex.\nWill you rise... or fade into legend?\n\n";

}