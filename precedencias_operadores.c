#include <stdio.h>

int main(int argc, char *argv[]) {
	//precedencia de operadores
	/*
	1 - parentesis y corchetes
	2 - opradores unarios, -, ++, --, !
	3 - aritmeticos *, /, %
	4 - aritmeticos + , -
	5 - relacioalales <, <=, >, >=
	6 - ogiañdad == , !=
	7 - logicos &&, ||
	8 - asignacion =, =+, -=, *=, etc.
	*/
	
	//ejemplo, se revisa todo de izquierda a derecha, como cuando creces jajaja
	int a = 12 / 3 + 2 * 3 - 1;
	//proceso de resolucion con presedencias en C lit matematicas basicas chico
	//paso 1 a = (12 / 3) + (2 * 3) - 1
	//paso 2 a = 4 + 6 - 1
	//paso 3 a = 10 - 1
	//paso 4 a = 9
	printf ("\nresultado de a = %d", a);
	
	return 0;
}

