/***********
 * Vemos ejemplos de uso de punteros en C.
 *
 *
 **********/
#include <stdio.h>
int main(){
	int i, j, k;
	i = j = k = 13;
	printf("Valor de las variables: 	 i = %d 	 j = %d 		 K = %d \n",  i , j , k);
	printf("Direcciones de memoria:		&i = %p		&j = %p			&k = %p \n", &i, &j, &k);
	return 0;
}
