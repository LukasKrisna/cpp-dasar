#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int hasil;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            hasil = i + j;
            cout << hasil << " ";
        }
        cout << endl;
    }

    return 0;
}
