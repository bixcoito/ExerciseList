#include <iostream>
#include <stdlib.h>
using namespace std;

float calc_media (float *notas );

#define ATE_NOTA 5

int main(){
	float notas [5];
	
	for(int percorre = 0; percorre < ATE_NOTA; percorre++){
		cout << "Digite a Nota " << percorre << ":" << endl;
		cin >> notas [percorre];
	}
	
	calc_media(float *notas);
	
}
float calc_media (flot *notas){
	
}
