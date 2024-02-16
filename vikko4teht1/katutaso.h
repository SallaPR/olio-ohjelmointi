#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include <iostream>
using namespace std;

class Katutaso : public Kerros
{
public:
    Katutaso();
    virtual void maaritaAsunnot() override;
    double laskeKulutus(double);

private:
    asunto as1;
    asunto as2;
};

#endif // KATUTASO_H
