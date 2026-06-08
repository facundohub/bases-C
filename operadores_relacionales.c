#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	//operadores relacionales - comparacion
	int a = 5;
	int b = 6;
	printf ("valor de mi numero: %d", a);
	printf ("\nvalor de mi numero: %d", b);
	//operador igualdad
	bool c = a == b;
		printf ("\n a == b? %d", c);
	// operador distinto !=
	c = a != b;
		printf ("\n a != b? %d", c);
	//operador > mayor queue
	c = a > b;
		printf ("\n a > b? %d", c);
	//mayor o igual >=
	c = a >= b;
		printf ("\n a >=b %d", c);
	//menor que <
	c = a < b;
		printf ("\n a <b? %d",c);
	//menor o igual que <=	
	c = a <= b;
		printf ("\n a <=b? %d",c);
	return 0;
}

