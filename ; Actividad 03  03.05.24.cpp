#include <stdio.h>
int main () {
    char name [50];
    int cont;
    int cion =1;
    printf("Escriba su usuario:");
    scanf("%s", &name);
    printf("Escriba su contraseña:");
    scanf("%d", &cont);
    while (cont>1) {
        cion=cion+1;
        if (cont==1234) {
            printf("Bienvenido al sistema %s", name);
            return 0;
        }
        else if (cont!=0000) {
            printf("Parece que hubo un error, ingrese los datos de nuevo");
            scanf("%d", &cont);
        }
        printf("Se ha superado el numero maximo de intentos, inente de nuevo despues");   
    return 0;
    }
}
//Se creo el dia 04/05/24// 
