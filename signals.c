// Archivo: signals.c

#include <stdio.h>
#include <signal.h>

/* Función: handler	Una función que es static
 * 			no se puede ver desde 
 * 			fuera de este programa
 */
static void handler( int senial )
{
	printf("Control - C!\n");
}

int main()
{
	signal( SIGINT , handler );
	for(;;);
	return 0;	// salida exitosa del programa
}
// Fin del archivo: signals.c
