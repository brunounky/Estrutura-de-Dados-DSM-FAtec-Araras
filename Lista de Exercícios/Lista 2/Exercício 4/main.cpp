#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

//Lista 2 - Exerc�cio 4


using namespace std;

struct pontosTriangulo1{

	 double x[3],y[3];

};

struct pontosTriangulo2{

	 double x[3],y[3];

};

void qualTipo(){

	int i, j;
	pontosTriangulo1 PontosTriangulo1;
	pontosTriangulo1 PontosTriangulo2;
	
	cout << "Qual o tipo de tri�ngulo" << endl;
	
	cout << "________________________________________________" << endl;
	
	for(j=1; j<=3; j++){ //contador de pontos para cada triangulo
			
			cout << "Informe o valor de X do ponto " << j << " do trinagulo 1" << endl;
			cin >> PontosTriangulo1.x[j];
			
			cout << "Informe o valor de Y do ponto " << j << " do trinagulo 1" << endl;
			cin >> PontosTriangulo1.y[j];	
	}
	
	cout << "________________________________________________" << endl;
	
	for(i=1; i<=3; i++){ //contador de pontos para cada triangulo
			
			cout << "Informe o valor de X do ponto " << i << " do trinagulo 2" << endl;
			cin >> PontosTriangulo2.x[i];
			
			cout << "Informe o valor de Y do ponto " << i << " do trinagulo 2" << endl;
			cin >> PontosTriangulo2.y[i];	
	}
	
	for(i=1; i<=3; i++){
	cout << PontosTriangulo1.x[i] << endl;
	cout << PontosTriangulo1.y[i] << endl;
	}
	
	for(j=1; j<=3; j++){
	cout << PontosTriangulo2.x[j] << endl;
	cout << PontosTriangulo2.y[j] << endl;
	}
	
	
}


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	qualTipo();

	return 0;
}
