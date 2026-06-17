#include <stdio.h>
//alcance de varaibles2
/*variable global, dura toto el programa*/

int variableGlobal = 5;
int a = 10;

//definimos metodo cambio

void cambio(int variableLocalFuncion){
	//cambiamos el valor de la variableLocalFuncion
	variableLocalFuncion = 40;
	//creamos una variable local (oculta la global a)
	int a = 50;
	int b = 60;
	//cambio variableglobal
	variableGlobal = 70;
	printf("variable local dentro de la función: %d\n", variableLocalFuncion);
	printf("variable local a en la funcion: %d\n", a);
	printf("variable local b en la funcion: %d\n", b);
}
	
	
	int main(int argc, char *argv[]) {
		//ejercicio alcance variable
		int variableLocal = 20;
		
		printf("variable a principal: %d\n", a);
		//modificar variable global
		a=30;
		cambio(variableLocal);
		printf("variableLocal %d\n", variableLocal);
		printf("variable global a : %d\n", a);
		printf("variable global: %d", variableGlobal);
		return 0;
		/*no es buena practica usar variables globales debido q que 
		al poder modificarlas se puede perder el acceso de manera facil*/
	}
