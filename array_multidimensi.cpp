#include <iostream>
#include <array>

using namespace std;

const int baris = 2;
const int kolom = 2;

void printArray(int *ptrArray, int baris, int kolom)
{
    int index = 0;
    for (int i = 0; i < baris; i++)
    {
        cout << "[ ";
        for (int j = 0; j < kolom; j++)
        {
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}

void printArrayStdLib(array<array<int, kolom>, baris> &nilaiArray)
{
    for (array<int, kolom> vectorBaris : nilaiArray)
    {
        cout << "[ ";
        for (int nilaiKolom : vectorBaris)
        {
            cout << nilaiKolom << " ";
        }
        cout << "]" << endl;
    }
}

int main()
{

    // array multidimensi
    // array[baris][kolom]
    int arrayMD[baris][kolom] = {1, 2, 3, 4};
    array<array<int, kolom>, baris> nilaiMD = {0, 1, 2, 3}; // <-- std lib array

    printArray(*arrayMD, baris, kolom);
    cout << endl;
    printArrayStdLib(nilaiMD);
    return 0;
}
