#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    // Arvotaan numero 1-20 väliltä
    int randomNumber = (rand() % 20) + 1;

    // Arvattu numero
    int arvaus = 0;

    cout << "Guess a random number between 1-20: " << endl;

    // Silmukka, joka jatkuu kunnes numero oikein
    while (arvaus != randomNumber) {
        cout << "Enter your guess: ";
        cin >> arvaus;

        if (arvaus < randomNumber) {
            cout << "The number is higher" << endl;
        }

        else if (arvaus > randomNumber) {
            cout << "The number is lower" << endl;
        }

        else {
            cout << "Correct! The number was: " << randomNumber << endl;
        }


}
}
