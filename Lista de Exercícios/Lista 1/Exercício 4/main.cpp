#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>
#include <cstring>

//Lista 1 - Exercício 4

using namespace std;

void retorno(char t){
	
	if(t == 's'){
		cout << "Retorno: 1" << endl;
	}if(t == 'n'){
		cout << "Retorno: 0" << endl;
	}else{
		cout << "Você não digitou uma das opções possíveis" << endl;
	}
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "EXERCICIO 4" << endl;
	
	char t;
	
	cout << "Digite SIM ou NAO para receber um retorno: " << endl;
	cin >> t;
	
	retorno(t);
	
	return 0;
}
