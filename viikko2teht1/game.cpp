#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

using namespace std;

Game::Game(int maxNumber)
{
    srand(std::time(0));
    randomNumber = (rand()%maxNumber)+1;
    cout << "GAME CONSTRUCTOR: Object intialized with 10 as a maximum value" << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    playerGuess = 0;
    bool stayInLoop = true;
    numOfGuesses = 0;

    while (stayInLoop)
    {
        cout << "Give your guess between 1-10" << endl;
        cin >> playerGuess;

        numOfGuesses++;

        if (playerGuess == randomNumber)
        {
            cout << "Your guess is right = " << randomNumber << endl;
            stayInLoop = false;
        }
        else if (playerGuess < randomNumber)
        {
            cout << "Your guess is too small" << endl;
        }
        else
        {
            cout << "Your guess is too big" << endl;
        }
    }
    printGameResult();
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}
