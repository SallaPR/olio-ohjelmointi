#ifndef KERROS_H
#define KERROS_H
#include <iostream>
using namespace std;
#include "asunto.h"


class Kerros
{
public:
    Kerros();
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double);

private:
    asunto as1;
    asunto as2;
    asunto as3;
    asunto as4;
};

#endif // KERROS_H
