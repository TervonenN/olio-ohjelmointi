#include "olioArvauspeliVol2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int maxNum)
{
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNum << " as a maximum value" << endl;
    maxNumber = maxNum;
    numOfGuesses = 0;
    srand(time(0));
    randomNumber = rand() % maxNum + 1;
    playerGuess = 0;
}

Game::~Game()
{
cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}
void Game::play()
{
    cout << "Guess a number between 1-" << maxNumber << endl;
    cin >> playerGuess;
    numOfGuesses++;

    while(playerGuess != randomNumber)
    {
        if(playerGuess < randomNumber)
        {
            cout << "Number is bigger" << endl;
        }
        else
        {
            cout << "Number is lower" << endl;
        }
        cout << "Guess a number between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;
    }
}

void Game::printGameResult()
{
    if(playerGuess == randomNumber)
    {
        cout << "You got it right!" << endl;
        cout << "You made " << numOfGuesses << " guesses" << endl;
    }
}
