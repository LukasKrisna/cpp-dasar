#include <iostream>

using namespace std;

void fungsiRef(int &b)
{
    b = 10;
    cout << "address b: " << b << endl;
    cout << "nilai b: " << &b << endl;
}

void fungsiPtr(int *b)
{
    cout << "address b: " << b << endl;
    cout << "nilai b: " << *b << endl;
}

void kuadrat(int *valPtr, int &valRef)
{
    *valPtr = (*valPtr) * (*valPtr);
    valRef = valRef * valRef;
}

int main(int argc, char const *argv[])
{
    int a = 5;
    int *aPtr = &a;
    int *bPtr = nullptr;
    int &b = a;

    cout << "alamat dari a adalah: " << &a << endl;
    cout << "alamat dari a adalah: " << aPtr << endl;
    cout << "alamat dari bPtr adalah: " << bPtr << endl;
    cout << "mengambil nilai dari aPtr: " << *aPtr << endl;
    cout << "nilai dari a: " << a << endl;
    cout << "nilai dari b: " << b << endl;

    fungsiPtr(&a);
    a = 10;
    kuadrat(&a, a);
    cout << "nilai dari kuadrat a: " << a << endl;
    fungsiRef(a);
    cout << "nilai dari fungsiRef a: " << a << endl;

    return 0;
}
