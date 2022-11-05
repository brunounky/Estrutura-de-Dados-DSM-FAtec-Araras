#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

//Lista 2 - Exercício 1


using namespace std;

struct contaCorrente{
	                      
	char nome[30];
	int cpf;
	float valorConta;
	
};

void cadastrarContas(){
	
	int i;
	contaCorrente Contas[5]; //vetor para cadastrar no novo tipo

for(i=1; i<=5; i++){
		
	cout << "_______________________________________________________________" << endl;
	
	cout << "Informe um nome para a criação de uma nova conta bancária: " << i << endl;
	cin >> Contas[i].nome;
	
	cout << endl;
	
	cout << "Informe o CPF do novo correntista: " << i << endl;
	cin >> Contas[i].cpf;
	
	cout << endl;
	
	cout << "Informe o valor inicial dessa conta: " << i << endl;
	cin >> Contas[i].valorConta;
	
	cout << endl;
	
	}
	
		for(i=1; i <=5; i++){
		
		cout << "______________________________________________" << endl;
		cout << "Nome do correntista " << i << " : " << Contas[i].nome << endl;
		cout << "CPF do correntista " << i << " : " << Contas[i].cpf << endl;
		cout << "Valor na conta do correntista " << i << " : " << "R$" << Contas[i].valorConta << endl; 
		
	}
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Banco Fatec Araras" << endl;
	
	cadastrarContas();
		
	return 0;
}
