#include <iostream>
using namespace std;

int main()
{
    int n, c = 0, s = 0, p = 0, sp = 0, i = 0, si = 0;
    cout << "ingrese número: " << endl;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        c++;
        s += n;

        if (n % 2 == 0)
        {
            p++;
            sp += n;
        }
        else
        {
            i++;
            si += n;
        }
    }
    cout << "cantidad de números ingresados: " << c << endl;
    cout << "Suma de números ingresados: " << s << endl;
    cout << "Cantidad de números pares: " << p << endl;
    cout << "Suma de números pares: " << sp << endl;
    cout << "Cantidad de números impares: " << i << endl;
    cout << "Suma de números impares: " << si << endl;
    return 0;
}
