#include "seuraaja.h"
#include <iostream>
using namespace std;

Seuraaja::Seuraaja(string nimi) : nimi(nimi), next(nullptr) {}

string Seuraaja::getNimi() {
    return nimi;
}

void Seuraaja::paivitys(string viesti) {
    cout << viesti << endl;
}
