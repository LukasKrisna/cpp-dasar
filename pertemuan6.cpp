#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14

void luas_persegi_panjang()
{
    int panjang, lebar;
    float hasil;
    cout << "Masukan Panjang dan lebar \n";
    cin >> panjang;
    cin >> lebar;
    hasil = panjang * lebar;
    cout << "Hasil : " << hasil;
}
void luas_lingkaran()
{
    int jari;
    float hasil;
    cout << "Masukan Jari-jari \n";
    cin >> jari;
    hasil = PI * pow(jari, 2);
    cout << "Hasil : " << hasil;
}
void luas_segitiga()
{
    int alas, tinggi;
    float hasil;
    cout << "Masukan alas dan tinggi \n";
    cin >> alas;
    cin >> tinggi;
    hasil = (alas * tinggi) / 2;
    cout << "Hasil : " << hasil;
}
void volume_bola()
{
    int jari;
    float hasil;
    cout << "Masukan Jari-jari \n";
    cin >> jari;
    hasil = 4 / 3 * pow(jari, 3) * PI;
    cout << "Hasil : " << hasil;
}
void volume_tabung()
{
    int jari, tinggi;
    float hasil;
    cout << "Masukan Jari-jari dan Tinggi \n";
    cin >> jari;
    cin >> tinggi;
    hasil = PI * pow(jari, 2) * tinggi;
    cout << "Hasil : " << hasil;
}
void volume_kerucut()
{
    int jari, tinggi;
    float hasil;
    cout << "Masukan Jari-jari dan Tinggi \n";
    cin >> jari;
    cin >> tinggi;
    hasil = 1 / 3 * PI * pow(jari, 2) * tinggi;
    cout << "Hasil : " << hasil;
}
void volume_kubus()
{
    int panjang, lebar, tinggi;
    float hasil;
    cout << "Masukan Panjang, Lebar, dan Tinggi \n";
    cin >> panjang;
    cin >> lebar;
    cin >> tinggi;
    hasil = panjang * lebar * tinggi;
    cout << "Hasil : " << hasil;
}

int main()
{
    int bangunDatar;

    cout << "Masukan 1. untuk menghitung luas persegi panjang\n";
    cout << "Masukan 2. untuk menghitung luas lingkaran \n";
    cout << "Masukan 3. untuk menghitung luas segitiga \n";
    cout << "Masukan 4. untuk menghitung volume bola \n";
    cout << "Masukan 5. untuk menghitung volume tabung \n";
    cout << "Masukan 6. untuk menghitung volume kerucut \n";
    cout << "Masukan 7. untuk menghitung volume kubus \n";
    cin >> bangunDatar;

    switch (bangunDatar)
    {
    case 1:
        luas_persegi_panjang();
        break;
    case 2:
        luas_lingkaran();
        break;
    case 3:
        luas_segitiga();
        break;
    case 4:
        volume_bola();
        break;
    case 5:
        volume_tabung();
        break;
    case 6:
        volume_kerucut();
        break;
    case 7:
        volume_kubus();
        break;
    }

    return 0;
}