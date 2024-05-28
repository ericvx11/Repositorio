#include <iostream>
using namespace std;

int main() {
    int pos, nombre, n, i;
    
    cout<< "Digite el número de países: " <<endl;
    cin>> n;
    int paises[n];
    
    for (i=0; i<n; i++) {
        cout<< "Digite país: " <<endl;
        cin>> nombre;
        paises[i]=nombre;
    }
    
    cout<< "Digite la posición: " <<endl;
    cin>>pos;
    
    if(pos >= 0 && pos < n) {
        cout<< "El país que hay en la posición " << pos << " es " <<paises[pos] <<endl;
    } else {
        cout<< "La posición ingresada está fuera del rango." <<endl;
    }
}
