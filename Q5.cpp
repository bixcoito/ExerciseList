#include <iostream>

using namespace std;

void imprime_s_m (int x1, int x2, int x3);

main (){
	int x1, x2, x3;
	
	cout << "Digite o Primeiro Valor: " << endl;
	cin >> x1;
	system("cls");
	
	cout << "Digite o Segundo Valor: " << endl;
	cin >> x2;
	system("cls");
	
	cout << "Digite o Terceiro Valor: " << endl;
	cin >> x3;
	system("cls");
	
	imprime_s_m(x1, x2, x3);
}
//Colocar o Int antes da Função Irá autera-lá
void imprime_s_m (int x1, int x2, int x3){
	
	int soma, media;
	
	soma = x1 + x2 + x3;
	
	media = soma / 3;
	
	cout << "Soma: " << soma << endl;
	cout << "Media: " << media << endl;
	return soma, media;
}
