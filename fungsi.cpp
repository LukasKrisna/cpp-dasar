#include <iostream>

using namespace std;

// PROTOTYPE
int kuadrat(int x);
int tambah(int a, int b);
void tampilkanNama(string nama);

int main(int argc, char const *argv[])
{
    int input, a, b, hasil, hasilTambah;
    string nama;
    cout << "Nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);

    cout << "Nilai kuadrat dari " << input << " adalah: " << hasil;
    cout << endl;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    hasilTambah = tambah(a, b);
    cout << "Hasil penjumlahan " << a << " dan " << b << " adalah: " << hasilTambah;
    cout << endl;

    cout << "Masukkan namamu: ";
    cin >> nama;
    tampilkanNama(nama);

    return 0;
}

int kuadrat(int x)
{
    int y = x * x;
    return y;
}

int tambah(int a, int b)
{
    int y = a + b;
    return y;
}

void tampilkanNama(string nama)
{
    cout << "Hello " << nama;
}
