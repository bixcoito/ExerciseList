#include <iostream>
using namespace std;

void imprimir_valores();

int main()
{
/*
Programa IMPRIMIR VALORES.
*/
// ----- IMPRIME OS N�MEROS PARES DE 1 AT� 100 -----
 // O
 imprimir_valores();
}
void imprimir_valores(){
	for (int cont = 1; cont <= 100; cont++){
		if (cont % 2 == 0) cout << cont << endl;
	}
	return 
}
