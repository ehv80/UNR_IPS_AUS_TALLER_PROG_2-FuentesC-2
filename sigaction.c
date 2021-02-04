// Archivo: sigaction.c

#include <stdio.h>
#include <signal.h>

static void handler( int sig ){ printf("Llega %d - Ja! Te agarré!\n", sig ); }

int main()
{
	struct sigaction sa;
	sa.sa_handler = handler;
	sigfillset( &sa.sa_mask );
	sa.sa_flags = SA_ONESHOT;
	sigaction( SIGINT , &sa , NULL );
	for(;;);
	return 0;	// salida exitosa del programa
}
// Fin del archivo: sigaction.c
