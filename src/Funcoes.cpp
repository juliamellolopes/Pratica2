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
	for(int i = 0; i < 3; i++){
		L1.push(rand%12+1);
		L2.push(rand%12+1);
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
		cout << "\nO vencedor é L1" << endl;
	}else{
		cou << "\nO vencedor é L2" << endl;
	}
}
