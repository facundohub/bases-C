#include <stdio.h>
#include <string.h>
//concatenar cadenas valga la redundancia xd

int main(int argc, char *argv[]) {
/*definimos las cadenas la cadena destino debe ser suficientemente
	grande para soportar el resultado*/
	
	char destino[11] = "Hola ";//11 porque debe soportar \0 el fin de cadena
	char origen[] = "Mundo";
	
	//concatenamos las chains
	//char *strcat(char *destino, const char *origen);
	/*
	1. toma la cadena destino 
	2. encuentra el caracer nulo en la cadena destino
	3, copia la cadena origen comenzando en el caracter nulo de 
	la cadena destino.
	4. agrega el caracter nulo a la cadena destino. 
	*/
	
	//no proporcionamos & ya que su paso es por referencia
	strcat(destino, origen);
	printf("%s", destino);
	
	return 0;
}

