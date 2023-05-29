#include <iostream>

using namespace std;

int suma(int a, int b) {
    return a + b;
}

int main(void) {
    int a, b;

    cout << "Ingrese dos numeros a sumar: ";
    cin >> a >> b;

    cout << "La suma de los dos numeros es " << suma(a, b) << endl;

    return 0;
}