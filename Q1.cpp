#include <iostream>
 #include <math.h>

using namespace std;

double calc_area(float raio);
double calc_perimetro(float raio);

//Colocando o valor de PI como variavel global
#define PI 3.14159265

int main (){
	int opcao;
	float raio;
	double area, perimetro;
	
	cout << "Digite o valor do raio: " << endl;
	cin >> raio;
	
	system ("pause");
	system ("cls");
	
	cout << "Você deseja ver o resultado: " << endl;
	cout << "1. Da area do circulo" << endl;
	cout << "2. Do Perimetro do Circulo" << endl;
	cout << "3. Dos dois: Area e Perimetro do Circulo" << endl;
	cin >> opcao;
	
	
	switch (opcao){
		case 1:
			area = calc_area(raio);
			cout << "A area do Circulo é " << area << endl;
			break;
		case 2:
			perimetro = calc_perimetro(raio);
			cout << "O perimetro do Circulo é " << perimetro << endl;
			break;
		case 3:
			//Nesta Opcao esta aparecendo 'Opção Invalida'
			area = calc_area(raio);
			perimetro = calc_perimetro(raio);
			cout << "A area do Circulo é " << area << endl;
			cout << "O perimetro dp Circulo é " << perimetro << endl;
		default:
			cout << "Opcao Invalida" << endl;	
	}
}
double calc_area(float raio){
	/*
	double area = (paw (raio, 2)) * PI;
	*/
	double area = (raio*raio) * PI;
	
	return area;
}
double calc_perimetro(float raio){
	double perimetro = (2*PI) * raio;
	
	return perimetro;
}
