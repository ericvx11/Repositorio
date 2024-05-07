#include <stdio.h>
int main() {
    int n1, p, i;
    int r= 1;
    printf("Escriba su numero para elevarlo a su potencia:\n");
    scanf("%d", &n1);
    printf("Escriba ahora el numero de potencias que desea:\n");
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
           r *= n1;
    }
        printf("El numero %d a la %d potencia es: %d", n1, p, r);
    return 0;
}