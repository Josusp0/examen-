/*Escribe unumero)n programa en C que solicite al usuario ingresar un n�mero entero positivo.*/
/*	El programa debe implementar una funci�n llamada esPar que reciba un n�mero*/
/*	entero como argumento y no devuelva ning�n valor. Esta funci�n verificar� si el*/
/*	n�mero dado es par o no.*/
/*	El programa principal debe utilizar un ciclo do-while para solicitar al usuario que*/
/*		ingrese un n�mero hasta que ingrese un n�mero par. Dentro del ciclo, llamar� a la*/
/*		funci�n esPar para determinar si el n�mero ingresado es par o no. Si el n�mero es*/
/*		par, el programa imprimir� "�N�mero par ingresado!" y terminar�; de lo contrario,*/
/*			imprimir� "N�mero impar ingresado. Int�ntalo de nuevo".*/
/*			La funci�n esPar debe verificar si el n�mero recibido como argumento es divisible*/
/*			por 2. Si lo es, el n�mero se considera par; de lo contrario, es impar*/

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

