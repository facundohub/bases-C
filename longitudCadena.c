#include <stdio.h>
#include <string.h> //<--- incluimos esta librería. 
//longitud de cadena
int main(int argc, char *argv[]) {
	
	char cadena[] = "Hola";
	printf("%s\n", cadena);
	//obtenemos la longitud de la cadena
	printf("largo cadena %d caracteres \n", strlen(cadena));
	
	//recorremos cada caracter
	
	for (int i = 0; i < strlen(cadena); i++){
		printf("%c\n", cadena[i]);
	}
	
	return 0;
}

