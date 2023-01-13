#include <iostream>

using namespace std;

int main()
{
    int x[] = {5, 2, 1, 4};
    int j = sizeof(x) / sizeof(*x);
    int temp;
    cout << "x : ";

    for (int i = 0; i < j; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < j; i++)
    {
        // int acak;
        for (int k = 0; k < j - 1; k++)
        {
            if (x[k] > x[k + 1])
            {
                temp = x[k];
                x[k] = x[k + 1];
                x[k + 1] = temp;
            }
        }
        // if (acak == 0)
        // {
        //     break;
        // }

        cout << endl;
        cout << "tahap " << i + 1 << " :";
        for (int h = 0; h < j; h++)
        {
            cout << x[h] << " ";
        }
    }
    cout << "\n\n";
    cout << "hasil : ";
    for (int i = 0; i < j; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}
