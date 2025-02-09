#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>
using namespace std;

class Seuraaja {
private:
    string nimi;


public:
    Seuraaja(string nimi);
    string getNimi();
    void paivitys(string viesti);
    Seuraaja* next;
};

#endif
