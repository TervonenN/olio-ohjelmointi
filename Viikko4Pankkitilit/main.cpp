#include "Asiakas.h"
#include <iostream>
using namespace std;

int main() {
    Asiakas asiakas1("Matti Meikalainen", 1000.0);
    Asiakas asiakas2("Maija Mallikas", 1000.0);

    cout << "Alkutilanne:" << endl;
    cout << "Matin tili:" << endl;
    asiakas1.showSaldo();
    cout << "\nMaijan tili:" << endl;
    asiakas2.showSaldo();

    cout << "\nTalletetaan Matille 500 euroa" << endl;
    asiakas1.talletus(500.0);

    cout << "\nTilanne talletuksen jalkeen:" << endl;
    cout << "Matin tili:" << endl;
    asiakas1.showSaldo();

    cout << "\nSiirretaan 200 euroa Matilta Maijalle" << endl;
    asiakas1.tilisiirto(200.0, asiakas2);

    cout << "\nLopputilanne:" << endl;
    cout << "Matin tili:" << endl;
    asiakas1.showSaldo();
    cout << "\nMaijan tili:" << endl;
    asiakas2.showSaldo();

    return 0;
}
