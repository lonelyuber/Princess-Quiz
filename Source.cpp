#include <iostream>

using namespace std;
int main() {
	cout << "Princess Quiz" << endl;

	int Jasmine = 0;
	int Merida = 0;
	int Cinderella = 0;
	int Ariel = 0;
	int input;

	cout << "What's your favorite color?" << endl; // Question 1
	cout << "(1) Blue (2) Green (3) Pink (4) White" << endl;
	cin >> input;

	if (input == 1)
		Jasmine = Jasmine + 1;
	else if (input == 2)
		Merida = Merida + 1;
	else if (input == 3)
		Cinderella = Cinderella + 1;
	else if (input == 4)
		Ariel = Ariel + 1;

	cout << "What food do you like?" << endl; // Question 2
	cout << "(1) Bacon (2) Fries (3) Strawberries (4) Chocolate" << endl;
	cin >> input;

	if (input == 1)
		Jasmine = Jasmine + 1;
	else if (input == 2)
		Merida = Merida + 1;
	else if (input == 3)
		Cinderella = Cinderella + 1;
	else if (input == 4)
		Ariel = Ariel + 1;

	cout << "What is your eye color?" << endl; // Question 3
	cout << "(1) Brown (2) Green (3) Blue (4) Other" << endl;
	cin >> input;

	if (input == 1)
		Jasmine = Jasmine + 1;
	else if (input == 2)
		Merida = Merida + 1;
	else if (input == 3)
		Cinderella = Cinderella + 1;
	else if (input == 4)
		Ariel = Ariel + 1;

	cout << "What is your hair color?" << endl; // Question 4
	cout << "(1) Black (2) Brown (3) Blonde (4) Other" << endl;
	cin >> input;

	if (input == 1)
		Jasmine = Jasmine + 1;
	else if (input == 2)
		Merida = Merida + 1;
	else if (input == 3)
		Cinderella = Cinderella + 1;
	else if (input == 4)
		Ariel = Ariel + 1;

	cout << "Which flipper do you have?" << endl; // Question 5
	cout << "(1) Penguin (2) Sea Lion (3) Dolphin (4) Whale" << endl;
	cin >> input;

	if (input == 1)
		Jasmine = Jasmine + 1;
	else if (input == 2)
		Merida = Merida + 1;
	else if (input == 3)
		Cinderella = Cinderella + 1;
	else if (input == 4)
		Ariel = Ariel + 1;

	cout << "Are you tall?" << endl; // Question 6
	cout << "(1) Yes (2) No (3) Maybe (4) I suppose" << endl;
	cin >> input;

	if (input == 1)
		Jasmine = Jasmine + 1;
	else if (input == 2)
		Merida = Merida + 1;
	else if (input == 3)
		Cinderella = Cinderella + 1;
	else if (input == 4)
		Ariel = Ariel + 1;

	cout << "How far away is the Earth from the Sun in light minutes?" << endl; // Question 7
	cout << "(1) 8min (2) 11min (3) 30min (4) 1000min" << endl;
	cin >> input;

	if (input == 1)
		Jasmine = Jasmine + 1;
	else if (input == 2)
		Merida = Merida + 1;
	else if (input == 3)
		Cinderella = Cinderella + 1;
	else if (input == 4)
		Ariel = Ariel + 1;

	cout << "Who is your god" << endl; // Question 8
	cout << "(1) Muhammad (2) Mitochondria (3) Jesus (4) Abraham Lincoln" << endl;
	cin >> input;

	if (input == 1)
		Jasmine = Jasmine + 1;
	else if (input == 2)
		Merida = Merida + 1;
	else if (input == 3)
		Cinderella = Cinderella + 1;
	else if (input == 4)
		Ariel = Ariel + 1;

	cout << "How are you feeling?" << endl; // Question 9
	cout << "(1) Death is inevitable (2) Pretty good (3) Alright (4) ???" << endl;
	cin >> input;

	if (input == 1)
		Jasmine = Jasmine + 1;
	else if (input == 2)
		Merida = Merida + 1;
	else if (input == 3)
		Cinderella = Cinderella + 1;
	else if (input == 4)
		Ariel = Ariel + 1;

	cout << "Which princess is your least favorite?" << endl; // Question 10
	cout << "(1) Jasmine (2) Merida (3) Cinderella (4) Ariel" << endl;
	cin >> input;

	if (input == 1)
		Jasmine = Jasmine + 1;
	else if (input == 2)
		Merida = Merida + 1;
	else if (input == 3)
		Cinderella = Cinderella + 1;
	else if (input == 4)
		Ariel = Ariel + 1;

	if (Jasmine > Merida && Jasmine > Cinderella && Jasmine > Ariel)
		cout << "You are Jasmine son ***" << endl;
	else if (Merida > Jasmine && Merida > Cinderella && Merida > Ariel)
		cout << "You are thug nasty Merida" << endl;
	else if (Cinderella > Jasmine && Cinderella > Merida && Cinderella > Ariel)
		cout << "You are that wack cindyrella" << endl;
	else if (Ariel > Jasmine && Ariel > Merida && Ariel > Cinderella)
		cout << "You be floppin Ariel" << endl;

}