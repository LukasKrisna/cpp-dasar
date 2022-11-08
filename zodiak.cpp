#include <iostream>

using namespace std;

int main()
{
    int bulan, tanggal;

    cout << "Masukkan bulan : ";
    cin >> bulan;
    cout << "Masukkan tanggal : ";
    cin >> tanggal;
    cout << "---------------------------------";
    cout << "\nZodiak Anda adalah ";

    if ((tanggal >= 21 && tanggal <= 31 && bulan == 3) || (tanggal >= 1 && tanggal <= 19 && bulan == 4))
    {
        cout << "Aries" << endl;
    }
    else if ((tanggal >= 20 && tanggal <= 30 && bulan == 4) || (tanggal >= 1 && tanggal <= 20 && bulan == 5))
    {
        cout << "Taurus" << endl;
    }
    else if ((tanggal >= 21 && tanggal <= 31 && bulan == 5) || (tanggal >= 1 && tanggal <= 20 && bulan == 6))
    {
        cout << "Gemini" << endl;
    }
    else if ((tanggal >= 21 && tanggal <= 30 && bulan == 6) || (tanggal >= 1 && tanggal <= 22 && bulan == 7))
    {
        cout << "Cancer" << endl;
    }
    else if ((tanggal >= 23 && tanggal <= 31 && bulan == 7) || (tanggal >= 1 && tanggal <= 22 && bulan == 8))
    {
        cout << "Leo" << endl;
    }
    else if ((tanggal >= 23 && tanggal <= 31 && bulan == 8) || (tanggal >= 1 && tanggal <= 22 && bulan == 9))
    {
        cout << "Virgo" << endl;
    }
    else if ((tanggal >= 23 && tanggal <= 30 && bulan == 9) || (tanggal >= 1 && tanggal <= 22 && bulan == 10))
    {
        cout << "Libra" << endl;
    }
    else if ((tanggal >= 23 && tanggal <= 31 && bulan == 10) || (tanggal >= 1 && tanggal <= 21 && bulan == 11))
    {
        cout << "Scorpio" << endl;
    }
    else if ((tanggal >= 22 && tanggal <= 30 && bulan == 11) || (tanggal >= 1 && tanggal <= 21 && bulan == 12))
    {
        cout << "Sagitarius" << endl;
    }
    else if ((tanggal >= 22 && tanggal <= 31 && bulan == 12) || (tanggal >= 1 && tanggal <= 19 && bulan == 1))
    {
        cout << "Capricorn" << endl;
    }
    else if ((tanggal >= 20 && tanggal <= 31 && bulan == 1) || (tanggal >= 1 && tanggal <= 18 && bulan == 2))
    {
        cout << "Aquarius" << endl;
    }
    else if ((tanggal >= 19 && tanggal <= 29 && bulan == 2) || (tanggal >= 1 && tanggal <= 20 && bulan == 3))
    {
        cout << "Pisces" << endl;
    }
    else
    {
        cout << "-" << endl;
        cout << "Tanggal dan/atau Bulan yang Anda masukkan salah" << endl;
    }
    cout << "---------------------------------";
    return 0;
}