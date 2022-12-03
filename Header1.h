
#include <iostream>
#include <chrono>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <windows.h> 
#include <limits>
#include <thread>
#include <iostream>
#include <string>




using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int buy = 0;
int Health_Potion = 0;
int Armor = 0;
int Greatsword = 0;
int kingsMedallion = 0;
int  thiefs_cloak = 0;
int EnemyHead = 0;
int health = 20;
int damage = 4; int mp = 20;
int fire_spell = 0;
int Wizard = 0;
int decision = 0;

class Enemy1 {
public:
	int health;
	int damage;
	string name;
	Enemy1(int health1, int damage1, string name1) {
		health = health1;
		damage = damage1;
		name = name1;
	};

};
class Player {
public:

	string name;
	int merchant;
	Player(string name1,int merchant1 = 0) {
		
		name = name1;
		merchant = merchant1;
	}
	
};
void CombatOptions() {
	cout << endl;
	cout << "1) Attack" << endl;
	cout << "2) Heal" << endl;
	cout << "3) Recharge (Restore 5 MP)" << endl;
	cout << "4) Dodge" << endl;
}


string enemyFunc() { // function creates vector full of enemy names
	ifstream infs;
	string name;
	srand(time(0));
	infs.open("Text.txt");
	istream_iterator<string>start(infs), end;
	vector<string> enemy(start, end);
	name = enemy[rand() % 4];
	return name;
}

string enemyFunc2() { // function creates vector full of enemy names
	ifstream infs;
	string name;
	srand(time(0));
	infs.open("Text1.txt");
	istream_iterator<string>start(infs), end;
	vector<string> enemy(start, end);
	name = enemy[rand() % 4];
	return name;
}
string enemyFunc3() { // function creates vector full of enemy names
	ifstream infs;
	string name;
	srand(time(0));
	infs.open("Text2.txt");
	istream_iterator<string>start(infs), end;
	vector<string> enemy(start, end);
	name = enemy[rand() % 4];
	return name;
}



void typewritter(string message) {
	int x = 0;
	int count = 0;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7);
	while (message[x] != '\0')
	{
		cout << message[x];
		Sleep(0.25);
		x++;
		if (message[x] != ' ' && message[x] != '\n')
			Beep(900, 25);

		if (message[x] == ' ') {
			count++;
			if (count == 8) {
				cout << endl;
				count = 0;
			}



		};

	}
}
void Press_enter() {
	cout << endl;
	cout << endl;
	cout << "Press Enter to Continue...";
	cin.ignore();
	cout << endl;
	cout << endl;
}
void Press_enter_no_text() {

	cin.ignore();
	cout << endl;
	cout << endl;
}
void Press_enter_no_text2() {
	cin.ignore();
}

void PLAYERTEXT(string message) {
	int x = 0;
	int count = 0;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 13);
	while (message[x] != '\0')
	{
		cout << message[x];
		Sleep(0.25);
		x++;
		if (message[x] != ' ' && message[x] != '\n')
			Beep(500, 25);

		if (message[x] == ' ') {
			count++;
			if (count == 12) {
				cout << endl;
				count = 0;
			}



		};

	}
	SetConsoleTextAttribute(h, 7);

}
void Loria(string message) {
	int x = 0;
	int count = 0;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 11);
	while (message[x] != '\0')
	{
		cout << message[x];
		Sleep(0.25);
		x++;
		if (message[x] != ' ' && message[x] != '\n')
			Beep(420, 25);

		if (message[x] == ' ') {
			count++;
			if (count == 12) {
				cout << endl;
				count = 0;
			}



		};

	}
	SetConsoleTextAttribute(h, 7);

}
void Slime(string message) {
	int x = 0;
	int count = 0;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 10);
	while (message[x] != '\0')
	{
		cout << message[x];
		Sleep(0.25);
		x++;
		if (message[x] != ' ' && message[x] != '\n')
			Beep(200, 25);

		if (message[x] == ' ') {
			count++;
			if (count == 12) {
				cout << endl;
				count = 0;
			}



		};

	}
	SetConsoleTextAttribute(h, 7);

}
void Wizard101(string message) {
	int x = 0;
	int count = 0;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 1);
	while (message[x] != '\0')
	{
		cout << message[x];
		Sleep(0.25);
		x++;
		if (message[x] != ' ' && message[x] != '\n')
			Beep(345, 25);

		if (message[x] == ' ') {
			count++;
			if (count == 12) {
				cout << endl;
				count = 0;
			}



		};

	}
	SetConsoleTextAttribute(h, 7);

}
void Merchant(string message) {
	int x = 0;
	int count = 0;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 14);
	while (message[x] != '\0')
	{
		cout << message[x];
		Sleep(0.25);
		x++;
		if (message[x] != ' ' && message[x] != '\n')
			Beep(300, 0);

		if (message[x] == ' ') {
			count++;
			if (count == 12) {
				cout << endl;
				count = 0;
			}



		};

	}
	SetConsoleTextAttribute(h, 7);
}
void Merchant2() {
	cout << R"(   .------\ /------.
   |       -       |
   |               |
   |               |
   |               |
_______________________
===========.===========
  / ~~~~~     ~~~~~ \
 /|     |     |\
 W   ---  / \  ---   W
 \.      |o o|      ./
  |                 |
  \    #########    /
   \  ## ----- ##  /
    \##         ##/
     \_____v_____/)" << endl;
	cout << "Merchant: ";
	Merchant(" Good evening hero, would you care to buy some wares?");
	cout << endl << endl;
	typewritter("1) Knight armor(+10 permanent Health)");
	cout << endl;
	typewritter("2) Kings Medallion(???)");
	cout << endl;
	typewritter("3) Greatsword(+5 dmg)");
	cout << endl;
	typewritter("4) Healing Potions(+10 hp / 1 time use / get 2 potions per purchase)");
	cout << endl;
	typewritter("5) thief's cloak (+20% dodge chance)");
	cout << endl;
	typewritter("6) leave");
	cout << endl;




}
void Enemy(string message) {
	int x = 0;
	int count = 0;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 2);
	while (message[x] != '\0')
	{
		cout << message[x];
		Sleep(0.25);
		x++;
		if (message[x] != ' ' && message[x] != '\n')
			Beep(200, 0);

		if (message[x] == ' ') {
			count++;
			if (count == 12) {
				cout << endl;
				count = 0;
			}



		};

	}
}


void Story() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	string message;
	string name;
	int option;
	cout << R"( ___                                                                                          ___      
