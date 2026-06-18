#include <stdio.h>
#include <stdlib.h>
#include <time.h>//agregamos esta libreria.
//generar numeros aleaorios
int main(int argc, char *argv[]) {
	
	//generamr un valor random entre 0 y 10
	
	int minimo = 100, maximo = 200;
	
	//USAMOS LA FUNCION srand
	
	srand(time(0));
	int valorAleatorio = rand()%100;
		
		printf("valor random entre 0 y 100 = %d\n", valorAleatorio);
	
		//valores aleaorios entre 100 y 200
		valorAleatorio = rand()%(minimo - maximo)+ minimo;
		printf("valor al azar entre 100 y 200 = %d\n", valorAleatorio);
	return 0;
}

