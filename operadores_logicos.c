#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
	//operadores logicos
	bool a = true; //=1
	bool b = false;//=0
	printf ("valor a = %d", a);
	printf ("\nvalor b = %d",b);
	
	//operador logico && and o en spanish y
	bool c = a && b;
	printf ("\nresultado && entre a y b = %d", c);
	
	//operador logico || or en spanish O de condicion
	c = a || b;
	printf ("\nresultado || entre a y b = %d", c);
	
	//operador ! o not en spanish no
	c = !a;
	printf ("\n aplicar ! a variable a = %d", c);
	
	return 0;
}

