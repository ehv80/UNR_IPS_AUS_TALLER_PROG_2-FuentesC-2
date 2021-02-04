// Archivo: Q.java

// En java el nombre del archivo que posee el c�digo fuente debe ser el mismo que el que tiene 
// la �nica clase p�blica que se permite definir dentro de su contenido. Notar que se est� 
// haciendo uso de una t�cnica de dise�o denominada: Dise�o Orientado a Objetos y una t�cnica 
// de Programaci�n denominada: Programaci�n Orientada a Objetos
public class Q{
	// Atributos de clase (static): no declarados

	// Atributos de instancias de esta clase: no decalarados
	
	// M�todos de clase(static)
	/**
	 * M�todo est�tico: swap funci�n de intercambio
	 */ 
	static void swap( int i , int j ){
		int tmp = i;
		i = j;
		j = tmp;
	}

	// M�todos de instancias de esta clase: no declarados
	
	// Constructor: no definido
	
	// M�todo Principal de ejecuci�n (main)
	public static void main( String[] args){
		int i = 12, j = 13;
		// muestra en pantalla y hace nueva l�nea y retorno de carro con System.out.println
		System.out.println("i = " + i + " y  j = " + j); 
		swap( i , j );
		System.out.println("Ahora i = " + i + " y  j = " + j); 
	}
}
