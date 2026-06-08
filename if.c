#include <stdio.h>

int main() {
	
	//IF / ELSE
	//solicitamos datos
	int miNumero;
	printf ("proporciona un numero: \n");
		scanf("%d", &miNumero);
	//VERIFICAMOS 
	if (miNumero > 0) {
		printf("valor positivo: %d", miNumero);
	}
	else{
		printf("valor 0 o negativo %d", miNumero);
	}
	return 0;
}

