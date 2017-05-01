#include <iostream>

using namespace std;

void desconto (int venda, int opcao);

int main (){
	int venda;
	int opcao;
	
	
	
	cout << "Digite o Valor da sua compra: " << endl;
	cin >> venda;
	
	cout << "Escolha entre as opções a forma de Pagamento de Acorco com seu Orçamento: " << endl;
	cout << "1. Venda a Vista - desconto de 10% " << endl;
	cout << "2. Venda a Prozo 30 dias - desconto de 5%" << endl;
	cout << "3. Venda a Prazo 60 dias - sem desconto" << endl;	
	cin >> opcao;
	
	
	desconto (venda, opcao);
	
/*	switch (opcao){
		case 1:
			desconto(venda, opcao);
			break;
		case 2:
			desconto(venda);		
	}
*/
}
void desconto (int venda, int opcao){
	float  venda_desconto, venda_final;
	
	
	if (opcao == 1){
		venda_desconto = 0.10 * venda;
		cout << "O desconto nesta opção será de: " << venda_desconto << endl;
	
		venda_final  = venda - (0.10 * venda);
		cout << " O Valor a Vista custara: " << venda_final << endl;
	}
	else if (opcao == 2){
		venda_desconto = 0.05 * venda;
		cout << "O desconto nesta opção será de: " << venda_desconto << endl;

		venda_final = venda - venda_desconto;
		cout << "O valor a Prozo 30 dias: " << venda_final << endl;
	}
	else if (opcao == 3){
		cout << "O valor da compra sera o mesmo, sem descontos: " << venda << endl;
	}
	else{
		cout << "Opção Invalida" << endl;		
	}
}
