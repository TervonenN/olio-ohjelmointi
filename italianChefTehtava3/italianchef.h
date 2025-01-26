#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

class ItalianChef : public Chef {
private:
    const string password = "pizza";
    int flour;
    int water;
    int makePizza();

public:
    ItalianChef(string name);
    ~ItalianChef();
    bool askSecret(string guess, int flourAmount, int waterAmount);
};

#endif
