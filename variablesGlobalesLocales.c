#include <stdio.h>
//alcance de varaibles
/*variable global, dura toto el programa*/

int variableGlobal = 5;
int a = 10;

//definimos metodo cambio

void cambio(int variableLocalFuncion){
	//cambiamos el valor de la variableLocalFuncion
	variableLocalFuncion = 40;
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
}

