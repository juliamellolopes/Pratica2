#include "Funcoes.hpp"
#include "Lista.hpp"
#include "Fila.hpp"
#include "Pilha.hpp"
#include <cstdio>

struct tuple{
  int n1;
  int n2;
  tuple() = default;
  tuple(int n1, int n2) : n1(n1), n2(n2) {}
};

void Funcoes::opcao1a(){
	List<int> par;
  	List<int> impar;
	List<tuple> tuplas;
	for (int i = 0; i < 200; i++) {
		if (i % 2 == 0)
		 	par.push(i);
	   	else
	      	impar.push(i);
	}
	node<int> *pIm = impar.HEAD;
 	node<int> *pPar = par.HEAD;
	for (int i = 0; i < 100; i++) {
	    tuplas.push({pPar->dado, pIm->dado});
	    pIm = pIm->prox;
	    pPar = pPar->prox;
	}
	node<tuple> *ptuple = tuplas.HEAD;
	for (int i = 0; i < 100; i++) {
	    cout << "{ " ptuple->dado.n1 << ", " << ptuple->dado.n2 << "}";
	    ptuple = ptuple->prox;
	}
}

void Funcoes::opcao1b(){
	List<int>L1;
	List<int>L2;
	int somaL1 = 0;
	int somaL2 = 0;
	node<int> *pL1 = L1.HEAD;
	node<int> *pL2 = L2.HEAD
	for(int i = 0; i < 3; i++){
		L1.push(rand%13);
		L2.push(rand%13);
		pL1 = pL1->prox;
		pl2 = pL2->prox;
	}
	int num = rand%12+1;
	for(int i = 0; i < 3; i++){
		cout << "\n{ " << L1->HEAD.dado << ", " << L2->HEAD.dado << "}";
	}
	for(int i = 0; i < 3; i++){
		L1->HEAD.dado - num;
		L2->HEAD.dado - num;
	}
	for(int i = 0; i < 3; i++){
		somaL1 += L1->HEAD.dado;
		somaL2 += L2->HEAD.dado;
	}
	if(somaL1 > somaL2){
		cout << "\nO vencedor � L1" << endl;
	}else{
		cou << "\nO vencedor � L2" << endl;
	}
}

void Funcoes::opcao1c(){
	//n�o entendi
}

void Funcoes::opcao2a(){
	//n�o sei como
}

void Funcoes::opcao2b(){
	Pilha<int>P1;
	Pilha<int>P2;
	nope<int> *pP1 = P1.HEAD;
	for(int i = 0; i < 10; i++){
		P1.push(i);
		pP1 = pP1->prox;
	}
	nope<int> *pP2 = P2.HEAD;
	for(int i = 0; i < 10; i++){
		P2.push(P1->HEAD.dado)
		pP2 = pP2->prox;
	}
	for(int i = 0; i < 10; i++){
		cout << "\n " << pP2->dado << endl;
	    pP2 = pP2->prox;
	}
}

void Funcoes::opcao2c(){
	Pilha<int>P;
	nope<int> *pP = P.HEAD;
	for(int i = 0; i < 20; i++){
		P.push(rand%100);
		pP = pP->prox;
	}
	//fun��o totiente de Euler?
}

void Funcoes::opcao3a(){
	//n�o entendi nada
}

void Funcoes::opcao3b(){
	//n�o entendi
}

void Funcoes::opcao4(){
}
