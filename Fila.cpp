#include "Fila.hpp"

void Fila::FilaVazia(Fila *F){
	F->Frente=0;
	F->Fundo=0;
}

void Fila::Enfileirar(Item dado, Fila*F){
	if(F->Fundo%MAX +1 == F->Frente){
		cout << "[ERRO]:fila esta cheia" << endl;
	}else{
		F-> Fila[F->Fundo] = dado;
		F-> Fundo = F->Fundo%MAX+1;
	}
}

void Fila::Desenfileirar(Fila *F, Item *dado){
	if(F->Frente == F->Fundo){
		cout << "[ERRO]:fila esta vazia" << endl;
	}else{
		*dado = F->Fila[F->Frente];
		F->Frente = Q -> Frente%MAX+1;
	}
}
