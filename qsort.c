// Archivo: qsort.c
#include <stdio.h>
#include <stdlib.h>

#define TAMANIOdeARREGLO 10
#define TAMANIOdeELEMENTO	sizeof( a[0] )

int a[]={10,1,9,2,8,3,7,4,6,5};

int compara( const void * parametro1 , const void * parametro2 )
{
	return ( *( (int *) parametro1 ) - *( (int *) parametro2 ) );
}

int main()
{
	int indice;
	
	printf("\n");
	for( indice = 0 ; indice < TAMANIOdeARREGLO ; indice++ )
	{
		printf("a[ %d ] = %d en %p \n" , indice , a[indice] , &(a[indice]) );
	}
	qsort( a , TAMANIOdeARREGLO , TAMANIOdeELEMENTO , compara );	// leer: man qsort
	printf("\n");
	for( indice = 0 ; indice < TAMANIOdeARREGLO ; indice++ )
	{
		printf("a[ %d ] = %d en %p \n" , indice , a[indice] , &(a[indice]) );
	}
	printf("\n");
	return 0;	// salida exitosa del programa
}
// Fin del archivo: qsort.c
