#include <stdio.h>
int main() {
    int x, n1, n2, n3;
    printf("Escriba su primer numero:\n");
    scanf("%d", &n1);
    printf("Escriba su segundo numero:\n");
    scanf("%d", &n2);
    printf("Escriba su tercer numero:\n");
    scanf("%d", &n3);
    x=n1+n2+n3;
    printf("La suma de los tres numeros es: %d\n",x);
    if (n1>n2) {
        if(n2>n3) {
            printf("El orden seria: %d, %d, %d\n", n1, n2, n3);
        }
        else if(n2<n3) {
            printf("El orden seria: %d, %d, %d\n", n1, n3, n2);
        }

    }
    if (n2>n1) {
        if(n1>n3) {
            printf("El orden seria: %d, %d, %d\n", n2, n1, n3);
        }
        else if(n1<n3) {
            printf("El orden seria: %d, %d, %d\n", n2, n3, n1);
        }
    }
    if (n3>n1) {
        if(n1>n2) {
            printf("El orden seria: %d, %d, %d\n", n3, n1, n2);
        }
        else if(n1<n2) {
            printf("El orden seria: %d, %d, %d\n", n3, n2, n1);
        }
    }
//NOTA
//Cuando salen dos resultados, el correcto es el de abajo                   :)
}