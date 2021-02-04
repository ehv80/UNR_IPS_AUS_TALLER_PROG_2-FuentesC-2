// Archivo: qq.c
#include <stdio.h>

#define NULL ( (void *) 0 )

int main()
{
	char * p;
	p = malloc( 10 );
	if(  p == NULL )
		return -1;
	return 0;
}
// Fin del archivo: qq.c

