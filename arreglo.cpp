#include <iostream>

using namespace std;

void llenarNotas(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void imprimirNotas(int *arr, int n) {
    cout << "Las notas ingresadas son:\n";
    for(int i = 0; i < n; i++) {
        cout << i + 1 << ".- " << arr[i] << endl;
    }
}

double obtenerPromedio(int *arr, int n) {
    double prom;
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    prom = sum / n;
    return prom;
}

int main(void) {
    int notas;
    cout << "Ingrese la cantidad maxima de notas: ";
    cin >> notas;

    // Ahora creamos el arreglo de notas
    int arr_notas[notas];
    llenarNotas(arr_notas, notas);
    imprimirNotas(arr_notas, notas);

    // Ahora hallaremos el promedio de notas
    double prom = obtenerPromedio(arr_notas, notas);
    cout << "El promedio de las notas ingresadas es: " << prom << endl;

    return 0;
}