/*Imagina que estás desarrollando un sistema de calificaciones para una escuela. Se*/
/*	te pide que escribas un programa en C que tome como entrada la calificación*/
/*	numérica de un estudiante en un examen y determine su calificación equivalente en*/
/*	letra, según la siguiente escala:*/
/*	• 90 o más: A*/
/*	• 80 - 89: B*/
/*	• 70 - 79: C*/
/*	• 60 - 69: D*/
/*	• Menos de 60: F*/
/*El programa debe solicitar al usuario que ingrese la calificación numérica del*/
/*	estudiante. Luego, debe determinar la calificación equivalente en letra utilizando*/
/*	estructuras condicionales (if-else) y mostrarla al usuario.*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	int calificacion;
	printf("Ingresa la calificacion del estuduiante");
	scanf("%d",&calificacion );
	
	char letra;
	if (calificacion >=90){
		letra = 'A';
	
	}
	else if (calificacion >=80){
		letra = 'B';
	}
	else if (calificacion >= 70){
		letra = 'c';
	}
	else if (calificacion >=60 ){
		letra = 'D';
		
	}
	else {
		letra='F';
			
	}
	printf ("La calificacion equivalente en letra es %c \n", letra);
	return 0;
}

