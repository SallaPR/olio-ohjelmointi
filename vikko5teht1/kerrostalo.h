#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
using namespace std;
#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);

private:
    Katutaso *peka;
    Kerros *ptoka;
    Kerros *pkolmas;

};

#endif // KERROSTALO_H
