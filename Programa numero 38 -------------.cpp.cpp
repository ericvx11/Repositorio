#include <iostream>
using namespace std;

int main() {
    int col1, col2, col3, col4,col5, col6, col7, col8, col9, col10, col11, col12, s1, s2, s3, s4; 
    cout<< "--------------------------------------" <<endl;
    cout<< "Esceiba el numero de la columna 1 en la fila 1:" <<endl;
    cin>> col1;
    cout<< "Esceiba el numero de la columna 2 en la fila 1:" <<endl;
    cin>> col2;
    cout<< "Esceiba el numero de la columna 3 en la fila 1:" <<endl;
    cin>> col3;
    cout<< "--------------------------------------" <<endl;
    cout<< "Esceiba el numero de la columna 1 en la fila 2:" <<endl;
    cin>> col4;
    cout<< "Esceiba el numero de la columna 2 en la fila 2:" <<endl;
    cin>> col5;
    cout<< "Esceiba el numero de la columna 3 en la fila 2:" <<endl;
    cin>> col6;
    cout<< "--------------------------------------" <<endl;
    cout<< "Esceiba el numero de la columna 1 en la fila 3:" <<endl;
    cin>> col7;
    cout<< "Esceiba el numero de la columna 2 en la fila 3:" <<endl;
    cin>> col8;
    cout<< "Esceiba el numero de la columna 3 en la fila 3:" <<endl;
    cin>> col9;
    cout<< "--------------------------------------" <<endl;
    cout<< "Esceiba el numero de la columna 1 en la fila 4:" <<endl;
    cin>> col10;
    cout<< "Esceiba el numero de la columna 2 en la fila 4:" <<endl;
    cin>> col11;
    cout<< "Esceiba el numero de la columna 3 en la fila 4:" <<endl;
    cin>> col12;


    cout<< "--------------------------------------" <<endl;
    s1=col1+col2+col3;
    cout<< "El resultado de la suma de las columnas en la fila 1 es: " << s1<<endl;
    s2=col4+col4+col6;
    cout<< "--------------------------------------" <<endl;
    cout<< "El resultado de la suma de las columnas en la fila 2 es: " << s2<<endl;
    s3=col7+col8+col9;
    cout<< "--------------------------------------" <<endl;
    cout<< "El resultado de la suma de las columnas en la fila 3 es: " << s3<<endl;
    s4=col10+col11+col12;
    cout<< "--------------------------------------" <<endl;
    cout<< "El resultado de la suma de las columnas en la fila 4 es: " << s4<<endl;
    cout<< "--------------------------------------" <<endl;
    if(s1>s2) {
        if(s1>s3) {
            if(s1>s4) {
                cout<< "La resultado de la columna 1 es el mayor, con:" <<endl;
                cout<<s1;
            }
        }
    }
    if(s2>s1) {
        if(s2>s3) {
            if(s2>s4) {
                cout<< "La resultado de la columna 2 es el mayor, con:" <<endl;
                cout<<s2;
            }
        }
    }
    if(s3>s1) {
        if(s3>s2) {
            if(s3>s4) {
                cout<< "La resultado de la columna 3 es el mayor, con:" <<endl;
                cout<<s3;
            }
        }
    }
    if(s4>s1) {
        if(s4>s2) {
            if(s4>s3) {
                cout<< "La resultado de la columna 4 es el mayor, con:" <<endl;
                cout<<s4;
            }
        }
    }
}
// ESTE ES EL PROGRAMA 38, SOLO QUE MAS LARGO.