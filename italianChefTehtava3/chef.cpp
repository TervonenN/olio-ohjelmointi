#include "chef.h"
#include <iostream>

Chef::Chef(string name) {
    chefName = name;
    cout << "Chef " << name << " konstruktori!" << endl;
}

Chef::~Chef() {
    cout << "Chef " << chefName << " destruktori!" << endl;
}

string Chef::getName() {
    return chefName;
}

int Chef::makeSalad(int items) {
    int portions = items / 5;
    cout << "Chef " << chefName << " with " << items << " items can make salad "
         << portions << " portions" << endl;
    return portions;
}

int Chef::makeSoup(int items) {
    int portions = items / 3;
    cout << "Chef " << chefName << " with " << items << " items can make soup "
         << portions << " portions" << endl;
    return portions;
}
