#include <iostream>

using namespace std;

int main()
{
    int x[] = {3, 4, 6, 5, 2};
    int j = sizeof(x) / sizeof(*x);
    int temp, pos;

    cout << "y : ";

    for (int i = 0; i < j; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;

    for (int a = 0; a < j; a++)
    {
        temp = x[a];
        pos = a;
        for (int b = a; b < j; b++)
        {
            if (x[b] < temp)
            {
                temp = x[b];
                pos = b;
            }
        }
        x[pos] = x[a];
        x[a] = temp;

        cout << endl;
        cout << a + 1 << " : ";
        for (int c = 0; c < j; c++)
        {
            cout << x[c] << " ";
        }
    }
    cout << "\n\n";
    cout << "z : ";
    for (int d = 0; d < j; d++)
    {
        cout << x[d] << " ";
    }

    return 0;
}
