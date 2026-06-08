#include <iostream>
//incluir en la libreria booleanos
#include <stdbool.h>
using namespace std;

int main() {
	/*
	tipo char = formato %c soporta un solo caracter comilla simple para declarar
	
	*/char caracter = 'A';
		printf("caracter: %c", caracter);
		//decimal
		printf("\ncaracter decimal: %d", caracter);
	//boleano = %d	
	bool boleano = true;
	printf("\nipo logico: %d", boleano);
	//cadena strig %s
	char cadena[] = "mi cadena";//\0 --> null
	printf("\nmi cadena: %s", cadena);
	//el arreglo [] debe soportar la cantidad de caracteres en la cadena 
	//si no puede dar error.
	char cadena2[20] = "mi cadena 2";
	printf("\nTipo cadena: %s", cadena2);
	return 0;
}

