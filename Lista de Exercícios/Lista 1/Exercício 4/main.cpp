#include <iostream>
#include <locale>
#include <stdio.h>

using namespace std;

//nao esta funcionando

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "EXERCICIO 4" << endl;
	
	char t[3], sim, nao;
	
	cout << "Digite SIM ou NAO para receber um retorno: " << endl;
	cin >> t;
	
	if(t=="sim"){
		cout << "Retorno: 1" << endl;
	}if(t=="nao"){
		cout << "Retorno: 0" << endl;
	}else{
		cout << "Você não digitou uma das opções possíveis" << endl;
		cout << t << endl;
	}
	
	
	return 0;
}
