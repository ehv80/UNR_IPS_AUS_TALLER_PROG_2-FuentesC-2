// Archivo: signals-3.c

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

static void handler( int sig ){ printf("handler!\n"); }

int main()
{
	signal( SIGALRM , handler );
	alarm( 5 ); // 5 segundos
	for(;;);
	return 0;	// salida exitosa del programa
}
// Fin del archivo: signals-3.c
