#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>
#include <cstring>

//Lista 1 - Exerc�cio 3

using namespace std;

void verifica(int conj[], float final){
	
	int i;
	float j=0;
	
	for(i=0; i<10; i++){
		if(final==conj[i]){
			cout << "o valor da posi��o " << i+1 << " � igual a m�dia de todos os conjuntos" << endl;
		}else{
			j=1;
		}
	}
	
	if(j==1){
		cout << endl;
		cout << "Nenhum dos outros valores inseridos � igual ao valor da m�dia" << endl;
	}
	
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float soma, final;
	int i, conj[10];
	
	cout << "EXERC��O 3" << endl;
	
	for(i = 0; i<10; i++){
		cout << "Informe o valor " << i+1 << " : " << endl;
		cin >> conj[i];
		
		soma=soma+conj[i];
	}
	
		final=soma/10;

		cout << endl << "A m�dia dos conjuntos �: " << final << endl;
		
	verifica(conj, final);
			
	
	return 0;
}
