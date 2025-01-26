#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string name) : Chef(name) {
    cout << "ItalianChef " << name << " konstruktori!" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << getName() << " destruktori!" << endl;
}

bool ItalianChef::askSecret(string guess, int flourAmount, int waterAmount) {
    flour = flourAmount;
    water = waterAmount;
    if (guess.compare(password) == 0) {
        makePizza();
        return true;
    }
    return false;
}

int ItalianChef::makePizza() {
    int pizzas = min(flour / 5, water / 5);
    cout << "ItalianChef " << getName() << " with " << flour << " flour and "
         << water << " water can make " << pizzas << " pizzas" << endl;
    return pizzas;
}
