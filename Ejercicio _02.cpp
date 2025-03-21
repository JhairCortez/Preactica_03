#include <iostream>
using namespace std;

int main() 
{
    int m;
    cout << "Ingrese el monto: ";
    cin >> m;
    int v[] = {200, 100, 50, 20, 10, 5, 2, 1};
    int c;
    for (int i = 0; i < 8; i++) 
    {
        c = m / v[i];
        m %= v[i];
        if (c > 0) 
        {
            if (v[i] >= 10) 
            { 
                cout << c << " billetes" << (c > 1 ? "s" : "") << " de " << v[i] << endl;
            } else 
            { 
                cout << c << " monedas" << (c > 1 ? "s" : "") << " de " << v[i] << endl;
            }
        }
    }
    return 0;
}
