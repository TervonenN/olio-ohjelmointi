#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "Pankkitili.h"
#include "Luottotili.h"
#include <memory>
using namespace std;


class Asiakas {
private:
    string nimi;
    unique_ptr<Pankkitili> pankkitili;
    unique_ptr<Luottotili> luottotili;

public:
    Asiakas(const string& nimi, double luottoRaja);
    ~Asiakas() = default;

    string getNimi() const;
    void showSaldo() const;
    bool talletus(double amount);
    bool nosto(double amount);
    bool luotonMaksu(double amount);
    bool luotonNosto(double amount);
    bool tilisiirto(double amount, Asiakas& kohde);
};

#endif // ASIAKAS_H
