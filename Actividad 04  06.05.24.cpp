#include <stdio.h>

int main() {
    int numeros[10];
    int i, x, y;
    printf("Ingresa 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 9; i++) {
        for (x = 0; x < 9 - i; x++) {
            if (numeros[x] < numeros[x + 1]) {
                y = numeros[x];
                numeros[x] = numeros[x + 1];
                numeros[x + 1] = y;
            }
        }
    } 
    printf("\nNumeros ordenados de mayor a menor:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
