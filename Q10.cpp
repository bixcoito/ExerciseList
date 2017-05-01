#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

char cod;

void imprime_categoria(char cod);

main () {

	string nome;
	char cod;
	
	
	cout << "Digite o seu Nome: " << endl;
	cin >> nome;
	
	cout << "Digite o código: " << endl;
	cin >> cod;
	
	imprime_categoria(cod);		
}
void imprime_categoria(char cod){
	bool sair = false;
	
	while (sair == false){
		switch (cod){
			case 'P':
			case 'p':
				cout << "CATEGORIA: Programador de Jogos" << endl;
				break;
			case 'D':
			case 'd':
				cout << "CATEGORIA: Design Gráfico" << endl;
				break;
			case 'S':
			case 's':
				cout << "CATEGORIA: Engenheiro de Som" << endl;
				break;
			case 'M':
			case 'm':
				cout << "CATEGORIA: Marketing e Produção" << endl;
				break;
			default:
				sair = true;		
		}	
	}
}

