#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
// funktion prototyyppi
int game();

int main()
{
    // Kutsutaan game-funktiota ja tallennetaan arvausten lukumäärä
    int arvaustenLkm = game();

    // Tulostetaan yritysten määrä
    cout << "You guessed the number in " << arvaustenLkm << " attempts." << endl;

    return 0;
}
int game(void) {
    srand(time(0)); // Satunnaislukugeneraattorin siemen

    // Arvotaan satunnainen numero väliltä 1-20
    int randomNumber = (rand() % 20) + 1;
    int arvaus = 0;        // Pelaajan arvaus
    int arvaustenLkm = 0;  // Arvausten lukumäärä

    cout << "Guess a random number between 1-20: " << endl;

    // Silmukka, joka jatkuu kunnes arvaus on oikein
    while (arvaus != randomNumber) {
        cout << "Enter your guess: ";
        cin >> arvaus;

        arvaustenLkm++; // Kasvatetaan arvausten lukumäärää

        if (arvaus < randomNumber) {
            cout << "The number is higher!" << endl;
        } else if (arvaus > randomNumber) {
            cout << "The number is lower!" << endl;
        } else {
            cout << "Correct! The number was: " << randomNumber << endl;
        }
    }

    // Palautetaan arvausten lukumäärä
    return arvaustenLkm;
}
