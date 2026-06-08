#include <stdio.h>
/*
tipos de datos basicos en C
*/
int main() {
	//tipo entero (formato %d, %i) 
	int entero = 10;
		printf ("tipo entero: %i",  entero );
	//flotante (formato %f)	
	float flotante = 3.5;
	printf("\ntipo flotante: %.1f", flotante);
	//tipo double(formato %f, lf% -> long float)
	double dob = 13.4;
	printf("\ntipo double: %.2lf", dob);
}

