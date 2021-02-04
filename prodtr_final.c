/******
 * Función "prodtr" mediante un bucle while.
 ****/

#include <stdio.h>

unsigned int prodtr_final( unsigned int m , unsigned int n ){

	unsigned int res = m;

	while( n != 1 ) {

		if( (n & 1) == 1 ) res += m;
		m <<= 1;
		n >>= 1;
	}
	return res;
}

int main(){
	unsigned int m = 1 , n = 1;
	printf(" El producto %4d por %4d da como resultado: %4d \n", m , n , prodtr_final( m , n ) );

	m = 1 , n = 2;
        printf(" El producto %4d por %4d da como resultado: %4d \n", m , n , prodtr_final( m , n ) );

	m = 1 , n = 3;
        printf(" El producto %4d por %4d da como resultado: %4d \n", m , n , prodtr_final( m , n ) );

	m = 2 , n = 1;
        printf(" El producto %4d por %4d da como resultado: %4d \n", m , n , prodtr_final( m , n ) );

	m = 2 , n = 2;
        printf(" El producto %4d por %4d da como resultado: %4d \n", m , n , prodtr_final( m , n ) );

	m = 2 , n = 3;
        printf(" El producto %4d por %4d da como resultado: %4d \n", m , n , prodtr_final( m , n ) );

	m = 2 , n = 4;
        printf(" El producto %4d por %4d da como resultado: %4d \n", m , n , prodtr_final( m , n ) );
}
