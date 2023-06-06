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

int main(void) {
    int notas;
    cout << "Ingrese la cantidad maxima de notas: ";
    cin >> notas;

    // Ahora creamos el arreglo de notas
    int arr_notas[notas];
    llenarNotas(arr_notas, notas);
    imprimirNotas(arr_notas, notas);

    return 0;
}