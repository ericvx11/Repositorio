#include <stdio.h>
int main() {
	int cout, tot, x, n;
	printf("Escriba su limite:\n");
	scanf("%d",&n);
	x=n*5;
	for(int i=5; i <=x; i++){
		i=i+4;
		tot=i+1-5;
		printf("%d\n", tot);
	}
}