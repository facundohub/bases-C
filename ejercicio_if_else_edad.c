#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
	printf("ingresa tu edad: \n");
	
	const int EDAD_ADULTO = 18;
	int edadPersona;  
	scanf ("%d", &edadPersona);
		
	if (edadPersona >= EDAD_ADULTO) {
		printf("\nwelcome to adulthood u now have %d", edadPersona);
	}
	else {
		printf("\nu lack of Cindor boy ur age is only %d ", edadPersona);
	}
	return 0;
}


