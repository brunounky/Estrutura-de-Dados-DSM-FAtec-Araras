#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int soma, i, conj[10];
	float final;
	
	cout << "EXERC��O 3" << endl;
	
	for(i = 0; i<10; i++){
		cout << "Informe o valor " << i+1 << " : " << endl;
		cin >> conj[i];
		
		soma=soma+conj[i];
	}
	
		final=soma/10;

		cout << endl << "A m�dia dos conjuntos �: " << final << endl;
		
		for(i=0; i<10; i++){
			if(final==conj[i]){
				cout << "o valor da posi��o: " << i+1 << " � igual a m�dia de todos os conjuntos" << endl;
			}
		}
	
	return 0;
}
