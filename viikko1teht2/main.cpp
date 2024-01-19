#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game (int maxnum)
{
    srand(std::time(0));
    int randomNumber = (rand()%maxnum)+1;
    int userNumber = 0;
    int guesses = 0;
    bool stayInLoop = true;
    while (stayInLoop)
    {
        cout << "Guess a number ";
        cin >> userNumber;
        guesses++;
        if (userNumber == randomNumber)
        {
            cout << "Your guess is correct!" << endl;
            stayInLoop = false;
        }
        else if (userNumber < randomNumber)
        {
            cout << "Number is bigger" << endl;
        }
        else
        {
            cout << "Number is smaller" << endl;
        }
    }
    return guesses;
}

int main()
{
    cout << "Lets play!" << endl;
    int range = 0;
    cout << "Give max value" << endl;
    cin >> range;
    cout << "Your result = " << game(range) << endl;
    return 0;
}
