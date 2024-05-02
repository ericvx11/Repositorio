#include <stdio.h>
int main() {
	int opc, area, area2, base, base2, alt, triangulo, trapecio, rectangulo;
	printf("-------------------------------\n");
	printf("1.- Calcule el area de un triangulo\n");
	printf("2.- Calcule el area de un trapecio\n");
	printf("3.- Calcule el area de un rectangulo\n");
	scanf("%d", &opc);
	if (opc==1) {
		printf("Escriba su base:"),
		scanf("%d", &base);
		printf("Escriba su altura:");
		scanf("%d", &alt);
		triangulo=base*alt;
		area=triangulo/2;
		printf("Su area es: %d", area);
	}
	else if (opc==2) {
		printf("Escriba su Base 1:");
		scanf("%d", &base);
		printf("Escriba su Base 2:");
		scanf("%d", &base2);
		printf("Escriba su altura");
		scanf("%d", &alt);
		trapecio=base+base2;
		area=trapecio*alt;
		area2=area/2;
		printf("Su area es: %d", area2);
	}
	if (opc==3) {
		printf("Escriba su base: ");
		scanf("%d", &base);
		printf("Escriba su altura: ");
		scanf("%d", &alt);
		area=base*alt;
		printf("Su area es: %d", area);
	}
}
