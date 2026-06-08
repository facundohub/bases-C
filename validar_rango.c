#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
	//validar dato dentro de rango
	int minimo = 0, maximo = 10;
	//solicitamos valor 
	int dato;
	printf ("proporciona un dato entre 0 y 10: \n");
	scanf ("%d", &dato);
	//vericamos si esta dentro de rango
	bool dentroRango = dato >= minimo && dato <= maximo;
		printf("\n valor dentro de rango? %d", dentroRango);
	
	return 0;
}

