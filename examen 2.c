#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero, i;
	printf (" ingresa un numero entero positivo");
	scanf("%d", &numero);
	
	for (i=1; i<= numero; i++){
		printf("%d \n", i);
	}
	return 0;
}

