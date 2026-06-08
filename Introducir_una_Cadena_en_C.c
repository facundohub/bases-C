#include <stdio.h>

int main() {
	//declarar variable
	int size_chain = 30;
		char name[size_chain];
		//indicar al usuario que proporcione el valor
		printf("proporciona tu nombre:");
		/*no es neceasrio especificar la posicion de memoria 
		ya que cadena = arreglo en c*/
		/*%[^'\n'] para que no se corte la lectura del string al encontrar 
		un espacio en blanco*/
		scanf("%[^'\n']s", name);
		/* tambien se puede hacer lo siguiente*/
		//----------fgets(name, size_chain, stdin);-----------
		/* o mas simple*/
		//gets(name);
		printf("el nombre es: %s", name);
	return 0;
}

