#include <iostream>
#include <stdbool.h>
using namespace std;

int main(int argc, char *argv[]) {
	//operador ternario
	//simplifica el codigo if else. 
	
	printf("Ingresa un numero: \n");
	int miNumero;
	
	scanf("%d", &miNumero);
	
	//operador ternario. reduce el if else como en el ejercicio anterior
	//limpia un poco el código,
	//(expresion) ? "verdadero" : "falso";
	(miNumero > 0) ? printf("positivo") : printf("cero o negativo");
	
	return 0;
}

