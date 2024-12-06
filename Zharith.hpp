

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
			"in the land of Altheria, where the skies burn crimson\nand secrets whisper in the winds.\n" << endl;
	}
	void PlayerIntro(string& pl_name) {

		cin >> pl_name;
		cout << "Ah," << pl_name << ", a name worthy of the Arena.\nThe Eternal Chronicler welcomes you.\nYour journey begins now, but remember—only\nthe strongest will carve their name into the Codex.\nWill you rise... or fade into legend?\n\n";

	}
	void optionWarrior(int option)
	{
		cout << "I Zharith, can give you 3 options, so choose your worriers wisely.\n\n" <<
			"Option 1: The Guardian\n"
			"Option 2: The sentinel\n"
			"Option 3: The Slyer\n";
		
	}
};