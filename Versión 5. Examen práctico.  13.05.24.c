#include <stdio.h>
#include <string.h>

int main() {
    char us[25];
    char contra[5];
    int intentos = 0;
    int num, pre, x, y, opci;

    for (intentos = 0; intentos < 3; intentos++) {
        printf("Escriba su nombre\n");
        scanf("%s", us);
        printf("Escriba la contrasena\n");
        scanf("%s", contra);

        if (strcmp(us, "Eric") == 0 && strcmp(contra, "2B47") == 0) {
            printf("Bienvenido al sistema\n");
            printf("Si desea crear una factura\n");
            printf("Presione 1 para continuar\n");
            printf("Presione 0 para detener\n");
            scanf("%d", &opci);
            if (opci != 0) {
                printf("Usted decidió crear una factura\n");
                printf("Escriba el numero de articulos que desea comprar\n");
                scanf("%d", &num);
                printf("Ahora, por favor introduzca el precio de cada articulo\n");
                scanf("%d", &pre);
                x = num * pre;
                y = x;
                printf("El precio de la factura es: %d\n", y);
            }
            printf("De acuerdo, hasta luego\n");
            return 0;
        } else {
            printf("La contraseña es incorrecta, intente de nuevo\n");
        }
    }

    printf("Se ha exedido el numero maximo de intentos, cierre el programa e intente de nuevo\n");
    return 0;
}
