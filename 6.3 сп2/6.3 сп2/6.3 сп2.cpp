#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;
void Create(int* a, const int size, int i)
{
    a[i] = rand() % 26;

    if (i < size - 1)
        Create(a, size, i + 1);
}

void Print(int* a, const int size, int i, int& S)
{
    if (i == 0)
        cout << "a[10]={ ";
    cout << setw(4) << a[i] << ", ";
    if (i < size - 1)
        Print(a, size, i + 1, S);
    else
        cout << " }" << '\n' << "suma = " << S << endl;
}

int Sum(int* a, const int size, int i, int& S)
{
    if (a[i] % 2 == 0)
        S += a[i];
    if (i < size - 1)
        return Sum(a, size, i + 1, S);
    else
        return S;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];
    int S = 0;
    Create(a, n, 0);
    Sum(a, n, 0, S);
    Print(a, n, 0, S);

    return 0;
}
