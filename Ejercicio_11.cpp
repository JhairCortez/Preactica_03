#include <iostream>
using namespace std;

int main()
{
    int n, p = 0, i = 0, sm = 0, si = 0;
    cout << "Ingrese un número: ";
    cin >> n;
    while (n > 0)
    {
        int d = n % 10;
        if (d % 2 == 0)
        {
            p++;
            sm += d;
        }
        else
        {
            i++;
            si += d;
        }
        n = n / 10;
    }
    cout << "numero de pares: " << p << endl;
    cout << "suma de pares: " << sm << endl;
    cout << "numero de impares: " << i << endl;
    cout << "suma de impares: " << si << endl;
    return 0;
}
