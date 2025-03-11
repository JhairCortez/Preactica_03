#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout << "ingrese tres numeros: ";
    cin >> a >> b >> c;
    if (a == b && b == c) 
    {
        cout << "los 3 numeros son iguales." << endl;
    } else if (a >= b && a >= c) 
    {
        cout << "el mayor num es: " << a << endl;
    } else if (b >= a && b >= c) 
    {
        cout << "el mayor num es: " << b << endl;
    } else 
    {
        cout << "el mayor num es: " << c << endl;
    }
    return 0;
}
