#include <iostream>
using namespace std;
int main() {
    int acum = 0;
    int f;
    cout << "Digite el número de filas: "<< endl;
    cin >> f;

    int c;
    cout << "Digite el número de columnas: " << endl;
    cin >> c;

    int matriz[f][c]; 

    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            int numero;
            cout << "Digite dato para la fila " << i << " columna " << j << ": " <<endl;
            cin >> numero;
            matriz[i][j] = numero;
            acum += matriz[i][j];
        }
    }

    std::cout << "Los datos que hay en la matriz son:" <<endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << std::endl;
    }

    std::cout << "La suma de todos los elementos de la columna es: " << acum << endl;
}