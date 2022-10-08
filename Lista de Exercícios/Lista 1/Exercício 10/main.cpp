#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>


using namespace std;

void verificaImparPar(int num){
	
	//Verifica se é ímpar ou se é par
	if(num % 2 == 0){
		cout << endl << num << " é par" << endl;
	}else{
		cout << endl << num << " é ímpar" << endl;
	}
}

void verificaPrimo(int num){
	
	//Verifica se o número é 
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Informe um número inteiro" << endl;
	cin >> num;
	
	verificaImparPar(num);
	
	
	return 0;
}
