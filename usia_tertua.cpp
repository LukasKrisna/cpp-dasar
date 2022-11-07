#include <iostream>

using namespace std;

int main()
{
    int umur1, umur2, umur3;
    string nama1, nama2, nama3, hasil;

    cout << "Masukkan nama : ";
    cin >> nama1;
    cout << "Masukkan umur : ";
    cin >> umur1;
    cout << "Masukkan nama : ";
    cin >> nama2;
    cout << "Masukkan umur : ";
    cin >> umur2;
    cout << "Masukkan nama : ";
    cin >> nama3;
    cout << "Masukkan umur : ";
    cin >> umur3;

    if ((umur1 > umur2) && (umur1 > umur3))
    {
        cout << nama1 << " lebih tua dibanding " << nama2 << " dan " << nama3;
    }
    else if ((umur2 > umur1) && (umur2 > umur3))
    {
        cout << nama2 << " lebih tua dibanding " << nama1 << " dan " << nama3;
    }
    else if ((umur3 > umur1) && (umur3 > umur2))
    {
        cout << nama3 << " lebih tua dibanding " << nama1 << " dan " << nama2;
    }
    else
    {
        cout << "Umur mereka bertiga sama";
    }

    return 0;
}
