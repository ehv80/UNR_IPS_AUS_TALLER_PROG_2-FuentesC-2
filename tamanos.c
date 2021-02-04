// Archivo: tamaños.c
#include <stdio.h>
int main()
{
	printf("Un char        ocupa %d bytes en memoria.\n" , sizeof(char) );
	printf("Un short       ocupa %d bytes en memoria.\n" , sizeof(short) );
	printf("Un int         ocupa %d bytes en memoria.\n" , sizeof(int) );
	printf("Un float       ocupa %d bytes en memoria.\n" , sizeof(float) );
	printf("Un double      ocupa %d bytes en memoria.\n" , sizeof(double) );
	printf("Un long        ocupa %d bytes en memoria.\n" , sizeof(long) );
	printf("Un long long   ocupa %d bytes en memoria.\n" , sizeof(long long) );
	printf("\n");
	printf("Un puntero a char:	char * ocupa 		%d bytes en memoria.\n" , sizeof(char *) );
	printf("Un puntero a short:	short * ocupa 		%d bytes en memoria.\n" , sizeof(short *) );
	printf("Un puntero a entero:	int *  ocupa 		%d bytes en memoria.\n" , sizeof(int *) );
	printf("Un puntero a float:	float * ocupa 		%d bytes en memoria.\n" , sizeof(float *) );
	printf("Un puntero a double:	double * ocupa 		%d bytes en memoria.\n" , sizeof(double *) );
	printf("Un puntero a long:	long * ocupa 		%d bytes en memoria.\n" , sizeof(long * ) );
//printf("Un puntero a long long:	(long long) * ocupa	%d bytes en memoria.\n" , sizeof( (long long) * ) );
	return 0;	// salida exitosa del programa
}
// Fin del archivo: tamaños.c
