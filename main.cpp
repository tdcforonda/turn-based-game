#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void menu1() {
	cout << "Please Choose your Gamemode" << endl;
	cout << "Enter 1 to set the game to Player vs. Player" << endl;
	cout << "Enter 2 to set the game to Player vs. Computer" << endl;
	cout << "Enter 9 to exit the program" << endl;
}

void menu2() {
	cout << "Enter 1 to change the class of Player 1" << endl;
	cout << "Enter 2 to change the class of Player 2" << endl;
	cout << "Enter 9 to finish changing class" << endl;
}

void menu3() {
	cout << "Enter 1 to set class to Mage" << endl;
	cout << "Enter 2 to set class to Swordsman" << endl;
	cout << "Enter 3 to set class to Palladin" << endl;
	cout << "Enter 4 to set class to Marksman" << endl;
	cout << "Enter 5 to set class to Rogue" << endl;
	cout << "Enter 9 to finalize changing class" << endl;
}
void coinFlip() {
	int coinSide;
	int choice;
	srand(time(NULL));

	cout << "Please pick the side of the coin" << endl;
	coinSide = rand() % 2 + 1;

	cout << "Enter 1 for heads, Enter 2 for Tails" << endl;
	cout << "Enter choice: ";
	cin >> choice;


	if (coinSide == 1)
		cout << "The coin landed on Heads" << endl;
	else if (coinSide == 2)
		cout << "The coin landed on Tails" << endl;

	if (choice == coinSide)
		cout << "You guessed correctly, you will attack first" << endl;
	else
		cout << "You guessed incorrectly, you will attack last" << endl;
}

void classChange1() {
	int choice;
	int health = 0;
	int mana = 0;
	int character = 0;

	cout << "Please choose class of Player 1" << endl;
	menu3();

	cin >> choice;
	

	while (choice != 9) {
		switch (choice) {
		case 1:
			cout << "Mage Selected" << endl;
				mana = 250;
				health = 50;
				character = 1;
				break;
		case 2:
			cout << "Swordman Selected" << endl;
			mana = 150;
			health = 150;
			character = 1;
			break;
		case 3:
			cout << "Palladin Selected" << endl;
			mana = 50;
			health = 250;
			character = 1;
			break;
		case 4:
			cout << "Marksman Selected" << endl;
			mana = 225;
			health = 75;
			character = 1;
			break;
		case 5:
			cout << "Rogue Selected" << endl;
			mana = 200;
			health = 100;
			break;
		default:
			cout << "The number you entered is invalid please input again" << endl;
			break;
		}
		cout << mana << endl;
		cout << health << endl;

		menu3();
		cin >> choice;
	}
}

void battleStart() {
	cout << "A coinflip will determine who will go first" << endl;

	coinFlip();

}

void classChange2() {
	int choice;
	int health = 0;
	int mana = 0;
	int character = 0;

	cout << "Please choose class of Player 2" << endl;
	menu3();

	cin >> choice;


	while (choice != 9) {
		switch (choice) {
		case 1:
			cout << "Mage Selected" << endl;
			mana = 250;
			health = 50;
			character = 1;
			break;
		case 2:
			cout << "Swordman Selected" << endl;
			mana = 150;
			health = 150;
			character = 1;
			break;
		case 3:
			cout << "Palladin Selected" << endl;
			mana = 50;
			health = 250;
			character = 1;
			break;
		case 4:
			cout << "Marksman Selected" << endl;
			mana = 225;
			health = 75;
			character = 1;
			break;
		case 5:
			cout << "Rogue Selected" << endl;
			mana = 200;
			health = 100;
			break;
		default:
			cout << "The number you entered is invalid please input again" << endl;
			break;
		}
		cout << mana << endl;
		cout << health << endl;

		menu3();
		cin >> choice;
	}
}


void playerVsPlayer() {
	int choice;

	cout << "You have chosen Player vs Player mode" << endl;

	menu2();
	cin >> choice;
	
	while (choice != 9) {
		switch (choice) {
		case 1:
			classChange1();
			break;
		case 2:
			classChange2();
			break;
		default:
			cout << "The number you entered is invalid please input again" << endl;
			break;
		}
		menu2();
		cin >> choice;
	}

	battleStart();

}

void playerVsComputer() {
	int choice;

	cout << "You have chosen Player vs Computer mode" << endl;

	menu2();
	cin >> choice;

	while (choice != 9) {
		switch (choice) {
		case 1:
			classChange1();
			break;
		case 2:
			classChange2();
			break;
		default:
			cout << "The number you entered is invalid please input again" << endl;
			break;
		}
		menu2();
		cin >> choice;
	}

	battleStart();
}

void chooseGamemode() {
	int choice;
	int confirm;
	
	menu1();
	cin >> choice;

	while (choice != 9) {
		switch (choice) {
		case 1:
				playerVsPlayer();
				break;
		case 2:
				playerVsComputer();
				break;
		default:
			cout << "The number you entered is invalid please input again" << endl;
			break;
		}
		if (choice != 1 && choice != 2) {
			menu1();
			cin >> choice;
			}
		else
			choice = 9;
	
	}
}

int main() {

	chooseGamemode();	

	return 0;
}