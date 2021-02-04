// Archivo: productotr.c

// #include <stdio.h>   No es necesario declararlo el "gcc" lo incluye por defecto

// A continuación se especifica el prototipo de la funcion prodtr
unsigned int prodtr( unsigned int , unsigned int , unsigned int );

// Ahora se realiza la implementación del código en C de la función prodtr
unsigned int prodtr( unsigned int m , unsigned int n , unsigned int resultado )
{	
 	if( n == 1 ){
		return (resultado + m); 	// deberá ser resultado = 0 para que sea como el
	}					// producto
	else	if( (n & 1) == 0 ){		// Si n es par
			return prodtr( m << 1 , n >> 1 , resultado );
		}
		else	if( (n & 1) == 1){	// Si n es impar
				return ( prodtr( m << 1 , ( (n - 1) >> 1 ) , resultado + m ) );
			}
}

int main()	// comienza el código ejecutable
{	int a = 2;
	int b = 3;
	int res = 0;	// debe valer cero para que sea el producto lo que se calcula
	printf( "a vale: %d \n", a);
	printf( "b vale: %d \n", b );
	int producto = prodtr( a , b , res );
	printf( "El producto a*b vale: %d \n" , producto );
	int opcion = 0;
	while( opcion == 0 )	// Bucle de repetición: MIENTRAS( opcion es igual a 0 ) 
	{				// hacer
		printf( "Introduzca un nuevo valor para a: " ); // imprime en pantalla el mensaje
		scanf("%d" , &a );// Lee desde teclado un decimal (%d) y lo guarda en la variable a
		printf( "Introduzca un nuevo valor para b: " );
		scanf( "%d" , &b );	// Lee desde teclado un decimal (%d) y lo guarda en la variable b
		int resx = 0;
		int productox = prodtr( a , b , resx );
		printf( "El producto a*b vale: %d \n" , productox );
		printf( "\nDesea ingresar otros valores para a y b ? \n" );
		printf( "       Ingrese 0 (CERO) para dar nuevos valores! \n" );
		printf( "       Ingrese un valor distinto de cero para finalizar! \n");
		scanf( "%d" , &opcion );
	}
	return 0; 		// indica que se ha realizado todo con éxito al ambiente donde se ejecuta
}
// Fin del Archivo: productotr.c
