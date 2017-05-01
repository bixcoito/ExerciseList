#include <iostream>
#include <string>
using namespace std;

bool triangulo(int a, int b, int c);

string tipo_triangulo (int a, int b, int c);

main (){
	int a, b, c;
	
	cout << "Digite os Três Lados do Triangulo: " << endl;
	cout << "1º Lado: " << endl;
	cin >> a;
	cout << "2º Lado: " << endl;
	cin >> b;
	cout << "3º Lado: " << endl;
	cin >> c;
	
	bool eh_triangulo;
	string tipo;
	
	eh_triangulo = triangulo(a,b,c);
	
	if(eh_triangulo == true)
	{
		cout << "As medidas formam um Triangulo:" << endl;
		
		tipo = tipo_triangulo (a,b,c);
		cout << tipo << endl;
		
	}
	else 
	{
		cout << "Nao formam um Triangulo." << endl;
	}
}

/*
	retornar:
	VERDADEIRO - se for um triangulo
	FALSO - se nao for triangulo
*/
bool triangulo (int a, int b, int c){
	int modulo;
	
	// calcula o modulo
	if (b - c < 0){
		modulo = (b - c) * -1;
		//cout << "O modulo de |-" << modulo << "| (b - c) é: " << modulo << endl;
	}
	else {
		modulo = b - c;
	}
	
	// ve se eh triangulo
	if (modulo < a && a < b + c){
		//cout << "As medidas formam um: " << endl;
		return true;
	}
	else {
		//cout << "Isso não é um Triangulo" << endl;
		return false;
	}
}

string tipo_triangulo (int a, int b, int c){
	if (a == b && a == c && b == a){
		//cout << "Triangulo Equilatero" << endl;
		return "Equilatero";
	}
	else if (a == b || a == c || b == a ){
		//cout << "Triangulo Isosceles" << endl;
		return "Isosceles";
	}
	else {
		//cout << "Triangulo Escaleno" << endl;
		return "Escaleno";
	}
}
