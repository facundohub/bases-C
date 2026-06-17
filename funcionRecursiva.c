#include <stdio.h>
//funciones recursivas
/*deckaramos la funcion (firma del metodo)*/
void funcionRecursiva(int numero);

int main(int argc, char *argv[]) {
	//imprimir del 1 al 5 de manera recursiva
	int valor = 5;
	funcionRecursiva(valor);
	
	return 0;
}
//agregamos la implemenación (cuerpo) de la función//

void funcionRecursiva(int numero){
	if(numero == 1){
		printf("%d\n", numero);
	}
	else{//caso recursiva//
			funcionRecursiva(numero - 1);
			printf("%d\n", numero);
		}	
}
