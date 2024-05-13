#include <stdio.h>
#include <string.h>

int main() {
	int pro, suma, x;
    char us [40];
    char contra [20];
    char intentos=3;
    char conf [20];
    while (intentos>=0)
    {
   	    printf("Escriba su usuario:\n");
  		scanf("%s", &us);
   		printf("Ahora escriba su contraseña:\n");
   		scanf("%s", &contra);
   		if (strcmp(us, "Eric") ==0 && strcmp (contra, "2B47") == 0)
		    {
   			printf("Bienvenido al sistema papu\n");
   			printf("Que precio tiene el producto?:\n");
   			scanf("%d", &pro);
   			while(strcmp(conf, "si")){
				printf("Que precio tiene el producto?:\n");
				scanf("%d", &pro);
				pro++;
			   }
			while(strcmp(conf, "no")) {
				suma=x;
				printf("La suma de todos los productos es: %d", x);
			}
   			return 0;
		   }
			else if (strcmp(us, "Eric") ==0 && strcmp (contra, "2B47") == 0) {
				int-;
				printf("Intente de nuevo, alo anda mal");
		}
    }
    return 0;
}