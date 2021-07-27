#include "Pilha.hpp"

void Pilha::PilhaVazia(Pilha *P){
	P->topo = -1;
}

void Pilha::Push(Item dado, Pilha *P){
	if(P->topo == MAX){
		cout << "[ERRO]:pilha esta cheia" << endl;
	}else{
		P->stack[P->topo] = dado;
		P->topo++;
	}
}
 
void Pilha::Pop(Pilha *P, Item *dado){
	if(P->topo == -1){
		cout << "[ERRO]:pilha esta vazia" << endl;
	}else{
		*dado = P->stack[P->topo];
		P->topo--;
	}
}
