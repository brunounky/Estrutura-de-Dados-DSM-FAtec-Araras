#include <iostream>
#include <cstdlib>
using namespace std;

typedef int elem;

typedef struct bloco{
        elem info;
        struct bloco *prox = NULL;
}no;

typedef struct {
        no *topo = NULL;
        int total;
} Pilha;

void Create_Stack(Pilha *P);
void Push(Pilha *P, elem *X, bool *erro);
void Pop(Pilha*, elem* X, bool *erro);
bool IsEmpty_Stack(Pilha *P);
void Print_Stack(Pilha *P);


void Create_Stack(Pilha *P) 
{
    P->topo=NULL;
    P->total=0;
}

void Push(Pilha *P, elem *X, bool *erro) 
{
    no *novo_no=NULL;
    novo_no = (no*)malloc(sizeof(no));
    /* se eu n�o conseguir criar o aux � porque a mem�ria est� com espa�o cheio, 
	por isso n�o precisa da fun��o IsFull
	*/
	if (novo_no==NULL) 
    	*erro=true;
    else{
        *erro=false;
        novo_no->info = *X;

        // se for o primeiro bloco, ent�o o prox do 1� bloco acaba apontando para NULL
        // se n�o for o primeiro, ent�o o prox do 1� bloco acaba apontando para o topo da pilha
        novo_no->prox = P->topo; 

        P->topo = novo_no;
        P->total++;
    }
}


elem X;
void Pop(Pilha *P, bool *erro) {
    if(!IsEmpty_Stack(P)){
        X = P->topo->info;
        P->topo = P->topo->prox;
        P->total--;
        *erro = false;
    }
    *erro=true;
}     

bool IsEmpty_Stack(Pilha *P) {
    if(P->total==0)
       return true;
	return false;
}


void Print_Stack(Pilha *P){
	no *aux;
	aux = P->topo;
	int total = P->total;
	cout << endl<< "Elementos da Pilha (do topo at� a base): " << endl;
	while(total>0)
	{
		cout << aux->info << endl;
		aux = aux->prox;
		total--;
	}
}
