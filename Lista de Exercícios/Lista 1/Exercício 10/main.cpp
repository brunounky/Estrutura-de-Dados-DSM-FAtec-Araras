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
	
	int i;
	int qtdDivisao=0;
	
	for(i=1; i <= num; i++){
		if(num % i == 0){
			qtdDivisao++;	
		}
	}
	
	if(qtdDivisao==2){
		cout << endl << num << " � primo" << endl;
	}else{
		cout << endl << num << " n�o � primo" << endl;
	}
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Informe um n�mero inteiro" << endl;
	cin >> num;
	
	verificaImparPar(num);
	verificaPrimo(num);
	
	
	return 0;
}
