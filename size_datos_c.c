#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
	//sizeof 
	//definimos variables
	int entero;
	float flotante;
	double doble;
	char caracter;
	char cadena[] = "Hola Mundo";
	bool booleano = true;
	//imprimir cada variable (size bytes)
	//%lu long unsigned valores positivos
	
	printf("int size bytes: %lu", sizeof(entero));
	printf("\nfloat size bytes: %lu", sizeof(flotante));
	printf("\ndouble size bytes: %lu", sizeof(flotante));
	printf("\nchar size bytes: %lu", sizeof(caracter));
	printf("\ncar chain size bytes: %lu", sizeof(cadena));
	printf("\nbool size byte: %lu", sizeof(booleano));
	return 0;
}

