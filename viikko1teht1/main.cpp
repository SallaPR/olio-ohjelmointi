#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int randomNumber = rand() % 20 + 1;
    int userNumber = 0;

    // Arvotaan satunnainen luku
    cout << randomNumber  << endl;

    // Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
    // Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
    // Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.

    while (true) {
        cout << "Guess a number between 1-20: ";
        cin >> userNumber;

        if (userNumber < randomNumber) {
            cout << "Number is bigger" << endl;
        } else if (userNumber > randomNumber) {
            cout << "Number is smaller" << endl;
        } else {
            cout << "Your guess is correct!" << endl;
            break;
        }
    }
    return 0;
}
