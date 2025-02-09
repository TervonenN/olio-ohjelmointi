#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include "seuraaja.h"
using namespace std;

class Notifikaattori {
private:
    Seuraaja* seuraajat;

public:
    Notifikaattori();
    void lisaa(Seuraaja* s);
    void poista(Seuraaja* s);
    void tulosta();
    void postita(string viesti);
};

#endif
