#include <iostream>
using namespace std;

int main()
{
    int a, b, n;
    cout << "ingrese el primer valor de la serie: ";
    cin >> a;
    cout << "ingrese el segundo valor de la serie: ";
    cin >> b;
    cout << "ingrese el número de valores a generar: ";
    cin >> n;
    cout << "oa serie de fibonacci es: " << a << ", " << b;    
    for (int i = 3; i <= n; i++)
    {
        int nt = a + b;
        cout << ", " << nt;
        a = b;
        b = nt;
    }    
    cout << endl;
    return 0;
}
