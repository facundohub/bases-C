#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c;
	//operadores de incremento y decremento: pre-incremento y post-incremento
	a = 0;
	//post-incremewnto 
	a++; //se incrementa la proxima vez que utilicemos esta variable
		printf ("valor de a : %d", a);
	//pre-incremento
	++a; //se incemena ya mismo, no la proxima vez que se utilice 
		printf ("\nnuevo valor de a : %d", a);
		
	a = 5;
	b = 2;
	c = ++a * b++;
		printf ("\nvalor de a: %d", a); //no tiene ningun incremeno pendiene = 6
		printf ("\nvalor de b: %d", b); //tiene 1 incremento pendiente = 3
		printf ("\nresultado entre pre incremeno y post: %d", c); //= 12
		
		//decrenento = pre y post
	a = 5;
	b = 2;
	c = --a */*--*/b--;
		printf ("\nvalor de a: %d", a);0
		printf ("\nvalor de b: %d", b);
		printf ("\nresultado entre pre decremento y post: %d", c);
		
	return 0;
}

