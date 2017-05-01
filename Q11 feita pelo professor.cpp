#include <iostream>
#include <string>
using namespace std;
//1º Passo Criar Função Principal (main)
int main (){
	//Lembrar de Incluir a Biblioteca da String
	
	//2º Passo - Declarando as Varáveis
	string nome_operacao;
	string nome_ag1, nome_ag2;
	int cod_ag1, cod_ag2;
	
	//3º Passo
	cout << "Qual o Nome do Projeto?" << endl;
	cin >> nome_operacao;
	
	cout << "Digite o Nome e Codigo do Agente 1: " << endl;
	cin >> nome_ag1;
	cin >> cod_ag1;
	
	cout << "Digite o Nome e Codigo do Agente 2: " << endl;
	cin >> nome_ag2;
	cin >> cod_ag2;
	
	system ("cls");
	
	// Verificar se os codigos são iguais
	if (cod_ag1 == cod_ag2){
		cout << "Projeto " << nome_operacao << " foi Atorizada!" << endl;
	}
	else {
		cout << "Codigos Invalidos!" << endl;
	}
	
}
