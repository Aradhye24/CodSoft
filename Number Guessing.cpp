#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int min = 1;
    int max = 100;
    int attempts = 10;
    int score = 0;
    bool playAgain = true; 

    while (playAgain) 
	{
        int randomNumber = rand() % (max - min + 1) + min;
        cout << "I am thinking of a number between " << min << " and " << max << ". You have " << attempts << " attempts to guess it." << endl;

        for (int i = 1; i <= attempts; i++) 
		{
            cout << "Enter your guess: ";
            int guess;
            cin >> guess;

            if (guess == randomNumber) 
			{
                cout << "Congratulations! You guessed the number in " << i << " attempts." << endl;
                score += i;
                break;
            } 
			else if (guess < randomNumber)
			{
			
			 
                cout << "Too low. Try again." << endl;
            } 
			else 
			{
                cout << "Too high. Try again." << endl;
            }

            if (i == attempts) 
			{
                cout << "Sorry, you have used up all your attempts. The number was " << randomNumber << "." << endl;
            }
        }

        cout << "Do you want to play again? (y/n): ";
        string playAgainInput;
        cin >> playAgainInput;

        if (playAgainInput == "n" || playAgainInput == "N") 
		{
            playAgain = false;
        }
    }
        cout << "Your score is " << score << "." << endl;
        return 0;
}

