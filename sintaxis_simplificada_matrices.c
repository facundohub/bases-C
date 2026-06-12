#include <iostream>
//se definen de esta manera

#define REN 2
#define COL 3
using namespace std;

int main(int argc, char *argv[]) {
	 /*sintaxis simplificada para matrices*/
	
	// con esta constante el compilador da error
	//const int REN = 2;
	//const int COL = 2;
	
	int matriz[REN][COL] = 
		/*esta es una forma simplificada de darle valores a la matriz*/
	//{100, 200, 300, 400, 500, 600};
		
		/*otra forma de generar la sintaxis y la mas comun puede ser*/
	{
		{100, 200, 300},
		{400, 500, 600},
	};
	
	printf("valor 1 [0][0] = %d\n", matriz[0][0]);
	printf("valor 6 [1][2] = %d\n", matriz[1][2]);
	
	return 0;
}

