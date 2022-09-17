#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int soma, i, conj[10];
	float final;
	
	cout << "EXERCÍÍO 3" << endl;
	
	for(i = 0; i<10; i++){
		cout << "Informe o valor " << i+1 << " : " << endl;
		cin >> conj[i];
		
		soma=soma+conj[i];
	}
	
		final=soma/10;

		cout << endl << "A média dos conjuntos é: " << final << endl;
		
		for(i=0; i<10; i++){
			if(final==conj[i]){
				cout << "o valor da posição: " << i+1 << " é igual a média de todos os conjuntos" << endl;
			}
		}
	
	return 0;
}
