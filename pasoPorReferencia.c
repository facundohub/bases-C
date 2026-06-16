#include <stdio.h>
//ponemos * para que la referencia de memoria se acrive
void cambiarValor(int *parametro){
	//aca modificamos el valor de la variable con *
	*parametro = 20;
}
	int main(int argc, char *argv[]) {
		
		int argumento = 10;
		printf("antes de llamar a la funcion: %d\n", argumento);
		//con & se pasa la dir de memoria 
		cambiarValor(&argumento);
		printf("despues de llamar a la funcion: %d", argumento);
		
		return 0;
	}
