#include <stdio.h>
#include <stdlib.h> //incluimos esta librería
int main(int argc, char *argv[]) {
	//convertir string a numero
	char cadena1[] = "10"; //%s
	char cadena2[] = "20"; //%s
	
	//funcion atoi int atoi(const char *cadena);
	//atoi -> ascii to int
	//atof -> ascii to float
	//si no es numero, regresa 0
	
	//int resultado = atoi(cadena1) + atoi(cadena2); -> 30
	
	int resultado = atoi(cadena1) + atoi(cadena2);
	//aca se convierte de %s a %d
	printf("resultado de cadena 1 + cadena 2 = %d", resultado);
	
	return 0;
}

