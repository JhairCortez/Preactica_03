#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un número en base 10: ";
    cin >> n;
    int b[32];
    int i = 0;
    while (n > 0)
    {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "El número en base 2 es: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << b[j];
    }
    cout << endl;
    return 0;
