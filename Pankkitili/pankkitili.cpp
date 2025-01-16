#include "pankkitili.h"

Pankkitili::Pankkitili() {
    saldo = 0;
    pinkoodi = "1234";
    tilinro = "FI800032432";

}

int Pankkitili::getSaldo() const
{
    return saldo;
}

void Pankkitili::setSaldo(int newSaldo)
{
    saldo = newSaldo;
}
