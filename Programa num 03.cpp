#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, numero;
    cout << "Digite el numero del arreglo" << endl;
    cin >> n;
    
    vector<int> num(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Digite un numero para la posicion " << i << endl;
        cin >> numero;
        num[i] = numero;
    }
    
    for (int i = 0; i < n; i++) {
        cout << "El dato en la posicion " << i << " es " << num[i] << endl;
    }
    
    return 0;
}

