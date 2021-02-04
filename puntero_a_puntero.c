/********
 * Peor aún C permite hacer lo siguiente.
 * Tener en cuenta que un puntero también
 * tiene drección de memoria, por lo tanto 
 * pueden usarse punteros a punteros a punteros... 
 *******/
#include <stdio.h>
int main(){
	int i, *pi;
	double d, *pd;
	
	int **ppi;
	double **ppd;
	
	i = 13;
	d = 3.14;

	pi = &i;
	pd = &d;

	ppi = & pi;
	ppd = & pd;

	printf("Valores de las variables: %8d %8.8f \n", i , d);
	printf("Direcciones de memoria:\n");
	printf("\t &pi = %p \t &ppi = %p \n", &pi , &ppi );
	printf("\t &pd = %p \t &ppd = %p \n", &pd , &ppd );
	printf("Valores accedidos mediante operador de derreferencia * :\n");
	printf("\t *pi = %8d \t **ppi = %8d \t *ppi = %p \n ", *pi , **ppi, *ppi);
	printf("\t *pd = %8.8f \t **ppd = %8.8f \t *ppd = %p \n" , *pd , **ppd, *ppd);
	return 0;
}
