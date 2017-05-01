#include <iostream>
using namespace std;

float calcular_area(float base, float altura);

int main()
{
/*
Programa AREA DO TRIANGULO
Calcula a área de um Triângulo.
A área do Triângulo é dada por: (base * altura) / 2.
Dicas: Você precisa enviar alguma informação para a função?
Dicas: Quais informações precisam ser passadas? (Não use variáveis globais!)
Dicas: A função retorna alguma informação para você?
Dicas: Se sim, então a função deve ter um tipo de retorno e um 'return' ao final.
*/
float area;
float base = 5, altura = 6;
// ----- CALCULA A AREA DE UM TRIANGULO -----
area = calcular_area(base, altura); 

cout.precision(3);
cout << "Triangulo possui Base " << fixed << base << endl;
cout << "Triangulo possui Altura " << fixed << altura << endl;
cout << "Area do Triangulo: " << fixed << area << endl;
}
float calcular_area(float base, float altura){
	
	return  (base * altura) / 2;
}
