#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int angka1, angka2, total, pilihanMenu;
    char pilihan, operasi;

    do
    {
        cout << "Kalkulator Sederhana" << endl;
        cout << "Masukkan Pilihan" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Pemangkatan" << endl;
        cout << endl;

        cout << "Pilih menu 1-5: ";
        cin >> pilihanMenu;

        switch (pilihanMenu)
        {
        case 1:
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
            cout << "Masukkan angka kedua: ";
            cin >> angka2;
            operasi = '+';
            total = angka1 + angka2;
            break;
        case 2:
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
            cout << "Masukkan angka kedua: ";
            cin >> angka2;
            operasi = '-';
            total = angka1 - angka2;
            break;
        case 3:
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
            cout << "Masukkan angka kedua: ";
            cin >> angka2;
            operasi = '*';
            total = angka1 * angka2;
            break;
        case 4:
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
            cout << "Masukkan angka kedua: ";
            cin >> angka2;
            operasi = '/';
            total = angka1 / angka2;
            break;
        case 5:
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
            cout << "Masukkan angka kedua: ";
            cin >> angka2;
            operasi = '^';
            total = pow(angka1, angka2);
            break;
        default:
            cout << "Silahkan Masukkan Pilihan dengan benar" << endl;
        }

        cout << "Penjumlahan" << endl;
        cout << "Hasil: " << angka1 << operasi << angka2 << " = " << total << endl;

        cout << "=====================================" << endl;
        cout << "Apakah anda ingin mengulang?(y/n): ";
        cin >> pilihan;
        system("cls");
    } while (pilihan == 'y');
    cout << "Terimakasih sudah mencoba";

    return 0;
}
