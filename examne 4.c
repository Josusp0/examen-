/*Escribe unumero)n programa en C que solicite al usuario ingresar un número entero positivo.*/
/*	El programa debe implementar una función llamada esPar que reciba un número*/
/*	entero como argumento y no devuelva ningún valor. Esta función verificará si el*/
/*	número dado es par o no.*/
/*	El programa principal debe utilizar un ciclo do-while para solicitar al usuario que*/
/*		ingrese un número hasta que ingrese un número par. Dentro del ciclo, llamará a la*/
/*		función esPar para determinar si el número ingresado es par o no. Si el número es*/
/*		par, el programa imprimirá "¡Número par ingresado!" y terminará; de lo contrario,*/
/*			imprimirá "Número impar ingresado. Inténtalo de nuevo".*/
/*			La función esPar debe verificar si el número recibido como argumento es divisible*/
/*			por 2. Si lo es, el número se considera par; de lo contrario, es impar*/

#include <stdio.h>

void esPar(int num){;
if (num %2==0){
	printf ("%d es un numero par \n", num);
	
}
else{
	printf(" no es un numero par, ingrese otro numero\n");
	
}
}

int main(int argc, char *argv[]) {
	int numero;
	do{
		printf (" ingresa un numero entero positivo");
		scanf("%d",&numero);
		esPar(numero);
	}

	
while(numero %2!=0);
	
	return 0;
}

