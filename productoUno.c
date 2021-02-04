/* Aqu� comienza comentario que ocupa mas de una 
*	l�nea. Esto es ignorado por el compilador
 */
// Archivo: productoUno.c

#include <stdio.h>

/* Acontinuaci�n se especifica el prototipo de la funcion prod
*	Es buena pr�ctica de programaci�n incluir siempre al principio
*	del c�digo fuente los prototipos de las funciones que luego van
*	a ser usadas. Estos indican el tipo de dato que retorna la funci�n,
*	seguido de el nombre de la funci�n, y entre parentesis, los tipos 
*	de datos que la funci�n toma como par�metros, separados
*	por coma. El prototipo de la funci�n debe terminar con punto y coma.
*/
unsigned int prod( unsigned int , unsigned int );


// Ahora se realiza la implementaci�n del c�digo en C de la funci�n
unsigned int prod( unsigned int m , unsigned int n )
{	
	if( n == 1 )
	{	
		return m;
	}
	else if( (n & 1) == 0 )		// Si n es par
		{
			return prod( m << 1 , n >> 1 );
		}
		else if( (n & 1) == 1 )	// Si n es impar
			{
				//int aux = (n - 1);
				return ( prod( m << 1 , (n - 1) >> 1 ) + m );
			}
}
int main()	// comienza el c�digo ejecutable
{	
	int a = 2;
	int b = 3;
	printf( "a vale: %d \n" , a );
	printf( "b vale: %d \n" , b );
	int producto = prod( a , b );
	printf( "el producto a*b vale: %d \n" , producto );
	int opcion = 0;
	while( opcion == 0 )
	{
		printf( "Introduzca un nuevo valor para a: " );
		scanf("%d" , &a );
		printf( "Introduzca un nuevo valor para b: " );
		scanf( "%d" , &b );
		producto = prod( a , b );
		printf( "el producto a*b vale: %d \n" , producto );
		printf( "Desea ingresar otros valores para a y b ? \n" );
		printf( "	Ingrese 0 para dar nuevos valores! \n" );
		printf( "	Ingrese un valor distinto de cero para finalizar! \n");
		scanf( "%d" , &opcion );
	}
}
// Fin del Archivo: productoUno.c
