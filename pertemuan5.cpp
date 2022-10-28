#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    // int arrayNilai[5] = {1, 2, 3, 4, 5};
    array<int, 5> arrayNilai = {1, 2, 3, 4, 5};

    // SEBELUM C++11
    for (int i = 0; i < 5; i++)
    {
        cout << arrayNilai[i] << endl;
    }

    // C++ 11
    for (int nilai : arrayNilai)
    {
        cout << "addressnya: " << &nilai << " nilainya: " << nilai << endl;
        nilai = 1; // <---- tidak merubah array
    }

    cout << endl;
    // Memanggil address array
    for (int &nilaiRef : arrayNilai)
    {
        cout << "addressnya: " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }

    cout << endl;
    // Memanipulasi array dengan menggunakan referensi
    for (int &nilaiRef : arrayNilai)
    {
        nilaiRef += 2;
        cout << "addressnya: " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }
    return 0;
}
