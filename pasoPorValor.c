#include <iostream>
using namespace std;
void cambiarValor(int parametro){
	parametro = 20;
}
int main(int argc, char *argv[]) {
	
	int argumento = 10;
	printf("antes de llamar a la funcion: %d\n", argumento);
	cambiarValor(argumento);
	printf("despues de llamar a la funcion: %d", argumento);
	
	return 0;
}

