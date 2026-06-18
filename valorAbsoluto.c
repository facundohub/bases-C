#include <stdio.h>
#include <stdlib.h>

//valor absoluto
int main(int argc, char *argv[]) {
	
	int numero, numeroAbs;
	printf("proporciona un valor numerico: ");
	scanf("%d", &numero);
	
	numeroAbs = abs(numero);
	
	printf("valor absoluto de %d es: %d", numero, numeroAbs);
	
	return 0;
}

