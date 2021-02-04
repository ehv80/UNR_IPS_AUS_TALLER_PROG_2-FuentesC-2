// Archivo: volatile.c
#include <stdio.h>
int main()
{
	char control = 1;
	char * pcontrol = &control;
		
	*pcontrol = 1;	 //indica arranque
			
	// Se supone que el valor apuntado por pcontrol va a cambiar
	// debido a un proceso externo al programa, y propio del 
	// dispositivo

	while( (*pcontrol) != 0 )
	{
		printf("DISPOSITIVO FUNCIONANDO OK!\n");
		printf("PULSE LA TECLA 0 CERO PARA DESACTIVARLO!\n");
		printf("PULSE LA TECLA 1 UNO  PARA QUE CONTINÚE FUNCIONADO!\n");
		scanf( "%d" , pcontrol );
		if( (*pcontrol) == 0 ) break; 
	}
	
	return 0;	// Salida exitosa del programa
}
// Fin del archivo: volatile.c
