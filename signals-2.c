// Archivo: signals-2.c

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

static void handler( int sig )
{
	printf("handler\n");
}

int main()
{
	alarm( 5 /* segundos */ );
	for( ; ; );
	return 0;	// salida exitosa del programa
}
//Fin del archivo: signals-2.c
