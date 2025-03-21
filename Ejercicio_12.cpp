#include <iostream>
using namespace std;

bool sp(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, s = 0;
    cout << "ingrese un número: ";
    cin >> n;
    while (n > 0)
    {
        s += n % 10;
        n = n / 10;
    }
    cout << "la suma de los dígitos es: " << s << endl;
    if (sp(s))
    {
        cout << "la suma de los dígitos es un número primo." << endl;
    }
    else
    {
        cout << "la suma de los dígitos no es un número primo." << endl;
    }
    return 0;
}
