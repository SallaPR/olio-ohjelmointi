#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include <iostream>
using namespace std;

class Katutaso : public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    virtual void maaritaAsunnot() override;
    double laskeKulutus(double);

private:
    asunto *pas1;
    asunto *pas2;
};

#endif // KATUTASO_H
