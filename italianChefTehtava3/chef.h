#ifndef CHEF_H
#define CHEF_H

#include <iostream>
using namespace std;

class Chef {
protected:
    string chefName;

public:
    Chef(string name);
    ~Chef();
    string getName();
    int makeSalad(int items);
    int makeSoup(int items);
};

#endif
