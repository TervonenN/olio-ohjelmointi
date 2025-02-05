#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "Pankkitili.h"
using namespace std;

class Luottotili : public Pankkitili {
private:
    double luottoRaja;

public:
    Luottotili(const string& omistaja, double luottoRaja);
    bool withdraw(double amount) override;
};

#endif // LUOTTOTILI_H
