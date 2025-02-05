#include "Asiakas.h"
#include <iostream>
using namespace std;

Asiakas::Asiakas(const string& nimi, double luottoRaja)
    : nimi(nimi),
    pankkitili(make_unique<Pankkitili>(nimi)),
    luottotili(make_unique<Luottotili>(nimi, luottoRaja)) {}

string Asiakas::getNimi() const {
    return nimi;
}

void Asiakas::showSaldo() const {
    cout << "Pankkitilin saldo: " << pankkitili->getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili->getBalance() << endl;
}

bool Asiakas::talletus(double amount) {
    return pankkitili->deposit(amount);
}

bool Asiakas::nosto(double amount) {
    return pankkitili->withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount) {
    return luottotili->deposit(amount);
}

bool Asiakas::luotonNosto(double amount) {
    return luottotili->withdraw(amount);
}

bool Asiakas::tilisiirto(double amount, Asiakas& kohde) {
    if (amount <= 0 || pankkitili->getBalance() < amount) {
        cout << "Siirto epaonnistui: Ei tarpeeksi katetta tai virheellinen summa" << endl;
        return false;
    }

    bool nostoOnnistui = pankkitili->withdraw(amount);
    if (!nostoOnnistui) {
        cout << "Siirto epaonnistui: Nosto epaonnistui" << endl;
        return false;
    }

    bool talletusOnnistui = kohde.pankkitili->deposit(amount);
    if (!talletusOnnistui) {
        pankkitili->deposit(amount);
        cout << "Siirto epaonnistui: Talletus epaonnistui" << endl;
        return false;
    }

    cout << "Siirretty " << amount << " euroa tileilta " << this->getNimi()
         << " tilille " << kohde.getNimi() << endl;
    return true;
}
