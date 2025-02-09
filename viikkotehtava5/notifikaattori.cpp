#include "notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori() : seuraajat(nullptr) {}

void Notifikaattori::lisaa(Seuraaja* s) {
    // Lisätään uusi seuraaja listan alkuun
    Seuraaja* vanha_alku = seuraajat;
    seuraajat = s;
    s->next = vanha_alku;
}

void Notifikaattori::poista(Seuraaja* s) {
    if (!seuraajat) return;

    if (seuraajat == s) {
        seuraajat = seuraajat->next;
        return;

    }

    Seuraaja* current = seuraajat;
    while (current->next) {
        if (current->next == s) {
            current->next = s->next;
            return;
        }
        current = current->next;
    }
}

void Notifikaattori::tulosta() {
    Seuraaja* current = seuraajat;
    while (current) {
        cout << current->getNimi() << " ";
        current = current->next;
    }
    cout << endl;
}

void Notifikaattori::postita(string viesti) {
    Seuraaja* current = seuraajat;
    while (current) {
        current->paivitys(viesti);
        current = current->next;
    }
}