(   )                                                                                        (   )     
 | | .-.     .--.    ___ .-.      .--.               .--.     ___  ___    .--.       .--.     | |_     
 | |/   \   /    \  (   )   \    /    \             /    \   (   )(   )  /    \    /  _  \   (   __)   
 |  .-. .  |  .-. ;  | ' .-. ;  |  .-. ;           |  .-. '   | |  | |  |  .-. ;  . .' `. ;   | |      
 | |  | |  |  | | |  |  / (___) | |  | |           | |  | |   | |  | |  |  | | |  | '   | |   | | ___  
 | |  | |  |  |/  |  | |        | |  | |           | |  | |   | |  | |  |  |/  |  _\_`.(___)  | |(   ) 
 | |  | |  |  ' _.'  | |        | |  | |           | |  | |   | |  | |  |  ' _.' (   ). '.    | | | |  
 | |  | |  |  .'.-.  | |        | '  | |           | '  | |   | |  ; '  |  .'.-.  | |  `\ |   | ' | |  
 | |  | |  '  `-' /  | |        '  `-' /           ' `-'  |   ' `-'  /  '  `-' /  ; '._,' '   ' `-' ;  
(___)(___)  `.__.'  (___)        `.__.'             `._ / |    '.__.'    `.__.'    '.___.'     `.__.   
                                                        | |                                            
                                                       (___)                                           )" << endl;
	cout << endl;
	cout << endl;
	Press_enter();
	system("Color 07");
	typewritter(" O' Hero of old. Travel back and be reborn again. Be born, Hero! Collect the two artifacts that slumber in this kingdom. Collect those artifacts and our heirloom, the Ashes of Life... for when those comes together Peace will rule on Earth once more. O' Hero, it has come time to unlock that door."
	);
	cout << endl << endl;
	Press_enter_no_text2();

	typewritter(" You awake in a cold and desolate room. The last thing you can remember is visiting the kingdom of Larion... to your right you see a steel longsword and to your left you see a window. You take a glance outside the room. ");
	Press_enter_no_text();
	typewritter(" You can make out amidst all the smoke, an outline of what seems to be monsters. You compose yourself and try to gather your thoughs. You begin by recalling your name: ");
	cin >> name;
	Player newPlayer(name);
	cout << endl;
	cout << endl;

	cout << newPlayer.name << ": ";
	PLAYERTEXT(" Hmm... the kingdom is in ruins. I saw a group of monsters outside, luckily, I still have my sword with me. Why did I wake up here? ");
	Press_enter_no_text2();
	PLAYERTEXT(" We can question that later, For now what should I do: ");
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(h, 7);
	typewritter("1) fight");
	cout << endl;
	typewritter("2) sneak around");
	cout << endl;

	cin >> option;
	while (option != 1 && option != 2) {

		typewritter(" Please enter a valid choice. Try again: ");
		cin >> option;
	}
	if (option == 2) {
		cout << name << ": "; PLAYERTEXT("I'll sneak out through the back. I need more information before I go out and fight again. Let's try not to get anyone's attention in the mean time.");
		cout << endl;
		SetConsoleTextAttribute(h, 7);
		typewritter(" You were able to successfully find a route away from the monsters. You talk with excitement.");	Press_enter_no_text();
	}


	if (option == 1) {
		cout << name << ": ";
		PLAYERTEXT(" Hey! if you're looking for a fight then here it comes!");

		Player newPlayer(name);

		Enemy1 newEnemy(rand() % 15 + 4, rand() % 8 + 2, enemyFunc());
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 7);
		typewritter(" you encountered a "); cout << newEnemy.name << endl << endl;

		typewritter(" HP: "); cout << newEnemy.health << endl;
		typewritter(" Attack Power: "); cout << newEnemy.damage << endl << endl << endl;
		cout << name << ": ";

		cout << name << ": ";
		PLAYERTEXT(" What should I do? "); cout << endl;
		PLAYERTEXT("STATS"); cout << endl;
		PLAYERTEXT("1) HP: "); cout << health << endl;
		PLAYERTEXT("2) Damage: "); cout << damage << endl;
		PLAYERTEXT("3) MP: "); cout << mp << endl;
		SetConsoleTextAttribute(h, 7);









		while (newEnemy.health != 0 ||health != 0)
		{
			cout << endl << endl;
			typewritter(" What will you do now hero? ");
			CombatOptions();
			cin >> decision;
			cout << endl;
			int x = 0;
			int y = 0;

			if (decision != 1 && decision != 2 && decision != 3 && decision != 4) {
				SetConsoleTextAttribute(h, 12);
				typewritter(" I see you trying to be sly, anyways, please select a valid option: ");
				cin >> decision;
			}
			SetConsoleTextAttribute(h, 7);
			if (decision == 1)

			{

				newEnemy.health = newEnemy.health -damage;

				if (newEnemy.health <= 0)
				{
					typewritter(" You beat the ");
					cout << newEnemy.name << "!" << endl << endl;
					typewritter(" +1 enemy head");
					cout << endl << endl;

					break;
				}
				else
				{
					typewritter(" You slash the enemy. ");
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left.");
					cout << endl << endl;

				}
			}



			else if (decision == 2)
			{
				if (Health_Potion > 0)
				{
					Health_Potion = Health_Potion - 1;
					health = health + 10;
					typewritter(" You've gained an additional 10 HP!");

				}
				if (Health_Potion <= 0)

				{
					cout << " You don't have any health potions!" << endl;
				}
			}


			else if (decision == 3)

			{
				mp = mp + 5;
				typewritter(" You began recharging MP. Current mp: ");
				cout << mp << endl;

			}

			int srand(NULL);
			y = rand() % 10 + 1;

			if (decision == 4) {
				if (y > 8) {
					typewritter(" You dodged successfully and take a quick slash at the enemy");
					cout << endl;
					newEnemy.health - 2;
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
					cout << endl << endl;
					typewritter(" What will you do now hero? ");
					continue;
				}
				else {
					typewritter(" You failed to dodge.");
				}
			}



			x = rand() % 4;
			if (x >= 1)
			{

				typewritter(" The "); cout << newEnemy.name;
				typewritter(" lashed out!");
				cout << endl;
				health = health - newEnemy.damage;

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
				cout << endl << endl;
				int y = 1;



			}


			else if (x < 1)
			{
				typewritter(" The "); cout << newEnemy.name;
				typewritter(" sent out a weak attack");
				cout << endl;
				if (newEnemy.damage > 2) {health = health - (newEnemy.damage - 2); }
				else { health = health - (newEnemy.damage - 1); }

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
			}

			if (health <= 0) {
				SetConsoleTextAttribute(h, 4);
				Beep(400, 200);
				Beep(300, 200);
				Beep(200, 400);
				cout << R"(                                     ___                      ___  
                                     (   )  .-.               (   ) 
 ___  ___    .--.    ___  ___      .-.| |  ( __)   .--.     .-.| |  
(   )(   )  /    \  (   )(   )    /   \ |  (''")  /    \   /   \ |  
 | |  | |  |  .-. ;  | |  | |    |  .-. |   | |  |  .-. ; |  .-. |  
 | |  | |  | |  | |  | |  | |    | |  | |   | |  |  | | | | |  | |  
 | '  | |  | |  | |  | |  | |    | |  | |   | |  |  |/  | | |  | |  
 '  `-' |  | |  | |  | |  | |    | |  | |   | |  |  ' _.' | |  | |  
  `.__. |  | '  | |  | |  ; '    | '  | |   | |  |  .'.-. | '  | |  
  ___ | |  '  `-' /  ' `-'  /    ' `-'  /   | |  '  `-' / ' `-'  /  
 (   )' |   `.__.'    '.__.'      `.__,'   (___)  `.__.'   `.__,'   
  ; `-' '                                                           
   .__.'                                                            )" << endl;


				exit(3);

			}
		}





	}
	if (decision == 1) {
		EnemyHead =EnemyHead + 1;
	}
	Press_enter_no_text();
	cout << name << ": ";

	PLAYERTEXT(" I DID IT! Time to go find if there are any survivors. I think I hear some voices coming from that direction.");
	Press_enter_no_text();

	typewritter(" You traverse along the ruins of a broken kingdom. You hear the wailing  of monsters and humans alike. Suddenly... you find yourself amongst the enterance of a survivor camp. You walk inside and encounter a strange man. He claims to be a merchant.");
	cout << endl << endl;
	Press_enter_no_text2();
	cout << R"(   .------\ /------.
   |       -       |
   |               |
   |               |
   |               |
_______________________
===========.===========
  / ~~~~~     ~~~~~ \
 /|     |     |\
 W   ---  / \  ---   W
 \.      |o o|      ./
  |                 |
  \    #########    /
   \  ## ----- ##  /
    \##         ##/
     \_____v_____/)" << endl;

	cout << "Merchant: ";
	Merchant("Good evening hero, care to buy any wares for your travels?");
	Press_enter_no_text();

	cout << name << ": ";
	PLAYERTEXT(" Oh, depends. What do you sell? ");
	Press_enter_no_text();

	cout << "Merchant: ";
	Merchant(" My wares are up for display, choose something that catches your eye and then we can bargain.");
	Press_enter_no_text();

	cout << name << ": ";
	PLAYERTEXT(" ALright, let me take a look.");
	Press_enter_no_text();

	typewritter(" You walk inside the shop, strangely enough, the inside of the shop looks vastly bigger than it does outside. You gaze upon a couple of purchasable items:");
	cout << endl;
	Press_enter_no_text();
	typewritter("1) Knight armor(+10 permanent Health)");
	cout << endl;
	typewritter("2) Kings Medallion(???)");
	cout << endl;
	typewritter("3) Greatsword(+5 dmg)");
	cout << endl;
	typewritter("4) Healing Potions(+10 hp / 1 time use / get 2 potions per purchase)");
	cout << endl;
	typewritter("5) thief's cloak (+20% dodge chance)");
	cout << endl;
	cout << endl;
	Press_enter_no_text();
	cout << name << ": ";
	PLAYERTEXT(" Wow these items are so neat, but I have no gold on me. In fact I'm not sure why I am even here.");
	Press_enter_no_text();

	cout << "Merchant: ";
	Merchant(" What a curious individual you are. Fret not, I do not take gold as a form of currency, I'm more of a connoisseur for trophies. Bring me the head of the enemies you slay and you may purchase my wares. As for your purpose here, well aren't you here to save the kingdom? Noone would waltz into the ruins of a kingdom without purpose.");
	Press_enter_no_text();

	cout << name << ": ";
	PLAYERTEXT(" The head of my enemies? That's... interesting, alright you have a deal. But why can't I remember if I came to save the kingdom or not?");
	PLAYERTEXT(" I can worry about that later, Merchant, if I need to find your shop elsewhere how will I contact you?");
	Press_enter_no_text();
	cout << endl << endl;
	cout << "Merchant: ";
	Merchant(" Take this bell with you, ring it when you get the chance and you'll summon my shop.");
	newPlayer.merchant = 1;
	Press_enter_no_text();
	cout << name << ": ";
	PLAYERTEXT(" Huh.. talk about handy, thanks merchant.");
	cout << endl << endl;
	cout << "Merchant: ";
	Merchant(" Ring that bell anytime hero, I'm always up for a trade.");
	cout << endl << endl;
	cout << endl;
	cout << endl;
	typewritter(" You make your way out of the camp. You decide to pick up the bell and look at it for a while. Do you ring the bell or continue?");
	cout << endl;
	typewritter("1) ring the bell"); cout << endl;
	typewritter("2) continue along the ruined kingdom");
	cout << endl;
	cin >> option;

	if (option == 1) {
		Merchant2();cout << endl;


		while (EnemyHead >= 1) {
			cout << "Merchant: ";
			Merchant(" Did anything else catch your eye? :");
			cin >> buy;
			if (buy == 1 && Armor != 1)
			{
				Armor = Armor + 1;
				EnemyHead = EnemyHead - 1;
				cout << "Merchant: ";
				Merchant(" fantastic purchase");
				cout << endl;
				cout << endl;


			}
			if (buy == 2)
			{
				cout << "Merchant: ";
				Merchant(" This medallion is worth more than a mere enemy head. Bring me back the head of the tyrant wizard if you wish to purchase this.");
			}
			if (buy == 3 && Greatsword != 1)
			{
				Greatsword = Greatsword + 1;
				EnemyHead = EnemyHead - 1;
				cout << "Merchant: ";
				Merchant(" fantastic purchase");
				cout << endl;



			}
			if (buy == 4)
			{
				Health_Potion =Health_Potion + 2;
				EnemyHead = EnemyHead - 1;
				cout << "Merchant: ";
				Merchant(" fantastic purchase");
				cout << endl;

			}
			else if (buy == 5 && thiefs_cloak != 1)
			{
				thiefs_cloak = thiefs_cloak + 1;
				EnemyHead = EnemyHead - 1;
				cout << "Merchant: ";
				Merchant(" fantastic purchase");
				cout << endl;

			}
			if (buy == 6)
			{
				cout << "Merchant: ";
				Merchant(" I'll see you around hero.");
				cout << endl;


			}
		}
		if (EnemyHead < 1) {
			Press_enter_no_text();
			cout << endl;
			cout << "Merchant: ";
			Merchant(" ... seems as if you have nothing else to offer. I shall be on my way, contact me when you have any trophies for me.");


		}
	}






	if (option == 2) { cout << name << ": ";PLAYERTEXT(" I won't ring it just now. Let's see what else we can find."); }
	Press_enter_no_text();
	cout << endl;
	cout << "Merchant: ";
	Merchant(" I'll see you around hero.");
	cout << endl;
	typewritter(" You wave goodbye to the merchant and go along your journey. You begin to walk along the exterior of the castle. you get a glimpse of what seems to be a new area. You can't quite make sure what it is, what do you see? :");
	cout << endl;
	typewritter("1) a dark forest");
	cout << endl;
	typewritter("2) a murky swamp");
	cin >> option;
	cout << endl;
	if (option == 1)
	{
		health = 20;
		int damage = 4; int mp = 20;

		Enemy1 newEnemy(rand() % 20 + 1, rand() % 8 + 2, enemyFunc2());
		typewritter(" You head towards the dark forest where you come across a ");
		cout << newEnemy.name << endl;

		typewritter(" HP: "); cout << newEnemy.health << endl;
		typewritter(" Attack Power: "); cout << newEnemy.damage << endl << endl << endl;
		
		cout << name << ": ";
		if (Armor == 1) {
			health = health + 10;
		}
		if (Greatsword == 1) {
			damage = damage + 5;
		}


		cout << name << ": ";
		PLAYERTEXT(" What should I do? "); cout << endl;
		PLAYERTEXT("STATS"); cout << endl;
		PLAYERTEXT("1) HP: "); cout << health << endl;
		PLAYERTEXT("2) Damage: "); cout << damage << endl;
		PLAYERTEXT("3) MP: "); cout << mp << endl;
		SetConsoleTextAttribute(h, 7);
		while (newEnemy.health != 0 || health != 0)
		{
			cout << endl << endl;
			typewritter(" What will you do now hero? ");
			CombatOptions();
			cin >> decision;
			cout << endl;
			int x = 0;
			int y = 0;

			if (decision != 1 && decision != 2 && decision != 3 && decision != 4) {
				SetConsoleTextAttribute(h, 12);
				typewritter(" I see you trying to be sly, anyways, please select a valid option: ");
				cin >> decision;
			}
			SetConsoleTextAttribute(h, 7);
			if (decision == 1)

			{

				newEnemy.health = newEnemy.health - damage;

				if (newEnemy.health <= 0)
				{
					typewritter(" You beat the ");
					cout << newEnemy.name << "!" << endl << endl;
					typewritter(" +1 enemy head");
					EnemyHead = EnemyHead + 1;
					cout << endl << endl;

					break;
				}
				else
				{
					typewritter(" You slash the enemy. ");
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left.");
					cout << endl << endl;

				}
			}



			else if (decision == 2)
			{
				if (Health_Potion > 0)
				{
					Health_Potion = Health_Potion - 1;
					health =health + 10;
					typewritter(" You've gained an additional 10 HP!");

				}
				if (Health_Potion <= 0)

				{
					cout << " You don't have any health potions!" << endl;
				}
			}


			else if (decision == 3)

			{
				mp = mp + 5;
				typewritter(" You began recharging MP. Current mp: ");
				cout << mp << endl;

			}

			int srand(NULL);
			y = rand() % 10 + 1;

			if (decision == 4) {
				if (y > 8 && thiefs_cloak != 1) {
					typewritter(" You dodged successfully and take a quick slash at the enemy");
					cout << endl;
					newEnemy.health - 2;
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
					cout << endl << endl;
					typewritter(" What will you do now hero? ");
					continue;
				}
				else if (thiefs_cloak == 1) {
					if (y > 6) {
						typewritter(" You dodged successfully and take a quick slash at the enemy");
						cout << endl;
						newEnemy.health - 2;
						cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
						cout << endl << endl;
						typewritter(" What will you do now hero? ");
						continue;
					}
				}
				else {
					typewritter(" You failed to dodge.");
				}
			}



			x = rand() % 4;
			if (x >= 1)
			{

				typewritter(" The "); cout << newEnemy.name;
				typewritter(" lashed out!");
				cout << endl;
				health = health - newEnemy.damage;

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
				cout << endl << endl;
				int y = 1;



			}


			else if (x < 1)
			{
				typewritter(" The "); cout << newEnemy.name;
				typewritter(" sent out a weak attack");
				cout << endl;
				if (newEnemy.damage > 2) { health = health - (newEnemy.damage - 2); }
				else { health = health - (newEnemy.damage - 1); }

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
			}

			if (health <= 0) {
				SetConsoleTextAttribute(h, 4);
				Beep(400, 200);
				Beep(300, 200);
				Beep(200, 400);
				cout << R"(                                     ___                      ___  
                                     (   )  .-.               (   ) 
 ___  ___    .--.    ___  ___      .-.| |  ( __)   .--.     .-.| |  
(   )(   )  /    \  (   )(   )    /   \ |  (''")  /    \   /   \ |  
 | |  | |  |  .-. ;  | |  | |    |  .-. |   | |  |  .-. ; |  .-. |  
 | |  | |  | |  | |  | |  | |    | |  | |   | |  |  | | | | |  | |  
 | '  | |  | |  | |  | |  | |    | |  | |   | |  |  |/  | | |  | |  
 '  `-' |  | |  | |  | |  | |    | |  | |   | |  |  ' _.' | |  | |  
  `.__. |  | '  | |  | |  ; '    | '  | |   | |  |  .'.-. | '  | |  
  ___ | |  '  `-' /  ' `-'  /    ' `-'  /   | |  '  `-' / ' `-'  /  
 (   )' |   `.__.'    '.__.'      `.__,'   (___)  `.__.'   `.__,'   
  ; `-' '                                                           
   .__.'                                                            )" << endl;


				exit(3);

			}
		}
	}
	if (option == 2) {

		health = 20;
		int damage = 4; int mp = 20;

		Enemy1 newEnemy(rand() % 20 + 1, rand() % 8 + 2, enemyFunc3());
		typewritter(" You head towards the swamp where you come across a ");
		cout << newEnemy.name << endl;

		typewritter(" HP: "); cout << newEnemy.health << endl;
		typewritter(" Attack Power: "); cout << newEnemy.damage << endl << endl << endl;

		cout << name << ": ";
		if (Armor == 1) {
			health = health + 10;
		}
		if (Greatsword == 1) {
			damage = damage + 5;
		}



		PLAYERTEXT(" What should I do? "); cout << endl;
		PLAYERTEXT("STATS"); cout << endl;
		PLAYERTEXT("1) HP: "); cout << health << endl;
		PLAYERTEXT("2) Damage: "); cout << damage << endl;
		PLAYERTEXT("3) MP: "); cout << mp << endl;
		SetConsoleTextAttribute(h, 7);
		while (newEnemy.health != 0 || health != 0)
		{
			cout << endl << endl;
			typewritter(" What will you do now hero? ");
			CombatOptions();
			cin >> decision;
			cout << endl;
			int x = 0;
			int y = 0;

			if (decision != 1 && decision != 2 && decision != 3 && decision != 4) {
				SetConsoleTextAttribute(h, 12);
				typewritter(" I see you trying to be sly, anyways, please select a valid option: ");
				cin >> decision;
			}
			SetConsoleTextAttribute(h, 7);
			if (decision == 1)

			{

				newEnemy.health = newEnemy.health - damage;

				if (newEnemy.health <= 0)
				{
					typewritter(" You beat the ");
					cout << newEnemy.name << "!" << endl << endl;
					typewritter(" +1 enemy head");
					EnemyHead = EnemyHead + 1;
					cout << endl << endl;

					break;
				}
				else
				{
					typewritter(" You slash the enemy. ");
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left.");
					cout << endl << endl;

				}
			}



			else if (decision == 2)
			{
				if (Health_Potion > 0)
				{
					Health_Potion = Health_Potion - 1;
					health = health + 10;
					typewritter(" You've gained an additional 10 HP!");

				}
				if (Health_Potion <= 0)

				{
					cout << " You don't have any health potions!" << endl;
				}
			}


			else if (decision == 3)

			{
				mp = mp + 5;
				typewritter(" You began recharging MP. Current mp: ");
				cout << mp << endl;

			}

			int srand(NULL);
			y = rand() % 10 + 1;

			if (decision == 4) {
				if (y > 8 && thiefs_cloak != 1) {
					typewritter(" You dodged successfully and take a quick slash at the enemy");
					cout << endl;
					newEnemy.health - 2;
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
					cout << endl << endl;
					typewritter(" What will you do now hero? ");
					continue;
				}
				else if (thiefs_cloak == 1) {
					if (y > 6) {
						typewritter(" You dodged successfully and take a quick slash at the enemy");
						cout << endl;
						newEnemy.health - 2;
						cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
						cout << endl << endl;
						typewritter(" What will you do now hero? ");
						continue;
					}
				}
				else {
					typewritter(" You failed to dodge.");
				}
			}



			x = rand() % 4;
			if (x >= 1)
			{

				typewritter(" The "); cout << newEnemy.name;
				typewritter(" lashed out!");
				cout << endl;
				health = health - newEnemy.damage;

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
				cout << endl << endl;
				int y = 1;



			}


			else if (x < 1)
			{
				typewritter(" The "); cout << newEnemy.name;
				typewritter(" sent out a weak attack");
				cout << endl;
				if (newEnemy.damage > 2) { health = health - (newEnemy.damage - 2); }
				else { health = health - (newEnemy.damage - 1); }

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
			}

			if (health <= 0) {
				SetConsoleTextAttribute(h, 4);
				Beep(400, 200);
				Beep(300, 200);
				Beep(200, 400);
				cout << R"(                                     ___                      ___  
                                     (   )  .-.               (   ) 
 ___  ___    .--.    ___  ___      .-.| |  ( __)   .--.     .-.| |  
(   )(   )  /    \  (   )(   )    /   \ |  (''")  /    \   /   \ |  
 | |  | |  |  .-. ;  | |  | |    |  .-. |   | |  |  .-. ; |  .-. |  
 | |  | |  | |  | |  | |  | |    | |  | |   | |  |  | | | | |  | |  
 | '  | |  | |  | |  | |  | |    | |  | |   | |  |  |/  | | |  | |  
 '  `-' |  | |  | |  | |  | |    | |  | |   | |  |  ' _.' | |  | |  
  `.__. |  | '  | |  | |  ; '    | '  | |   | |  |  .'.-. | '  | |  
  ___ | |  '  `-' /  ' `-'  /    ' `-'  /   | |  '  `-' / ' `-'  /  
 (   )' |   `.__.'    '.__.'      `.__,'   (___)  `.__.'   `.__,'   
  ; `-' '                                                           
   .__.'                                                            )" << endl;


				exit(3);

			}
		}

	}
	Press_enter_no_text();
	cout << endl;
	if (option == 1) {
		cout << name << ": ";
		PLAYERTEXT(" Wow, I made it out in one piece... but what is that strange howling?");
		Press_enter_no_text();
		typewritter(" You can faintly make out what seems to be a wolf in the deep forest. Its shadow grows larger by the second... you've encountered the Loria, the wolf of this forest.");
		Press_enter_no_text();
		Loria(" What brings you to my land human. Do you seek to collect an artifact?");
		Press_enter_no_text();
		cout << name << ": ";
		PLAYERTEXT(" How did you know?");
		Press_enter_no_text();
		Loria(" You reek of heroism, it disgusts me. If you seek to get the artifact that I am guarding, then you better expect a fight 'Hero'.");
		cout << endl << endl;
		Press_enter_no_text();
		typewritter(" Your fight against the forest guardian has begun. ");



		health = 20;
		int damage = 4; int mp = 20;

		Enemy1 newEnemy(27, 5, "Loria");

		typewritter(" HP: "); cout << newEnemy.health << endl;
		typewritter(" Attack Power: "); cout << newEnemy.damage << endl << endl << endl;

		cout << name << ": ";
		if (Armor == 1) {
			health = health + 10;
		}
		if (Greatsword == 1) {
			damage = damage + 5;
		}


		cout << name << ": ";
		PLAYERTEXT(" What should I do? "); cout << endl;
		PLAYERTEXT("STATS"); cout << endl;
		PLAYERTEXT("1) HP: "); cout << health << endl;
		PLAYERTEXT("2) Damage: "); cout << damage << endl;
		PLAYERTEXT("3) MP: "); cout << mp << endl;
		SetConsoleTextAttribute(h, 7);
		while (newEnemy.health != 0 || health != 0)
		{
			cout << endl << endl;
			typewritter(" What will you do now hero? ");
			CombatOptions();
			cin >> decision;
			cout << endl;
			int x = 0;
			int y = 0;

			if (decision != 1 && decision != 2 && decision != 3 && decision != 4) {
				SetConsoleTextAttribute(h, 12);
				typewritter(" I see you trying to be sly, anyways, please select a valid option: ");
				cin >> decision;
			}
			SetConsoleTextAttribute(h, 7);
			if (decision == 1)

			{

				newEnemy.health = newEnemy.health - damage;

				if (newEnemy.health <= 0)
				{
					typewritter(" You beat the Guardian of this land! ");
					typewritter(" +1 enemy head and one artifact obtained, fire spell unlocked.");
					EnemyHead = EnemyHead + 1;
					cout << endl << endl;

					break;
				}
				else
				{
					typewritter(" You slash the enemy. ");
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left.");
					cout << endl << endl;

				}
			}



			else if (decision == 2)
			{
				if (Health_Potion > 0)
				{
					Health_Potion = Health_Potion - 1;
					health = health + 10;
					typewritter(" You've gained an additional 10 HP!");

				}
				if (Health_Potion <= 0)

				{
					cout << " You don't have any health potions!" << endl;
				}
			}


			else if (decision == 3)

			{
				mp = mp + 5;
				typewritter(" You began recharging MP. Current mp: ");
				cout << mp << endl;

			}

			int srand(NULL);
			y = rand() % 10 + 1;

			if (decision == 4) {
				if (y > 8 && thiefs_cloak != 1) {
					typewritter(" You dodged successfully and take a quick slash at the enemy");
					cout << endl;
					newEnemy.health - 2;
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
					cout << endl << endl;
					typewritter(" What will you do now hero? ");
					continue;
				}
				else if (thiefs_cloak == 1) {
					if (y > 6) {
						typewritter(" You dodged successfully and take a quick slash at the enemy");
						cout << endl;
						newEnemy.health - 2;
						cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
						cout << endl << endl;
						typewritter(" What will you do now hero? ");
						continue;
					}
				}
				else {
					typewritter(" You failed to dodge.");
				}
			}



			x = rand() % 4;
			if (x >= 1)
			{

				typewritter(" The "); cout << newEnemy.name;
				typewritter(" lashed out!");
				cout << endl;
				health = health - newEnemy.damage;

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
				cout << endl << endl;
				int y = 1;



			}


			else if (x < 1)
			{
				typewritter(" The "); cout << newEnemy.name;
				typewritter(" sent out a weak attack");
				cout << endl;
				if (newEnemy.damage > 2) { health = health - (newEnemy.damage - 2); }
				else { health = health - (newEnemy.damage - 1); }

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
			}

			if (health <= 0) {
				SetConsoleTextAttribute(h, 4);
				Beep(400, 200);
				Beep(300, 200);
				Beep(200, 400);
				cout << R"(                                     ___                      ___  
                                     (   )  .-.               (   ) 
 ___  ___    .--.    ___  ___      .-.| |  ( __)   .--.     .-.| |  
(   )(   )  /    \  (   )(   )    /   \ |  (''")  /    \   /   \ |  
 | |  | |  |  .-. ;  | |  | |    |  .-. |   | |  |  .-. ; |  .-. |  
 | |  | |  | |  | |  | |  | |    | |  | |   | |  |  | | | | |  | |  
 | '  | |  | |  | |  | |  | |    | |  | |   | |  |  |/  | | |  | |  
 '  `-' |  | |  | |  | |  | |    | |  | |   | |  |  ' _.' | |  | |  
  `.__. |  | '  | |  | |  ; '    | '  | |   | |  |  .'.-. | '  | |  
  ___ | |  '  `-' /  ' `-'  /    ' `-'  /   | |  '  `-' / ' `-'  /  
 (   )' |   `.__.'    '.__.'      `.__,'   (___)  `.__.'   `.__,'   
  ; `-' '                                                           
   .__.'                                                            )" << endl;


				exit(3);

			}
		}
	}
	if (option == 2) {
		cout << name << ": ";
		PLAYERTEXT(" Wow, I made it out in one piece... but what is that strange bouncing sound?");
		Press_enter_no_text();
		typewritter(" You can faintly make out what seems to be a... crown?.. in the deep swamp. Its shadow grows larger by the second... you've encountered the King slime, the guardian of this swamp.");
		Press_enter_no_text();
		Slime(" Blob blop blob");
		Press_enter_no_text();
		cout << name << ": ";
		PLAYERTEXT(" uh.....");
		Press_enter_no_text();
		Slime(" Blop blob blop.");
		cout << endl << endl;
		Press_enter_no_text();
		typewritter(" Your fight against the swamp guardian has begun. ");



		health = 20;
		int damage = 4; int mp = 20;

		Enemy1 newEnemy(10, 12, "King slime");

		typewritter(" HP: "); cout << newEnemy.health << endl;
		typewritter(" Attack Power: "); cout << newEnemy.damage << endl << endl << endl;

		cout << name << ": ";
		if (Armor == 1) {
			health = health + 10;
		}
		if (Greatsword == 1) {
			damage = damage + 5;
		}


		cout << name << ": ";
		PLAYERTEXT(" What should I do? "); cout << endl;
		PLAYERTEXT("STATS"); cout << endl;
		PLAYERTEXT("1) HP: "); cout << health << endl;
		PLAYERTEXT("2) Damage: "); cout << damage << endl;
		PLAYERTEXT("3) MP: "); cout << mp << endl;
		SetConsoleTextAttribute(h, 7);
		while (newEnemy.health != 0 || health != 0)
		{
			cout << endl << endl;
			typewritter(" What will you do now hero? ");
			CombatOptions();
			cin >> decision;
			cout << endl;
			int x = 0;
			int y = 0;

			if (decision != 1 && decision != 2 && decision != 3 && decision != 4) {
				SetConsoleTextAttribute(h, 12);
				typewritter(" I see you trying to be sly, anyways, please select a valid option: ");
				cin >> decision;
			}
			SetConsoleTextAttribute(h, 7);
			if (decision == 1)

			{

				newEnemy.health = newEnemy.health - damage;

				if (newEnemy.health <= 0)
				{
					typewritter(" You beat the Guardian of this land! ");
					typewritter(" +1 enemy head and one artifact obtained, fire spell unlocked.");
					EnemyHead = EnemyHead + 1;
					cout << endl << endl;

					break;
				}
				else
				{
					typewritter(" You slash the enemy. ");
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left.");
					cout << endl << endl;

				}
			}



			else if (decision == 2)
			{
				if (Health_Potion > 0)
				{
					Health_Potion = Health_Potion - 1;
					health = health + 10;
					typewritter(" You've gained an additional 10 HP!");

				}
				if (Health_Potion <= 0)

				{
					cout << " You don't have any health potions!" << endl;
				}
			}


			else if (decision == 3)

			{
				mp = mp + 5;
				typewritter(" You began recharging MP. Current mp: ");
				cout << mp << endl;

			}

			int srand(NULL);
			y = rand() % 10 + 1;

			if (decision == 4) {
				if (y > 8 && thiefs_cloak != 1) {
					typewritter(" You dodged successfully and take a quick slash at the enemy");
					cout << endl;
					newEnemy.health - 2;
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
					cout << endl << endl;
					typewritter(" What will you do now hero? ");
					continue;
				}
				else if (thiefs_cloak == 1) {
					if (y > 6) {
						typewritter(" You dodged successfully and take a quick slash at the enemy");
						cout << endl;
						newEnemy.health - 2;
						cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
						cout << endl << endl;
						typewritter(" What will you do now hero? ");
						continue;
					}
				}
				else {
					typewritter(" You failed to dodge.");
				}
			}



			x = rand() % 4;
			if (x >= 1)
			{

				typewritter(" The "); cout << newEnemy.name;
				typewritter(" lashed out!");
				cout << endl;
				health = health - newEnemy.damage;

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
				cout << endl << endl;
				int y = 1;



			}


			else if (x < 1)
			{
				typewritter(" The "); cout << newEnemy.name;
				typewritter(" sent out a weak attack");
				cout << endl;
				if (newEnemy.damage > 2) { health = health - (newEnemy.damage - 2); }
				else { health = health - (newEnemy.damage - 1); }

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
			}

			if (health <= 0) {
				SetConsoleTextAttribute(h, 4);
				Beep(400, 200);
				Beep(300, 200);
				Beep(200, 400);
				cout << R"(                                     ___                      ___  
                                     (   )  .-.               (   ) 
 ___  ___    .--.    ___  ___      .-.| |  ( __)   .--.     .-.| |  
(   )(   )  /    \  (   )(   )    /   \ |  (''")  /    \   /   \ |  
 | |  | |  |  .-. ;  | |  | |    |  .-. |   | |  |  .-. ; |  .-. |  
 | |  | |  | |  | |  | |  | |    | |  | |   | |  |  | | | | |  | |  
 | '  | |  | |  | |  | |  | |    | |  | |   | |  |  |/  | | |  | |  
 '  `-' |  | |  | |  | |  | |    | |  | |   | |  |  ' _.' | |  | |  
  `.__. |  | '  | |  | |  ; '    | '  | |   | |  |  .'.-. | '  | |  
  ___ | |  '  `-' /  ' `-'  /    ' `-'  /   | |  '  `-' / ' `-'  /  
 (   )' |   `.__.'    '.__.'      `.__,'   (___)  `.__.'   `.__,'   
  ; `-' '                                                           
   .__.'                                                            )" << endl;


				exit(3);

			}
		}
	}
	
	int fire_spell = 1;
	Press_enter_no_text();
	cout << name << ": ";
	PLAYERTEXT(" Ha - take that guardian. Now what to do next... hmmmm... I did obtain some new enemy heads, let's see what the merchant is up to.");
	Press_enter_no_text;
	cout << endl;
	typewritter("1) ring the bell"); cout << endl;
	typewritter("2) continue along the area.");
	cout << endl;
	cin >> option;

	if (option == 1) {
		cout << "Merchant: ";
	Merchant(" Greetings traveler ");
	Press_enter_no_text;
	cout << endl;
	cout << name << ": ";
	PLAYERTEXT(" WHOA! You came out of nowhere. Hey merchant, I was able to obtain my first artifact, do you know what it's for? ");
	Press_enter_no_text;
	cout << endl;
	cout << "Merchant: ";
	Merchant(" I'm afraid not hero, however, I see you obtained some new valuables. Care to take a loot at my shop once more?");
	Merchant2(); cout << endl;

	while (EnemyHead >= 1) {
		cout << "Merchant: ";
		Merchant(" Did anything else catch your eye? :");
		cin >> buy;
		if (buy == 1 && Armor != 1)
		{
			Armor = Armor + 1;
			EnemyHead = EnemyHead - 1;
			cout << "Merchant: ";
			Merchant(" fantastic purchase");
			cout << endl;
			cout << endl;
		}
		else if (Armor == 1) {
			cout << "Merchant: ";
			Merchant("You've bought my only set.");
			cout << endl;
			cout << endl;
		}
		if (buy == 2)
		{
			cout << "Merchant: ";
			Merchant(" This medallion is worth more than a mere enemy head. Bring me back the head of the tyrant wizard if you wish to purchase this.");
		}
		if (buy == 3 && Greatsword != 1)
		{
			Greatsword = Greatsword + 1;
			EnemyHead = EnemyHead - 1;
			cout << "Merchant: ";
			Merchant(" fantastic purchase");
			cout << endl;
		}
		else if (Greatsword == 1) {
			cout << "Merchant: ";
			Merchant("You've bought my only set.");
			cout << endl;
			cout << endl;
		}
		if (buy == 4)
		{
			Health_Potion = Health_Potion + 2;
			EnemyHead = EnemyHead - 1;
			cout << "Merchant: ";
			Merchant(" fantastic purchase");
			cout << endl;

		}
		if (buy == 5 && thiefs_cloak != 1)
		{
			thiefs_cloak = thiefs_cloak + 1;
			EnemyHead = EnemyHead - 1;
			cout << "Merchant: ";
			Merchant(" fantastic purchase");
			cout << endl;

		}
		else if (thiefs_cloak == 1) {
			cout << "Merchant: ";
			Merchant("You've bought my only set.");
		}
		if (buy == 6)
		{
			cout << "Merchant: ";
			Merchant(" I'll see you around hero.");
			cout << endl;


		}
	}
	if (EnemyHead < 1) {
		Press_enter_no_text();
		cout << endl;
		cout << "Merchant: ";
		Merchant(" ... seems as if you have nothing else to offer. I shall be on my way, contact me when you have any trophies for me.");


	}
}
	Press_enter_no_text;
	typewritter(" You continue down your path until you stumble upon a wizard tower. You recall what the merchant mentioned earlier about a tyrant wizard. You decide to investigate the tower.");
	Press_enter_no_text;
	typewritter("  upon arriving at the enterance of the tower you see a giant door. What will you do?");
	cout << endl;
	typewritter(" 1)KICK THE DOOR DOWNNNN");
	cout << endl;
	typewritter(" 2)Open the door politely.");
	cout << endl << endl;
	cin >> option;
	if (option == 1) {
		typewritter(" You proceed to input the most fathomable amount of force your body could take into a kick. A loud boom echos the tower halls, it consequently gains the attention of a gargoyle");
	}

	health = 20;
	 damage = 4; 
	 mp = 20;

	Enemy1 newEnemy(30, 6, "Gargoyle");
	cout << endl << endl;
	typewritter(" You've encountered a Gargoyle. ");

	typewritter(" HP: "); cout << newEnemy.health << endl;
	typewritter(" Attack Power: "); cout << newEnemy.damage << endl << endl << endl;

	cout << name << ": ";
	if (Armor == 1) {
		health = health + 10;
	}
	if (Greatsword == 1) {
		damage = damage + 5;
	}


	cout << name << ": ";

	PLAYERTEXT(" What should I do? "); cout << endl;
	PLAYERTEXT("STATS"); cout << endl;
	PLAYERTEXT("1) HP: "); cout << health << endl;
	PLAYERTEXT("2) Damage: "); cout << damage << endl;
	PLAYERTEXT("3) MP: "); cout << mp << endl;
	SetConsoleTextAttribute(h, 7);
	while (newEnemy.health != 0 || health != 0)
	{
		cout << endl << endl;
		typewritter(" What will you do now hero? ");
		CombatOptions();
		cin >> decision;
		cout << endl;
		int x = 0;
		int y = 0;

		if (decision != 1 && decision != 2 && decision != 3 && decision != 4) {
			SetConsoleTextAttribute(h, 12);
			typewritter(" I see you trying to be sly, anyways, please select a valid option: ");
			cin >> decision;
		}
		SetConsoleTextAttribute(h, 7);
		if (decision == 1)

		{

			newEnemy.health = newEnemy.health - damage;

			if (newEnemy.health <= 0)
			{
				typewritter(" You beat the ");
				cout << newEnemy.name << "!" << endl << endl;
				typewritter(" +1 enemy head");
				EnemyHead = EnemyHead + 1;
				cout << endl << endl;

				break;
			}
			else
			{
				typewritter(" You slash the enemy. ");
				cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left.");
				cout << endl << endl;

			}
		}



		else if (decision == 2)
		{
			if (Health_Potion > 0)
			{
				Health_Potion = Health_Potion - 1;
				health = health + 10;
				typewritter(" You've gained an additional 10 HP!");

			}
			if (Health_Potion <= 0)

			{
				cout << " You don't have any health potions!" << endl;
			}
		}


		else if (decision == 3)

		{
			mp = mp + 5;
			typewritter(" You began recharging MP. Current mp: ");
			cout << mp << endl;

		}

		int srand(NULL);
		y = rand() % 10 + 1;

		if (decision == 4) {
			if (y > 8 && thiefs_cloak != 1) {
				typewritter(" You dodged successfully and take a quick slash at the enemy");
				cout << endl;
				newEnemy.health - 2;
				cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
				cout << endl << endl;
				typewritter(" What will you do now hero? ");
				continue;
			}
			else if (thiefs_cloak == 1) {
				if (y > 6) {
					typewritter(" You dodged successfully and take a quick slash at the enemy");
					cout << endl;
					newEnemy.health - 2;
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
					cout << endl << endl;
					typewritter(" What will you do now hero? ");
					continue;
				}
			}
			else {
				typewritter(" You failed to dodge.");
			}
		}



		x = rand() % 4;
		if (x >= 1)
		{

			typewritter(" The "); cout << newEnemy.name;
			typewritter(" lashed out!");
			cout << endl;
			health = health - newEnemy.damage;

			typewritter(" Your hp was brought down to ");
			cout << health << endl;
			cout << endl << endl;
			int y = 1;



		}


		else if (x < 1)
		{
			typewritter(" The "); cout << newEnemy.name;
			typewritter(" decided to not move. How strange.");
			cout << endl;
		}

		if (health <= 0) {
			SetConsoleTextAttribute(h, 4);
			Beep(400, 200);
			Beep(300, 200);
			Beep(200, 400);
			cout << R"(                                     ___                      ___  
                                     (   )  .-.               (   ) 
 ___  ___    .--.    ___  ___      .-.| |  ( __)   .--.     .-.| |  
(   )(   )  /    \  (   )(   )    /   \ |  (''")  /    \   /   \ |  
 | |  | |  |  .-. ;  | |  | |    |  .-. |   | |  |  .-. ; |  .-. |  
 | |  | |  | |  | |  | |  | |    | |  | |   | |  |  | | | | |  | |  
 | '  | |  | |  | |  | |  | |    | |  | |   | |  |  |/  | | |  | |  
 '  `-' |  | |  | |  | |  | |    | |  | |   | |  |  ' _.' | |  | |  
  `.__. |  | '  | |  | |  ; '    | '  | |   | |  |  .'.-. | '  | |  
  ___ | |  '  `-' /  ' `-'  /    ' `-'  /   | |  '  `-' / ' `-'  /  
 (   )' |   `.__.'    '.__.'      `.__,'   (___)  `.__.'   `.__,'   
  ; `-' '                                                           
   .__.'                                                            )" << endl;


			exit(3);

		}
	}
	if (option == 2) {
		typewritter(" You politely open the door to the tower; however, from across the enterance you come across a gargoyle.");


		health = 20;
		int damage = 4; int mp = 20;

		Enemy1 newEnemy(30, 6, "Gargoyle");
		typewritter(" You've encountered a Gargoyle. ");

		typewritter(" HP: "); cout << newEnemy.health << endl;
		typewritter(" Attack Power: "); cout << newEnemy.damage << endl << endl << endl;

		cout << name << ": ";
		if (Armor == 1) {
			health = health + 10;
		}
		if (Greatsword == 1) {
			damage = damage + 5;
		}


		cout << name << ": ";

		PLAYERTEXT(" What should I do? "); cout << endl;
		PLAYERTEXT("STATS"); cout << endl;
		PLAYERTEXT("1) HP: "); cout << health << endl;
		PLAYERTEXT("2) Damage: "); cout << damage << endl;
		PLAYERTEXT("3) MP: "); cout << mp << endl;
		SetConsoleTextAttribute(h, 7);
		while (newEnemy.health != 0 || health != 0)
		{
			cout << endl << endl;
			typewritter(" What will you do now hero? ");
			CombatOptions();
			cin >> decision;
			cout << endl;
			int x = 0;
			int y = 0;

			if (decision != 1 && decision != 2 && decision != 3 && decision != 4) {
				SetConsoleTextAttribute(h, 12);
				typewritter(" I see you trying to be sly, anyways, please select a valid option: ");
				cin >> decision;
			}
			SetConsoleTextAttribute(h, 7);
			if (decision == 1)

			{

				newEnemy.health = newEnemy.health - damage;

				if (newEnemy.health <= 0)
				{
					typewritter(" You beat the ");
					cout << newEnemy.name << "!" << endl << endl;
					typewritter(" +1 enemy head");
					EnemyHead = EnemyHead + 1;
					cout << endl << endl;

					break;
				}
				else
				{
					typewritter(" You slash the enemy. ");
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left.");
					cout << endl << endl;

				}
			}



			else if (decision == 2)
			{
				if (Health_Potion > 0)
				{
					Health_Potion = Health_Potion - 1;
					health = health + 10;
					typewritter(" You've gained an additional 10 HP!");

				}
				if (Health_Potion <= 0)

				{
					cout << " You don't have any health potions!" << endl;
				}
			}


			else if (decision == 3)

			{
				mp = mp + 5;
				typewritter(" You began recharging MP. Current mp: ");
				cout << mp << endl;

			}

			int srand(NULL);
			y = rand() % 10 + 1;

			if (decision == 4) {
				if (y > 8 && thiefs_cloak != 1) {
					typewritter(" You dodged successfully and take a quick slash at the enemy");
					cout << endl;
					newEnemy.health - 2;
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
					cout << endl << endl;
					typewritter(" What will you do now hero? ");
					continue;
				}
				else if (thiefs_cloak == 1) {
					if (y > 6) {
						typewritter(" You dodged successfully and take a quick slash at the enemy");
						cout << endl;
						newEnemy.health - 2;
						cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
						cout << endl << endl;
						typewritter(" What will you do now hero? ");
						continue;
					}
				}
				else {
					typewritter(" You failed to dodge.");
				}
			}



			x = rand() % 4;
			if (x >= 1)
			{

				typewritter(" The "); cout << newEnemy.name;
				typewritter(" lashed out!");
				cout << endl;
				health = health - newEnemy.damage;

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
				cout << endl << endl;
				int y = 1;



			}


			else if (x < 1)
			{
				typewritter(" The "); cout << newEnemy.name;
				typewritter(" decided to not move. How strange.");
				cout << endl;
			}

			if (health <= 0) {
				SetConsoleTextAttribute(h, 4);
				Beep(400, 200);
				Beep(300, 200);
				Beep(200, 400);
				cout << R"(                                     ___                      ___  
                                     (   )  .-.               (   ) 
 ___  ___    .--.    ___  ___      .-.| |  ( __)   .--.     .-.| |  
(   )(   )  /    \  (   )(   )    /   \ |  (''")  /    \   /   \ |  
 | |  | |  |  .-. ;  | |  | |    |  .-. |   | |  |  .-. ; |  .-. |  
 | |  | |  | |  | |  | |  | |    | |  | |   | |  |  | | | | |  | |  
 | '  | |  | |  | |  | |  | |    | |  | |   | |  |  |/  | | |  | |  
 '  `-' |  | |  | |  | |  | |    | |  | |   | |  |  ' _.' | |  | |  
  `.__. |  | '  | |  | |  ; '    | '  | |   | |  |  .'.-. | '  | |  
  ___ | |  '  `-' /  ' `-'  /    ' `-'  /   | |  '  `-' / ' `-'  /  
 (   )' |   `.__.'    '.__.'      `.__,'   (___)  `.__.'   `.__,'   
  ; `-' '                                                           
   .__.'                                                            )" << endl;


				exit(3);

			}
		}
	}
	if (option == 2) {
		typewritter(" You politely open the door to the tower; however, from across the enterance you come across a gargoyle.");


		health = 20;
		int damage = 4; int mp = 20;

		Enemy1 newEnemy(30, 10, "Gargoyle");
		typewritter(" You've encountered a Gargoyle. ");

		typewritter(" HP: "); cout << newEnemy.health << endl;
		typewritter(" Attack Power: "); cout << newEnemy.damage << endl << endl << endl;

		cout << name << ": ";
		if (Armor == 1) {
			health = health + 10;
		}
		if (Greatsword == 1) {
			damage = damage + 5;
		}


		cout << name << ": ";

		PLAYERTEXT(" What should I do? "); cout << endl;
		PLAYERTEXT("STATS"); cout << endl;
		PLAYERTEXT("1) HP: "); cout << health << endl;
		PLAYERTEXT("2) Damage: "); cout << damage << endl;
		PLAYERTEXT("3) MP: "); cout << mp << endl;
		SetConsoleTextAttribute(h, 7);
		while (newEnemy.health != 0 || health != 0)
		{
			cout << endl << endl;
			typewritter(" What will you do now hero? ");
			CombatOptions();
			cin >> decision;
			cout << endl;
			int x = 0;
			int y = 0;

			if (decision != 1 && decision != 2 && decision != 3 && decision != 4) {
				SetConsoleTextAttribute(h, 12);
				typewritter(" I see you trying to be sly, anyways, please select a valid option: ");
				cin >> decision;
			}
			SetConsoleTextAttribute(h, 7);
			if (decision == 1)

			{

				newEnemy.health = newEnemy.health - damage;

				if (newEnemy.health <= 0)
				{
					typewritter(" You beat the ");
					cout << newEnemy.name << "!" << endl << endl;
					typewritter(" +1 enemy head");
					EnemyHead = EnemyHead + 1;
					cout << endl << endl;

					break;
				}
				else
				{
					typewritter(" You slash the enemy. ");
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left.");
					cout << endl << endl;

				}
			}



			else if (decision == 2)
			{
				if (Health_Potion > 0)
				{
					Health_Potion = Health_Potion - 1;
					health = health + 10;
					typewritter(" You've gained an additional 10 HP!");

				}
				if (Health_Potion <= 0)

				{
					cout << " You don't have any health potions!" << endl;
				}
			}


			else if (decision == 3)

			{
				mp = mp + 5;
				typewritter(" You began recharging MP. Current mp: ");
				cout << mp << endl;

			}

			int srand(NULL);
			y = rand() % 10 + 1;

			if (decision == 4) {
				if (y > 8 && thiefs_cloak != 1) {
					typewritter(" You dodged successfully and take a quick slash at the enemy");
					cout << endl;
					newEnemy.health - 2;
					cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
					cout << endl << endl;
					typewritter(" What will you do now hero? ");
					continue;
				}
				else if (thiefs_cloak == 1) {
					if (y > 6) {
						typewritter(" You dodged successfully and take a quick slash at the enemy");
						cout << endl;
						newEnemy.health - 2;
						cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
						cout << endl << endl;
						typewritter(" What will you do now hero? ");
						continue;
					}
				}
				else {
					typewritter(" You failed to dodge.");
				}
			}



			x = rand() % 4;
			if (x >= 1)
			{

				typewritter(" The "); cout << newEnemy.name;
				typewritter(" lashed out!");
				cout << endl;
				health = health - newEnemy.damage;

				typewritter(" Your hp was brought down to ");
				cout << health << endl;
				cout << endl << endl;
				int y = 1;



			}


			else if (x < 1)
			{
				typewritter(" The "); cout << newEnemy.name;
				typewritter(" decided to not move. How strange.");
				cout << endl;
			}

			if (health <= 0) {
				SetConsoleTextAttribute(h, 4);
				Beep(400, 200);
				Beep(300, 200);
				Beep(200, 400);
				cout << R"(                                     ___                      ___  
                                     (   )  .-.               (   ) 
 ___  ___    .--.    ___  ___      .-.| |  ( __)   .--.     .-.| |  
(   )(   )  /    \  (   )(   )    /   \ |  (''")  /    \   /   \ |  
 | |  | |  |  .-. ;  | |  | |    |  .-. |   | |  |  .-. ; |  .-. |  
 | |  | |  | |  | |  | |  | |    | |  | |   | |  |  | | | | |  | |  
 | '  | |  | |  | |  | |  | |    | |  | |   | |  |  |/  | | |  | |  
 '  `-' |  | |  | |  | |  | |    | |  | |   | |  |  ' _.' | |  | |  
  `.__. |  | '  | |  | |  ; '    | '  | |   | |  |  .'.-. | '  | |  
  ___ | |  '  `-' /  ' `-'  /    ' `-'  /   | |  '  `-' / ' `-'  /  
 (   )' |   `.__.'    '.__.'      `.__,'   (___)  `.__.'   `.__,'   
  ; `-' '                                                           
   .__.'                                                            )" << endl;


				exit(3);

			}
		}
	}


	typewritter(" Suprisingly hero, you beat the gargoyle. But the fight's not over yet, from the end of the hallway you hear a daunting voice.");
	cout << endl;
	Press_enter_no_text2();
	cout << "Tyrant wizard: ";
	Wizard101(" Did that 'merchant' send you as well?");
	Press_enter_no_text2();
	cout << endl;
	cout << name << ": ";
	PLAYERTEXT(" Not exactly. How do you know the merchant?");
	Press_enter_no_text2();
	cout << endl;
	cout << "Tyrant wizard: ";
	Wizard101(" He stole something of mine long ago you see. A medallion of sorts. It's the key to unlocking my treasury. There I store what's rightfully mine. I assume since you know the merchant you must be after my Ashes of life as well.");
	cout << endl;
	Press_enter_no_text2();
	cout << "Tyrant wizard: ";
	Wizard101(" Say hero, are you not scared of what comes next?");
	Press_enter_no_text2();
	cout << endl;
	typewritter(" Your battle against the final boss has begun.");

	if (option == 1 || option == 2) {
		
		


			health = 20;
			int damage = 4; int mp = 20;

			Enemy1 newEnemy(40, 7, "Tyrant King");
			cout << endl;
			typewritter(" You've encountered The Wizard. ");
			cout << endl;

			typewritter(" HP: "); cout << newEnemy.health << endl;
			typewritter(" Attack Power: "); cout << newEnemy.damage << endl << endl << endl;

			cout << name << ": ";
			if (Armor == 1) {
				health = health + 10;
			}
			if (Greatsword == 1) {
				damage = damage + 5;
			}


			cout << name << ": ";

			PLAYERTEXT(" What should I do? "); cout << endl;
			PLAYERTEXT("STATS"); cout << endl;
			PLAYERTEXT("1) HP: "); cout << health << endl;
			PLAYERTEXT("2) Damage: "); cout << damage << endl;
			PLAYERTEXT("3) MP: "); cout << mp << endl;
			SetConsoleTextAttribute(h, 7);
			while (newEnemy.health != 0 || health != 0)
			{
				cout << endl << endl;
				typewritter(" What will you do now hero? ");
				CombatOptions();
				cin >> decision;
				cout << endl;
				int x = 0;
				int y = 0;

				if (decision != 1 && decision != 2 && decision != 3 && decision != 4) {
					SetConsoleTextAttribute(h, 12);
					typewritter(" I see you trying to be sly, anyways, please select a valid option: ");
					cin >> decision;
				}
				SetConsoleTextAttribute(h, 7);
				if (decision == 1)

				{

					newEnemy.health = newEnemy.health - damage;

					if (newEnemy.health <= 0)
					{
						typewritter(" You beat the ");
						cout << newEnemy.name << "!" << endl << endl;
						typewritter(" +1 enemy head");
						EnemyHead = EnemyHead + 1;
						cout << endl << endl;

						break;
					}
					else
					{
						typewritter(" You slash the enemy. ");
						cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left.");
						cout << endl << endl;

					}
				}



				else if (decision == 2)
				{
					if (Health_Potion > 0)
					{
						Health_Potion = Health_Potion - 1;
						health = health + 10;
						typewritter(" You've gained an additional 10 HP!");

					}
					if (Health_Potion <= 0)

					{
						cout << " You don't have any health potions!" << endl;
					}
				}


				else if (decision == 3)

				{
					mp = mp + 5;
					typewritter(" You began recharging MP. Current mp: ");
					cout << mp << endl;
					if (fire_spell == 1 && mp >=15) {
						typewritter(" You casted a fireball.");
						cout << endl;
						newEnemy.health = newEnemy.health - (damage + 5);

					}

				}

				int srand(NULL);
				y = rand() % 10 + 1;

				if (decision == 4) {
					if (y > 8 && thiefs_cloak != 1) {
						typewritter(" You dodged successfully and take a quick slash at the enemy");
						cout << endl;
						newEnemy.health - 2;
						cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
						cout << endl << endl;
						typewritter(" What will you do now hero? ");
						continue;
					}
					else if (thiefs_cloak == 1) {
						if (y > 6) {
							typewritter(" You dodged successfully and take a quick slash at the enemy");
							cout << endl;
							newEnemy.health - 2;
							cout << newEnemy.name; typewritter(" has "); cout << newEnemy.health; typewritter(" HP left");
							cout << endl << endl;
							typewritter(" What will you do now hero? ");
							continue;
						}
					}
					else {
						typewritter(" You failed to dodge.");
					}
				}



				x = rand() % 4;
				if (x >= 1)
				{

					typewritter(" The "); cout << newEnemy.name;
					typewritter(" lashed out!");
					cout << endl;
					health = health - newEnemy.damage;

					typewritter(" Your hp was brought down to ");
					cout << health << endl;
					cout << endl << endl;
					int y = 1;



				}
				if (newEnemy.health < 20) {
					Wizard101(" The ashes of life are the only thing keeping me - THE KING OF THIS KINGDOM ALIVE");

				}


				else if (x < 1)
				{
					typewritter(" The "); cout << newEnemy.name;
					typewritter(" decided to not move. How strange.");
					cout << endl;
				}

				if (health <= 0) {
					SetConsoleTextAttribute(h, 4);
					Beep(400, 200);
					Beep(300, 200);
					Beep(200, 400);
					cout << R"(                                     ___                      ___  
                                     (   )  .-.               (   ) 
 ___  ___    .--.    ___  ___      .-.| |  ( __)   .--.     .-.| |  
(   )(   )  /    \  (   )(   )    /   \ |  (''")  /    \   /   \ |  
 | |  | |  |  .-. ;  | |  | |    |  .-. |   | |  |  .-. ; |  .-. |  
 | |  | |  | |  | |  | |  | |    | |  | |   | |  |  | | | | |  | |  
 | '  | |  | |  | |  | |  | |    | |  | |   | |  |  |/  | | |  | |  
 '  `-' |  | |  | |  | |  | |    | |  | |   | |  |  ' _.' | |  | |  
  `.__. |  | '  | |  | |  ; '    | '  | |   | |  |  .'.-. | '  | |  
  ___ | |  '  `-' /  ' `-'  /    ' `-'  /   | |  '  `-' / ' `-'  /  
 (   )' |   `.__.'    '.__.'      `.__,'   (___)  `.__.'   `.__,'   
  ; `-' '                                                           
   .__.'                                                            )" << endl;


					exit(3);

				}
			}
		}
		typewritter(" And so our hero has beaten the wizard. In a plot twist of events, the wizard was guarding the ashes of life to keep the power of immortality to himself. You encounter the merchant one last time.");
		Press_enter_no_text2();
		cout << endl;
		Press_enter_no_text2();
		cout << name << ": ";

		PLAYERTEXT(" Hey merchant. I beat the tyrant king, but how did you guys know each other? He seemed to be very familiar with you and you stole his medallion apparently.");
		Press_enter_no_text2();
		cout << endl;
		cout << "Merchant: ";
		Merchant(" That man does not know how to keep his mouth shut. Well, it is only fair I told you the truth. I was the original king, I discovered the power of the Ashes of life. It was then that the old wizard took the power to himself.");
		Press_enter_no_text2();
		cout << endl;
		cout << "Merchant: ";
		Merchant(" Consequently, this brought upon the end of this kingdom. The greed of an old wizard destroyed this civilization... haha can you believe that?");
		Press_enter_no_text2();
		cout << endl;
		cout << "Merchant: ";
		Merchant(" Well hero, as promised, you may give me the tyrant's head for the medallion");
		kingsMedallion = kingsMedallion + 1;
		Press_enter_no_text2();
		cout << endl;
		cout << name << ": ";
		PLAYERTEXT(" Thanks merchant, but what do I do with thi- ....");
		Press_enter_no_text2();
		cout << endl;
		typewritter(" * The merchant was no where to be seen * You make your way across to the King's treasury. You find the Ashes of life.");
		Press_enter_no_text2();
		typewritter(" What will you do now hero? : ");
		cout << endl;
		Press_enter_no_text2();
		typewritter("1) combine the Ashes with the artifact and restore the kingdom.");
		cout << endl;
		typewritter(" 2) Use the ashes to become an immortal king for a broken kingdom.");
		cin >> option;
		if (option == 1) {
			cout << endl;
			typewritter(" And so you muster up the courage to wield the ashes together with the artifact you gained before. You bring forth the god of life and death alike. You tell them to restore the kingdom to the day of its fruitful nature. The gods show no reaction, but you can sense their approval. The ruins of kingdom twist and turn - the echos of the architecure wail on your ears. You take a glance outside - you see the sun setting on the most breathtaking kingdom full of life. ");
			Beep(400, 200);
			Beep(600, 200);
	
			cout << R"( ______  __ __    ___        ___  ____   ___   
|      ||  |  |  /  _]      /  _]|    \ |   \  
|      ||  |  | /  [_      /  [_ |  _  ||    \ 
|_|  |_||  _  ||    _]    |    _]|  |  ||  D  |
  |  |  |  |  ||   [_     |   [_ |  |  ||     |
  |  |  |  |  ||     |    |     ||  |  ||     |
  |__|  |__|__||_____|    |_____||__|__||_____|
                                               )" << endl;
		}
		if (option == 2) {
			cout << endl;
			typewritter(" You decided to take the place of the Tyrant wizard. Who could argue against immortality right? And so you clench the ashes in your hand and the god of death reveals his veil. You offer the ashes in exchange for immortality. The god does not react, but you can sense their approval. You take one final glance outside, you see a blood red moon setting on the ruins of a fallen kingdom.");
			Beep(400, 200);
			Beep(600, 200);

			cout << R"( ______  __ __    ___        ___  ____   ___   
|      ||  |  |  /  _]      /  _]|    \ |   \  
|      ||  |  | /  [_      /  [_ |  _  ||    \ 
|_|  |_||  _  ||    _]    |    _]|  |  ||  D  |
  |  |  |  |  ||   [_     |   [_ |  |  ||     |
  |  |  |  |  ||     |    |     ||  |  ||     |
  |__|  |__|__||_____|    |_____||__|__||_____|
                                               )" << endl;
		}



	
#pragma once
}
#pragma once
