#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>


using namespace std;

void verificaImparPar(int num){
	
	//Verifica se � �mpar ou se � par
	if(num % 2 == 0){
		cout << endl << num << " � par" << endl;
	}else{
		cout << endl << num << " � �mpar" << endl;
	}
}

void verificaPrimo(int num){
	
	//Verifica se o n�mero � 
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Informe um n�mero inteiro" << endl;
	cin >> num;
	
	verificaImparPar(num);
	
	
	return 0;
}
