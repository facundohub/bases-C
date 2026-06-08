#include <stdio.h> 
#include <stdbool.h>
int main() {
	int edad;
	bool empleadoConfrianza;
	int empleadoConfrianzaTemp;
	int largoCadena = 50; 
	char nombreCompleto[largoCadena];
	float sueldo;
	
	// solicitar valores al usuario
	printf("whats your name: \n");
		scanf("%[^'\n']s", nombreCompleto);
	printf("how old are you: \n");
		scanf("%d", &edad);
	printf("whats ur dream salary (USD): \n");
		scanf("%f", &sueldo);
	printf("are u a trusted employee(1/0): \n");
		scanf("%d", &empleadoConfrianzaTemp);
		empleadoConfrianza = empleadoConfrianzaTemp;
		
		//imprimimos 
	printf("\nthe information given is:");
		printf("\nname: %s", nombreCompleto);
		printf("\nage: %d", edad);
		printf("\nsalary: $%.1f", sueldo);
		printf("\ntrusted: %d", empleadoConfrianzaTemp);
		
	
	return 0;
}

