#include <iostream>
#include <string>

using namespace std;

int main(){
	string nome [3];
	string nome_rua [3];
	
	cout << "Digite os 3 Nomes" << endl;
	
	for(int percorre = 0; percorre < 3; percorre++){
		cin >> nome[percorre];
	}
	
	system("cls");
	
	/*
	cout << "Digite o nome 2" << endl;
	cin >> nome[1];
	cout << "Digite o nome 3" << endl;
	cin >> nome[2];
	*/
	for (int percorre = 0; percorre < 3; percorre++){
		cout << "Digite os 3 Endereços Correspondente aos Nomes" << endl;
		cin >> nome_rua[percorre];
	}
	
	/*
	cout << "Digite o endereço 2" << endl;
	cin >> nome[1];
	cout << "Digite o endereço 3" << endl;
	cin >> nome[2];
	*/
	system ("cls");
	
	for(int percorre = 0; percorre < 3; percorre++){
		cout << nome [percorre] << " mora na rua " << nome_rua [percorre] << endl;
	}
	/*	
	cout << nome [1] << " mora na rua " << nome_rua [1] << endl;
	cout << nome [2] << " mora na rua " << nome_rua [2] << endl;
	*/
}
