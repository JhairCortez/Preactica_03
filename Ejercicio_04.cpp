#include <iostream>
using namespace std;

int main() 
{
    double c;
    cout << "Ingrese la calificación: ";
    cin >> c;
    if (c >= 93 && c <= 100) {
        cout << "La calificación es: A" << endl;
    } else if (c >= 90) {
        cout << "La calificación es: A-" << endl;
    } else if (c >= 87) {
        cout << "La calificación es: B+" << endl;
    } else if (c >= 83) {
        cout << "La calificación es: B" << endl;
    } else if (c >= 80) {
        cout << "La calificación es: B-" << endl;
    } else if (c >= 77) {
        cout << "La calificación es: C+" << endl;
    } else if (c >= 73) {
        cout << "La calificación es: C" << endl;
    } else if (c >= 70) {
        cout << "La calificación es: C-" << endl;
    } else if (c >= 67) {
        cout << "La calificación es: D+" << endl;
    } else if (c >= 63) {
        cout << "La calificación es: D" << endl;
    } else if (c >= 60) {
        cout << "La calificación es: D-" << endl;
    } else {
        cout << "La calificación es: F" << endl;
    }
    return 0;
}
