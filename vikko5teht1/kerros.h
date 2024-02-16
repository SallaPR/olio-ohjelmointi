#ifndef KERROS_H
#define KERROS_H
#include <iostream>
using namespace std;
#include "asunto.h"


class Kerros
{
public:
    Kerros();
    ~Kerros();
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double);

private:
    asunto *pas1;
    asunto *pas2;
    asunto *pas3;
    asunto *pas4;
};

#endif // KERROS_H
