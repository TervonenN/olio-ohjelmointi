#include "Luottotili.h"
using namespace std;

Luottotili::Luottotili(const string& omistaja, double luottoRaja)
    : Pankkitili(omistaja), luottoRaja(luottoRaja) {}

bool Luottotili::withdraw(double amount) {
    if (amount < 0 || (saldo - amount) < -luottoRaja) {
        return false;
    }
    saldo -= amount;
    return true;
}
