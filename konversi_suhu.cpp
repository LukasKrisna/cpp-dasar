#include <iostream>

using namespace std;

int main()
{
    float celcius, reamur, fahrenheit;
    cout << "Masukkan suhu dalam celcius: ";
    cin >> celcius;

    reamur = celcius * 4 / 5;
    fahrenheit = (celcius * 9 / 5) + 32;

    cout << "==========HASIL==========" << endl;
    cout << "Reamur: " << reamur << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}
