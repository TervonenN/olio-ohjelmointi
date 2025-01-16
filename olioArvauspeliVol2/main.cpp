#include <iostream>
#include "olioArvauspeliVol2.h"

using namespace std;


int main()
{
    Game peli(20);  // Luo uuden pelin, max arvo 20
    peli.play();    // Käynnistää pelin
    peli.printGameResult();  // Tulostaa tuloksen
    return 0;
}
