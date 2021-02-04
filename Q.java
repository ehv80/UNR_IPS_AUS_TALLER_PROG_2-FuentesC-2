// Archivo: Q.java

// En java el nombre del archivo que posee el código fuente debe ser el mismo que el que tiene 
// la única clase pública que se permite definir dentro de su contenido. Notar que se está 
// haciendo uso de una técnica de diseño denominada: Diseño Orientado a Objetos y una técnica 
// de Programación denominada: Programación Orientada a Objetos
public class Q{
	// Atributos de clase (static): no declarados

	// Atributos de instancias de esta clase: no decalarados
	
	// Métodos de clase(static)
	/**
	 * Método estático: swap función de intercambio
	 */ 
	static void swap( int i , int j ){
		int tmp = i;
		i = j;
		j = tmp;
	}

	// Métodos de instancias de esta clase: no declarados
	
	// Constructor: no definido
	
	// Método Principal de ejecución (main)
	public static void main( String[] args){
		int i = 12, j = 13;
		// muestra en pantalla y hace nueva línea y retorno de carro con System.out.println
		System.out.println("i = " + i + " y  j = " + j); 
		swap( i , j );
		System.out.println("Ahora i = " + i + " y  j = " + j); 
	}
}
