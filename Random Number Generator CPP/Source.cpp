#include <iostream>
#include <string>
#include <cmath>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned)time(0));
	int computerchoice = (rand() % 100) + 1;
	int guess;
	int guessCount = 0;
	int guessLimit = 5;
	bool outOfGuesses = false;

	cout << "Enter a number between 1 and 100: ";
	cin >> guess;
	guessCount++;


	while (guess != computerchoice)
	{
		if (guess < computerchoice)
		{
			if (guessCount < guessLimit)
			{
				cout << "Too low! Try again!" << endl;
				cin >> guess;
				guessCount++;
			}
		}
		if (guess > computerchoice)
		{
			if (guessCount < guessLimit)
			{
				cout << "Too high, try again!" << endl;
				cin >> guess;
				guessCount++;
			}
		}
		if (guessCount == guessLimit)
		{
			cout << "You've lost!" << endl;
			guessLimit = true;
			break;
		}
	}
	while (guess == computerchoice)
	{
		cout << "You won, congrats!";
		break;
	}


	return 0;
}