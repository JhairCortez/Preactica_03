#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    while (n > 0)
    {
        int d = n % 10;
        switch (d)
        {
            case 0: cout << d << " cero" << endl; break;
            case 1: cout << d << " uno" << endl; break;
            case 2: cout << d << " dos" << endl; break;
            case 3: cout << d << " tres" << endl; break;
            case 4: cout << d << " cuatro" << endl; break;
            case 5: cout << d << " cinco" << endl; break;
            case 6: cout << d << " seis" << endl; break;
            case 7: cout << d << " siete" << endl; break;
            case 8: cout << d << " ocho" << endl; break;
            case 9: cout << d << " nueve" << endl; break;
        }
        n = n / 10;
    }
    return 0;
}
