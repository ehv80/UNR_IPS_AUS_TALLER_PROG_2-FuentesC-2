// Archivo: prototipos-dos.c
#include <stdio.h>

// Prototipo de la función f
//double f( double , char );

double f( double a , char c )
{
	double tmp = a + (double) c;
	return tmp;
}

int main()
{
	double d = f( 3.14 , 'a' );
	printf(" f( 3.14 , 'a' ) = %f \n" , d );
	return 0 ; 	// salida exitosa del programa
}

// Fin del archivo: prototipos-dos.c
