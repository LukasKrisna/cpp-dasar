#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int bangunDatar, panjang, lebar, jari;
    float hasil;
    float const PI = 3.14;

    cout << "Masukan 1. untuk menghitung luas persegi \n";
    cout << "Masukan 2. untuk menghitung luas lingkaran \n";
    cin >> bangunDatar;

    if (bangunDatar == 1)
    {
        cout << "Masukan Panjang dan lebar \n";
        cin >> panjang;
        cin >> lebar;
        hasil = panjang * lebar;
    }
    else if (bangunDatar = 2)
    {
        cout << "Masukan Jari-jari \n";
        cin >> jari;
        hasil = PI * pow(jari, 2);
    }
    cout << "Hasil : " << hasil;

    return 0;
}