#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Ingrese un número entre 1 y 7: ";
    cin >> n;
    switch (n)
     {
        case 1: cout << "domingo" << endl; break;
        case 2: cout << "lunes" << endl; break;
        case 3: cout << "martes" << endl; break;
        case 4: cout << "miércoles" << endl; break;
        case 5: cout << "jueves" << endl; break;
        case 6: cout << "viernes" << endl; break;
        case 7: cout << "sabado" << endl; break;
        default: cout << "numero invalido" << endl;
    }
    return 0;
}
