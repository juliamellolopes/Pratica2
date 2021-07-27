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
