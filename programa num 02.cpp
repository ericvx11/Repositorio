#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
    int n;
    string nombre;

    cout << "Digite el numero de posiciones" << endl;
    cin >> n;

    vector<string> personas(n);

    for (int i = 0; i < n; i++) {
        cout << "Digite un nombre para la posicion " << i << endl;
        cin >> nombre;
        personas[i] = nombre;
    }

    for (int i = 0; i < n; i++) {
        cout << "El dato en la posicion " << i << " es " << personas[i] << endl;
    }

    return 0;
}

