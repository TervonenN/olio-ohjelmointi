#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <string>
using namespace std;
class Pankkitili {
protected:
    string omistaja;
    double saldo;

public:
    Pankkitili(const string& omistaja);
    virtual ~Pankkitili() = default;

    double getBalance() const;
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
};

#endif // PANKKITILI_H
