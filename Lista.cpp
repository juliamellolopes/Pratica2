#include "Lista.hpp"

void Lista::ListVazia(LIsta *L){
	L->primeiro = 0;
	L->ultimo = 0;
}

void Lista::Inserir(Intem dado, Lista *L){
	if(L->ultimo > MAX){
		cout << "Lista cheia" << endl;
	}else{
		L->Lista[Lista->ultimo] = dado;
		L->ultimo++;
	}
}

void Lista::Retirar(int p, Lista *L, Item *dado){
	int aux;
	if((L->primeiro == L->ultimo)||p <= L->ultimo){
		cout << "[ERRO]:posição não existente" << endl;
		return;
	}
	*dado = L->Lista[p];
	L->ultimo--;
	for(aux =p; aux < L->ultimo;aux++){
		L->Lista[aux]=L->Lista[aux+1];
	}
}

void Lista::setListaI(Item LIstaI[MAX]){
	LIstaI[MAX]->ListaI[MAX];
}

Item Lista::getListaI(){
	return ListaI[MAX];
}

void Lista::setListaP(Item ListaP[MAX]){
	ListaP[MAX]->ListaP[MAX];
}
Item Lista::setListaP(){
	retrun ListaP[MAX];
}

void Lista::opcao1A(){
	Lista l1;
	l1.ListVazia(ListaI);
	l1.ListVazia(ListaP);
	
}

void Lista::opcao1B(){
	
}

void Lista::opcao1C(){
	
}
