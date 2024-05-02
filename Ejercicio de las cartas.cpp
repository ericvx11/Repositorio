#include <stdio.h>
int main() {
	int carta;
	printf("Escribe tu carta de la baraja española:");
	scanf("%d", &carta);
	if (carta==1){
		printf("Su Carta es un as");
	}
	else if(carta==10){
		printf("Su carta es un sota");
	}
	if (carta==11){
		printf("Su carta es un caballo");
	}
	if(carta==12){
		printf("Su carta es un Rey");
	}
	if (carta>=2 && carta<=9){
		printf("Su carta no es una carta de la baraja española");
	}
}
	
