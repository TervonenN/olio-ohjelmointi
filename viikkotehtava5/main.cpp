#include "notifikaattori.h"
using namespace std;

int main() {
    Notifikaattori notif;

    Seuraaja* s1 = new Seuraaja("A");
    Seuraaja* s2 = new Seuraaja("B");
    Seuraaja* s3 = new Seuraaja("C");

    notif.lisaa(s1);
    notif.lisaa(s2);
    notif.lisaa(s3);

    notif.tulosta();
    notif.postita("Testiviesti");

    notif.poista(s2);
    notif.tulosta();
    notif.postita("Testiviesti");

    return 0;
}
