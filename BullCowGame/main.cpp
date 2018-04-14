#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();


//the entry point for out application
int main() 
{
	PrintIntro();

	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <=NUMBER_OF_TURNS; count++)
	{
		GetGuessAndPrintBack();
		cout << endl;
	}
	
	return 0;	
}
	
	//introduce the game
void PrintIntro() {
	// void is one of function
	// Also you can set body after you define function and seperately
	constexpr int WORLD_LENGTH = 9;
	cout << "welcome to bulls and cows, a fun word game." << endl;
	cout << "can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking of?\n";
	return;
}

	// get a guess from the player
string GetGuessAndPrintBack() {
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	//get line gets whole line with spaces. we are using instead of 'cin >>' here.

	//print the guess back
	cout << "Your guess was: " << Guess << endl;
	return Guess;

}