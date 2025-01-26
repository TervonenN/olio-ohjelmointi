#include "chef.h"
#include "italianchef.h"

int main() {
    Chef gordon("Gordon");
    gordon.makeSalad(11);
    gordon.makeSoup(14);

    ItalianChef mario("Mario");
    mario.makeSalad(5);
    mario.askSecret("pizza", 19, 150);

    return 0;
}

