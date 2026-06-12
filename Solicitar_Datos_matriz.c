#include <stdio.h>

int main(int argc, char *argv[]) {
	int renglones, columnas;
	//pedimos valores DE LA MATRIZ al usuario
	printf("proporciona el numero de renglones: ");
	scanf("%d", &renglones);
	printf("proporciona el numero de columnas: ");
	scanf("%d", &columnas);
	
	int matriz[renglones][columnas];
	//DATOS DE LA MATRIZ
	for(int ren = 0; ren < renglones; ren++){
		for(int col = 0; col < columnas; col++){
			printf("proporciona el VALOR de esta DATO[%d][%d]: \n", ren, col);
			scanf("%d", &matriz[ren][col]);
		}
		printf("\n") ;
	}
	
	//RECORRER matriz
	for(int ren = 0; ren < renglones; ren++){
		for(int col = 0; col < columnas; col++){
			printf("DATA[%d][%d]: %d \n", ren, col, matriz[ren][col]);
			
		}
		printf("\n") ;
	}
	
	return 0;
}

