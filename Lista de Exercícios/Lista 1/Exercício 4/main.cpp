#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>
#include <cstring>

//Lista 1 - Exerc�cio 4

using namespace std;

void verifica(char t[]){
	
	char s[4];
   	char n[4];
	int verif, verif1;
	
	strcpy(s, "SIM");
   	strcpy(n, "NAO");
	
	verif = strcmp(t, s);
	verif1 = strcmp(t, n);
		
	if(verif == 0){
		cout << "Retorno: 1" << endl;
	}else{
		
		if(verif1 == 0){
		cout << "Retorno: 0" << endl;
		}else{
			
			cout << "Voc� n�o digitou uma das op��es poss�veis" << endl;
			
		}
	
	}
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char t[4];
	
	cout << "EXERCICIO 4" << endl;
	
	cout << "Digite SIM ou NAO para receber um retorno(OBS: Mai�sculo): " << endl;
	cin >> t;
	
	verifica(t);
	
	
	return 0;
}
