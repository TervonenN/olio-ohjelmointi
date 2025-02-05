#include "Pankkitili.h"
using namespace std;
Pankkitili::Pankkitili(const string& omistaja)
    : omistaja(omistaja), saldo(0) {}

double Pankkitili::getBalance() const {
    return saldo;
}

bool Pankkitili::deposit(double amount) {
    if (amount < 0) {
        return false;
    }
    saldo += amount;
    return true;
}

bool Pankkitili::withdraw(double amount) {
    if (amount < 0 || amount > saldo) {
        return false;
    }
    saldo -= amount;
    return true;
}
