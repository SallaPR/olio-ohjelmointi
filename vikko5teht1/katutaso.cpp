#include "katutaso.h"

Katutaso::Katutaso()
{
    pas1 = new asunto;
    pas2 = new asunto;
    cout << "katutaso luotu" << endl;
}

Katutaso::~Katutaso()
{
    delete pas1;
    delete pas2;
    cout << "Katutaso tuhottu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    pas1->maarita(1,100);
    pas2->maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
}

double Katutaso::laskeKulutus(double hinta)
{
    cout << "peritty laskeKulutus ylikirjoitettu" << endl;
    return pas1->laskeKulutus(hinta) + pas2->laskeKulutus(hinta);
}
