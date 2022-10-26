#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if ((n == 0) || (n == 1))
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int faktorialRekursif(int c)
{
    if (c <= 1)
    {
        return c;
    }
    else
    {
        return c * faktorialRekursif(c - 1);
    }
}

int pangkatIterasi(int a, int b)
{
    int hasil = a;
    for (int i = 1; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b)
{
    if (b <= 1)
    {
        cout << "batas akhir rekursif" << endl;
        return a;
    }
    else
    {
        cout << "rekursif ke: " << b << endl;
        return a * pangkatRekursif(a, (b - 1));
    }
}

int main(int argc, char const *argv[])
{
    int a, b, c, n;
    cout << "Angka: ";
    cin >> a;
    cout << "Pangkat: ";
    cin >> b;

    pangkatRekursif(a, b);

    cout << "\nangka rekursif: ";
    cin >> c;
    cout << "hasil faktorialnya: " << faktorialRekursif(c) << endl;

    cout << "\nfibonacci ke: ";
    cin >> n;
    cout << "nilainya: " << fibonacci(n);

    return 0;
}
