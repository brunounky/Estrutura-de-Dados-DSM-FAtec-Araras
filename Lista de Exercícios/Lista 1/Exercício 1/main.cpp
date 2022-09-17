#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, resultado, t1, t2;
	
	printf("\t TABUADA DO 1 AO 9 \n");
	
	for(int i=0; i<10; i++){
		
	scanf("%i%i", &t1, &t2);
		
	resultado=t1*t2;
		
	printf( "\n 1*%i=",resultado);
		
	}
	
	return 0;
}
