#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>


using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float vetor[10];
	int i, resp;
	
	cout << "Informe os valores desejados: " << endl;
	
	for(i=0; i<=10; i++){
		cin >> vetor[i];
	}	
	
	cout << endl << "Você deseja ordenar de forma crescente ou decrescente? " << endl;
	cout << "1 - Crescente" << endl;
	cout << "2 - Decrescente" << endl;
	cin >> resp;
	
	if(resp==1){
		//funcao de crescente
	}else{
		if(resp==2){
		//FUUNCAO DE DECRESCENTE
		}else{
		cout << "Resposta fora do esperado" << endl;
		}
	}
	
	return 0;
}
