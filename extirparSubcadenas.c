#include <stdio.h>
#include <string.h>
//subcadena
int main(int argc, char *argv[]) {
	
	char cadena[] = "Hola Mundo";
	char subcadena[10]; 
	
	
	/*strncpy string copy copiamos a partir del char de inicio
	e indicamos cuanos caracteres se copian*/
	
	int inicio =0, nCaracteres = 4; //obtenemos la subcadena de Hola
	//void *strncpy(void *destino, const void * origen, tamanio number);
	strncpy(subcadena, &cadena[inicio], nCaracteres);
	subcadena[nCaracteres] = '\0';//caracter de fin de cadena importante.
	
	printf("cadena %s\n", cadena);	
	printf("subcadena %s\n", subcadena);
	
	
	//sacar la segunda parte de la cadena como sub cadena.
	char chain[] = "Hello Friend";
	char subchain[11];
	
	int in  = 6, nChar = 6;
	strncpy(subchain, &chain[in], nChar);
	subchain[nChar] = '\0';
	printf("subcadena2 %s\n", subchain);
	
	return 0;
}

