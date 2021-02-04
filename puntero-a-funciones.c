// Archivo: puntero-a-funciones.c
#include <stdio.h>
#include <math.h>	// Para poder usar funciones matemáticas, trigonométricas
#include <stdlib.h>
int main()
{
	double valor = 0.0 , valor2 = 3.1416  , valor3 = valor2/2 , valor4 = valor2/4;
	double (* punteroAfuncion ) ( double );
	// Se declara un puntero a una función que toma un double como argumento
	// y retorna un double
	
	printf("\n");
	punteroAfuncion = sin;	// Ahora apunta a la función sin
	printf(" sen( %f ) = %f \n" , valor , punteroAfuncion( valor ));
	printf(" sen( %f ) = %f \n" , valor2 , punteroAfuncion( valor2 ));
	printf(" sen( %f ) = %f \n" , valor3 , punteroAfuncion( valor3 ));
	printf(" sen( %f ) = %f \n" , valor4 , punteroAfuncion( valor4 ));
	printf("\n");
	punteroAfuncion = exp;	// Ahora apunta a la función exp 
	printf(" exp( %f ) = %f \n" , valor , punteroAfuncion( valor ));
	printf(" exp( %f ) = %f \n" , valor2 , punteroAfuncion( valor2 ));
	printf(" exp( %f ) = %f \n" , valor3 , punteroAfuncion( valor3 ));
	printf(" exp( %f ) = %f \n" , valor4 , punteroAfuncion( valor4 ));
	printf("\n");
	punteroAfuncion = cos;	// Ahora apunta a la función cos
	printf(" cos( %f ) = %f \n" , valor , punteroAfuncion( valor ));
	printf(" cos( %f ) = %f \n" , valor2 , punteroAfuncion( valor2 ));
	printf(" cos( %f ) = %f \n" , valor3 , punteroAfuncion( valor3 ));
	printf(" cos( %f ) = %f \n" , valor4 , punteroAfuncion( valor4 ));
	printf("\n");

	return 0; // salida exitosa del programa
}
//Fin del Archivo: puntero-a-funciones.c
