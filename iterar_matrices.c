#include <stdio.h>
#define REN 2
#define COL 3
int main(int argc, char *argv[]) {
	int matriz[REN][COL] = 
		
	{
		{100, 200, 300},
		{400, 500, 600},
	};
	//ITERAR MATRIZ
	for(int r = 0; r < REN; r++){
		printf("\nrenglon (pivote) = %d", r);
		for(int co = 0; co < COL; co++){
			printf("\nMatriz[%d][%d] = %d", r, co, matriz[r][co]);
		}
		printf("\n");
	}
	return 0;
}

