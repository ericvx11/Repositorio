#include <stdio.h>
int int main()
{
	int sueldo, horas, extra, extra2;
	printf("Escriba su sueldo adquirido:");
	scanf("%d", &sueldo);
	printf("Escriba sus horas trabajadas:");
	scanf("%d", &horas);
	if (horas<41){
		printf("Su sueldo es de: %d", sueldo);
	}
	else if (horas<50){
		extra=sueldo*1.50;
		printf("Su sueldo es de: %d", extra);
	}
	if(horas>79){
		extra2=sueldo*2;
		printf("Su sueldo es de: %d", extra2);
	}
	return 0;
}
//Esto lo estoy modificando apenas :)//