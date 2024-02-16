#include <iostream>
#include "asunto.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    Kerrostalo *talo = new Kerrostalo;
    cout << "Kerrostalon kulutus, = " << talo->laskeKulutus(1) << endl;

    delete talo;
    return 0;
}
