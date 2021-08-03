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
		cout << "\nO vencedor é L1" << endl;
	}else{
		cou << "\nO vencedor é L2" << endl;
	}
}

struct compras{
	char alimento;
	int quantidade;
	compras() = default;
	compras(char alimento, int quantidade) : alimento(alimento), quantidade(quantidade); {}
};

struct supermercado{
	char nomes;
	supermercado() = default;
	supermercado(char nomes): nomes(nomes);{}
}

struct precos{
	float preco;
	precos() = default;
	precos(float preco):preco(preco);{}
};

void Funcoes::opcao1c(){
	List<compras>L1;
	List<supermercado>L2;
	List<precos>L3;
	
}

void Funcoes::opcao2a(){
	char* str;
	cout << "Informe a expressão matematica:" << endl;
	cin >>  str;
	Pilha<char>P1;
	nope<int> *pP1 = P1.HEAD;
	for(int i = 0; i < sizeof(str)/sizeof(char*); i++){
		if(str[i] == '(' ){
			P1.push(str[i]);
			pP1 = pP1->prox;
		}else if(|| str[i] == ')'){
			P1.pop();
			pP1 = pP1->prox;
		}
	}
	for(int i = 0; i < 10; i++){
		cout << "\n " << pP1->dado << endl;
	    pP1 = pP1->prox;
	}
	if(P1.HEAD == NULL){
		cout << "\n\nExpressão com parênteses CORRETO!" << endl;
	}else{
		cout << "\n\nEcpressão com parênteses INCORRETO!" << endl;
	}
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

struct coprimos{
	Pilha<int>CoPrimos;
	coprimos() = default;
	coprimos(Pilha CoPrimos) :CoPrimos(CoPrimos);{}
};

void Funcoes::opcao2c(){
	Pilha<int>P;
	nope<int> *pP = P.HEAD;
	for(int i = 0; i < 20; i++){
		P.push(rand%100);
		pP = pP->prox;
	}
	
}

void Funcoes::opcao3a(){
	Fila<string>F1;
	Fila<string>FResultante;
	//tenho que fazer
}

void Funcoes::opcao3b(){
	//não entendi
}

void Funcoes::opcao4(){
	
}
