#include <iostream>

using namespace std;



void multiplos_4(int numero);

void multiplos_7(int numero);                         


main () {
	int numero;
	
	//2º Passo Lendo variavel n
	cout << "Digite um Valor" << endl;
	cin >> numero;

	system("cls");

	
	if (numero < 0 ){
		cout << "NEGATIVO" << endl;
	}
	else {
		//Funções com o calculando e verificando se é multiplos de 4 e de 7
		multiplos_4 (numero);
	
		multiplos_7(numero);
	}
	
	
}
void multiplos_4(int numero){
	//Como calcular multiplosa % 2 == 0 || a %3 == 0
	for (int resto = 0; resto <= numero; resto ++){
		if (resto % 4 == 0){ 
			cout << resto << endl;
		}
	}
}

void multiplos_7 (int numero){
	for (int mostrar = 0; mostrar <= numero; mostrar++){
		if (mostrar % 7 == 0){
			cout << mostrar << endl;
		}
	}
	
}''
