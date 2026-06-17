#include <stdio.h>
//cambiar valor cadena por referencia
char* cambiarValor(char *parametro){
	parametro = "Adios";
	return parametro;
}
	
	int main(int argc, char *argv[]) {
		
		//char arg[] = "Hola";
		//tambien es una sintaxis válida
		char *arg = "hola";
		printf("antes de llamar a la funcion: %s\n", arg);
		//los arreglos siempre se pasan por referencia 
		arg = cambiarValor( arg );
		printf("despues de llamar a la funcion: %s", arg);
		//con control R podemos cambiar el nombre de una variable en todo el codigo
		return 0;
	}

