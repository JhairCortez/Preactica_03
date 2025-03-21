#include <iostream>
using namespace std;

int main() 
{
    int n1, n2, n3, n4;
    double nf;
    cout << "Ingrese la nota del 1er examen: ";
    cin >> n1;
    cout << "Ingrese la nota del 2do examen: ";
    cin >> n2;
    cout << "Ingrese la nota del 3er examen: ";
    cin >> n3;
    cout << "Ingrese la nota del 4to examen: ";
    cin >> n4;
    nf = (n1 * 0.10) + (n2 * 0.20) + (n3 * 0.30) + (n4 * 0.40);
    cout << "nota final: " << nf << endl;
    if (nf >= 60) 
    {
        cout << "el estudiante esta habilitafo." << endl;
    } else
    {
        cout << "el estudiante no esta habikitado." << endl;
    }
    return 0;
}
