#include <iostream>

using namespace std;

int main()
{
    cout << "========FOR LOOP========" << endl;
    for (int counter = 0; counter <= 2; counter++)
    {
        cout << "Hai" << endl;
        cout << "Halo" << endl;
    }

    cout << "========WHILE LOOP========" << endl;

    int counter = 1;
    while (counter <= 2)
    {
        cout << "Hai" << endl;
        counter++;
    }

    return 0;
}
