#include <stdio.h>
int main() {
	int num, contador, sum;
	printf("Escriba su numero:\n");
	scanf("%d", &num);
	printf("Escribiste este numero: %d\n", num);
	if (num!=0) {
		printf("Escriba su numero:\n");
		scanf("%d", &num);
		printf("As introducido el numero %d", num);
		sum=sum+1;
	}
	while (num==0) {
		contador=contador;
		printf("Flinalizado por que llego a 0\n");
		printf("La suma de los valores anteriormente agregados fue: %d\n" ,contador);
		return 0;
	}
}
