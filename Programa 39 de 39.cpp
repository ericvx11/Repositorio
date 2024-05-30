#include <iostream>
using namespace std;

int main() {
    int x, y;
    int sumas[4] = {0};
    int mayor_suma = 0;
    int columna_mayor_suma = 0;
    for(int fila = 1; fila < 5; fila++) {
        cout << "Escriba el numero de su fila " << fila << endl;
        cin >> x;   
        for (int col = 1; col < 4; col++) {
            cout << "Escriba el numero de la columna " << col << " en la fila " << fila << endl;
            cin >> y;
            sumas[col] += y;
        }
    }
    for (int col = 1; col < 4; col++) {
        if (sumas[col] > mayor_suma) {
            mayor_suma = sumas[col];
            columna_mayor_suma = col;
        }
    }

    cout << "La suma de los numeros de cada columna es: " << endl;
    for (int col = 1; col < 4; col++) {
        cout << "Columna " << col << ": " << sumas[col] << endl;
    }
    cout << "La columna con la mayor suma es la columna " << columna_mayor_suma << " con una suma de " << mayor_suma << endl;

    return 0;
}
