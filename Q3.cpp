#include <iostream>
using namespace std;

void divide_numero(int num);

int main()
{
/*
Programa DIVISAO POR DOIS
O programa l� um n�mero e divide por dois (sucessivamente) at� que
o resultado seja menor que 1.
Mostra o resultado de cada divis�o e a quantidade de divis�es efetuadas.
Dicas: Voc� precisa enviar alguma informa��o para a fun��o?
Dicas: Quais informa��es precisam ser passadas? (N�o use vari�veis globais!)
*/
int num;
cout << "Digite o numero que deseja dividir:" << endl;
cin >> num;
// ----- DIVIDE UM N�MERO POR DOIS SUCESSIVAS VEZES -----
divide_numero(num);

}
void divide_numero(int num){
	int quantidade = 0;
	while (num > 0)
	{
		num /= 2;
		cout << "Resultado divisao: " << num << endl;
		quantidade++;
	} 
	cout << "Foram feitas um total de "	<< quantidade << "	divisoes" << endl;
		
}
