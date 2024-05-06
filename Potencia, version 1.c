#include <stdio.h>
#include <math.h>
int main() {
    int n1, p, t, x;
    printf("Escriba su numero para elevarlo a su potencia:\n");
    scanf("%d", &n1);
    printf("Escriba ahora el numero de potencias que desea:\n");
    scanf("%d", &p);
    t= pow (n1 , p); 
     if (n1==5) {
        x=t+1;
    printf("El numero %d potenciado a la %d es igual a: %d\n", n1, p, x);
    }
    else if (n1>5) {
        printf("El numero %d potenciado a la %d es igual a: %d\n", n1, p, t);
        }
    if (n1<5) {
       printf("El numero %d potenciado a la %d es igual a: %d\n", n1, p, t); 
    }
}