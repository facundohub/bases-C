#include <stdio.h>

int main() {
	
	//IF / ELSE // elif
	//solicitamos datos
	int miNumero;
	printf ("proporciona un numero: \n");
		scanf("%d", &miNumero);
	//VERIFICAMOS 
	if (miNumero > 0) {
		printf("valor positivo: %d", miNumero);
	}
	else if (miNumero <0) {
		printf("valor negativo: %d", miNumero);
	}
	else{
		printf("valor 0: %d", miNumero);
	}
	return 0;
}

