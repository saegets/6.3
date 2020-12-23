#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        a[i] = rand() % 26;
}

void suma(int* a, const int size, int& S)
{
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0)
        {
            S += a[i];
        }
}

void print(int* a, const int size, int& S)
{
    cout << setw(4) << "a[10] = {";
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << a[i] << ", ";
    }
    cout << "}" << endl;

    cout << "Suma =" << S << endl;
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 10;
    int a[n];
    Create(a, n);
    int S = 0; 
    suma(a, n, S);
    print(a, n, S);

    return 0;
}