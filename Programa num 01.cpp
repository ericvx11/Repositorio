// Este programa trato sobre imprimir la posicicon de el numero entregado
// por consola.      :)

#include <iostream>
using namespace std;

int main () {
    int numero;
    int num [5];
    for (int i = 0; i<5; i++) {
        cout<< "Digite un numero para la posicion" << i <<endl;
        cin>> numero;
        num [i] = numero;
    }

    for (int i = 0; i<5; i++) {
        cout<< "     El dato en la posicion " << i << " es: " << num[i] ;
    }
    return 0;
}
