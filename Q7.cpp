#include <iostream>

using namespace std;

void modulo_absoluto(int numero);

main (){
	int numero;
	
	cout << "Digite qualquer numero: " << endl;
	cin >> numero;
	
	system("cls");
	
	modulo_absoluto(numero);
}
void modulo_absoluto (int numero){
	if (numero < 0){
		
		numero = numero * -1;
		
		cout << "O modulo de |-" << numero << "| é: " << numero << endl;
	}
	//if (numero >= 0)
	else {
		
		cout <<"O modulo de |" << numero << "|" << "é: " << numero << endl;	
	}
}
