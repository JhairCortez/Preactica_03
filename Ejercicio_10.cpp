#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    cout << "Ingrese un número: ";
    cin >> n;
    while (n > 0)
    {
        s += n % 10;
        n = n / 10;
    }
    cout << "La suma de los dígitos es: " << s << endl;
    return 0;
}
