#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    cout << "Ingrese un número: ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    if (s == n)
    {
        cout << n << " es un número perfecto." << endl;
    }
    else
    {
        cout << n << " no es un número perfecto." << endl;
    }
    return 0;
}
