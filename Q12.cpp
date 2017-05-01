#include <iostream>

using namespace std;

void soma(int v1, int v2);
void subtracao(int v1, int v2);
void divisao(int v1, int v2);
void multiplicacao(int v1, int v2);

main (){
	int v1, v2, opcao;
	bool sair = false;
	
	cout << "Digite o Primeiro Valor: " << endl;
	cin >> v1;
	cout << "Digite o Segundo Valor: " << endl;
	cin >> v2;
	
	system ("cls");
	
	cout << "1. Soma			2.Substracao" << endl;
	cout << "3. Divisao		4. Multiplicacao" << endl;
	cout << "0. Sair" << endl;
	
	cout << "Digite o Número Correspondente a Operação que Você deseja Realizar: " << endl;
	cin >> opcao;
	
	system ("cls");
	

		switch (opcao){
			case 1:
				soma(v1, v2);
				break;
			case 2:
				subtracao(v1, v2);
				break;
			case 3:
				divisao(v1, v2);
				break;
			case 4:
				multiplicacao(v1, v2);
				break;		
			default :
				sair = true;
		}

		
}
void soma (int v1, int v2){
	int soma;
		
		soma = v1 + v2;
		cout << "O valor da soma é: " << soma;
}
void subtracao(int v1, int v2){
	int subtracao = v1 - v2;
		
		cout << "O valor da Subtracao é: " << subtracao << endl;
}
void divisao (int v1, int v2){
	float divisao = v1 / v2;
	
	cout << "O valor da divisao é: " << divisao << endl;	
}
void multiplicacao(int v1, int v2){
	float multiplicacao = v1 * v2;

	cout << "O valor da multiplicacao é: " << multiplicacao << endl;
}
