/*Escribe un programa en C que solicite al usuario que ingrese un n�mero del 1 al 7,*/
/*	representando los d�as de la semana (por ejemplo, 1 para Lunes, 2 para Martes,*/
/*										 etc.). El programa debe utilizar un switch para imprimir el nombre del d�a*/
/*	correspondiente al n�mero ingresado por el usuario.*/
/*	Por ejemplo, si el usuario ingresa el n�mero 3, el programa deber�a imprimir*/
/*	"Mi�rcoles".*/
/*	Si el usuario ingresa un n�mero fuera del rango del 1 al 7, el programa debe imprimir*/
/*	"N�mero de d�a inv�lido".*/

	#include <stdio.h>

int main(int argc, char *argv[]) {
	int numerodia;
	printf ("Ingresar un numero del 1 al 7");
	scanf ("%d",&numerodia);
	switch(numerodia){
	case 1:
		printf("lunes\n");
		break;
	

case 2:
	printf("martes\n");
	break;

case 3:
	printf("miercoles\n");
	break;
case 4:
	printf("jueves\n");
	break;

case 5:
	printf("viernes\n");
	break;

case 6:
	printf("sabado\n");
	break;

case 7:
	printf("domingo\n");
	break;
default: 
	printf("numero invalido ");
	break;
}
	return 0;
}

