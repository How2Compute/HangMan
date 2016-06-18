#include <iostream>
#include <string>

void WelcomeUser();
void PlayGame();

int main() {
	WelcomeUser();
	PlayGame();
}

void WelcomeUser() {
	//Welcome the user to the game
	std::cout << "Hello and welcome to HangMan!\nThis is a wordguessing game where you have to guess the word with a maximum ammount of wrong guesses.\nIf you have too many wrong guesses you DIE!" << std::endl;
	std::cout << "Press enter to play!" << std::endl;
	std::cin.ignore();
	return;
}

void PlayGame() {
	std::cout << "Hello, I am the game function!" << std::endl;
	//Check if the user has any lives left
		//Yes
			//Ask for input
	//Is the input valid
		//Yes
			//Check against the word
			//Return the result to the user
			//Goto "Check if the user has any lives left"
		//No
			//Give an error
			//Goto "Check if the user has any lives left"
		//No
			//Tell the user they are dead
			//Ask the user if they want to play again
		//Yes
			//GOTO "Welcome the user to the game"
		//No
			//Quit
}