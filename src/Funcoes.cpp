#include "Funcoes.hpp"
#include "Lista.hpp"
#include "Fila.hpp"
#include "Pilha.hpp"
#include <cstdio>
#include <math.h>
#include <iostream>

using namespace std;

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
	    cout << "{ " << ptuple->dado.n1 << ", " << ptuple->dado.n2 << "}";
	    ptuple = ptuple->prox;
	}
}

void Funcoes::opcao1b(){
	List<int>L1;
	List<int>L2;
	int somaL1 = 0;
	int somaL2 = 0;
	node<int> *pL1 = L1.HEAD;
	node<int> *pL2 = L2.HEAD;
	
	for(int i = 0; i < 3; i++){
		L1.push(rand()%13);
		L2.push(rand()%13);
		pL1 = pL1->prox;
		pL2 = pL2->prox;
	}
	
	int num = rand()%13;
	
	cout << endl;
	for(int i = 0; i < 3; i++){
		cout << "{ " << L1->HEAD.dado << ", " << L2->HEAD.dado << "}";
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
		cout << "\nO vencedor é L2" << endl;
	}
}

void Funcoes::opcao1c(){
	List<produto>L1;
	List<supermercado>L2;
	List<fornecedor>L3;
	List<fornecedor>L4;
	node<int> *pL1 = L1.HEAD;
	node<int> *pL2 = L2.HEAD;
	node<int> *pL3 = L3.HEAD;
	node<int> *pL4 = L4.HEAD;
	int n = 0;
	int minV = 0;
	nd = list.head;
	minV = nd.value;
	nd = nd->next;
	int aux1, aux2, aux3, x;
	char nome;
	
	cout << "quantos produtos vc deseja passar?" << endl;
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << "Informe o nome o produto: " << endl;
		cin >> nome;
		for(int j = 0; j < 2; j++){
			x = L1->nome;
			pL1 = pL1->prox;
			if(nome == x){
				aux1 = L1->cod;
			}
		}	
		for(int j = 0; j < 2; j++){
			x = L2->cod;
			pL2 = pL2->prox;
			if(aux1 == x){
				aux2 = L2->id;
				x = L3->cod;
				pL3 = pL3->prox;
				if(aux2 == x){
					//
				}
			}
		L4.push({aux2,aux1,aux3});	
		pL4 = pL4->prox;
	    }
	}
	cout << "\n\tLISTA FINAL" << endl;
	for(int i = 0; i < 2; i++){
		cout << "{ " << L4->id << ", " << L4->cod << " " << L4->valor << "}" << endl;
		pL4 = pL4->prox;
	}
}

void Funcoes::opcao2a(){
	char* str;
	Pilha<char>P1;
	nope<int> *pP1 = P1.HEAD;
	
	cout << "Informe a expressão matematica:" << endl;
	cin >>  str;
	
	for(int i = 0; i < sizeof(str)/sizeof(char*); i++){
		if(str[i] == '(' ){
			P1.push(str[i]);
			pP1 = pP1->prox;
		}else if(str[i] == ')'){
			P1.pop();
			pP1 = pP1->prox;
		}
	}
	
	cout << endl;
	for(int i = 0; i < 10; i++){
		cout << " " << P1->HEAD.dado << endl;
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
	
	cout << endl;
	for(int i = 0; i < 10; i++){
		cout << " " << P2->HEAD.dado << endl;
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
	
	int x;
	
	for(int i = 0; i < 20; i++){
		x = P->HEAD.dado;
		pP = pP->prox;
		cout << " Co-Primos de " << x << endl;
		cout << "{";
		for(int i = 0; i =< x ;i++){
			if(i % 2 != 0)
				cout << " " << i;
		}
		cout << "}" << endl;;
	}
}

void Funcoes::opcao3a(){
	Fila<tuple>F1;
	Fila<string>FResultante;
	int K;
	nope<int> *pF1 = F1.HEAD;
	
	for(int i = 0; i < 5; i++){
		F1.push({x,y,i});	
		pF1 = pF1->prox;	
	}
	
	nope<int> *pFR = FResultante.HEAD;
	
	for(int i = 0; i < 5; i++){
		FResultante.push(pow((F1-> + F1->y),Fi->k));	
		pFR = pFR->prox;	
	}
	
	cout << endl;
	for(int i = 0; i < 10; i++){
		cout << " " << FResultante->dado << endl;
	    pFR = pFR->prox;
	}
}

void Funcoes::opcao3b(){
	Fila<dupla>F1;
	Fila<dupla2>F2;
	int x, y, z[5];
	nope<int> *pF1 = F1.HEAD;
	nope<int> *pF2 = F2.HEAD;
	
	for(int i = 0; i < 10; i++){
		x = rand%100;
		y = F1->at;
		pF1 = pF1->prox;
		if(x != y){
			for(int i = 0; i < 5; i++){
				z[i] = rand%100;
			}
		F1.push({x,z});
		pF1 = pF1->prox;
		}
	}
	
	int maior = z[1];
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 5; j++){
			if(maior < z[i]){
				maior = i;
			}
		}
		F2.push({F1->at, maior});
		pF1 = pF1->prox;
		pF2 = pF2->prox;
	}
	
	cout << "\n\tATRIBUTO E CLASSE:" << endl;
	for(int i = 0; i < 10; i++){
		cout << "{ " << F2->at << ", " << F2->classe  << "}"<< endl;
		pF2 = pF2->prox;
	}
}

void Funcoes::opcao4(){
	Fila<cliene>F;
	Pilha<float>P;
	List<produtos>L;
	string CPF;
	char nome;
	float preco, somador = faturamento = 0;
	int vol;
	nope<int> pF = F.HEAD;
	nope<int> pL = L.HEAD;
	nope<int> pP = P.HEAD;
	
	for(int i = 0; i < 10; i++){
		cout << "Informe o numero de volumes: " << endl;
		cin >> vol;
		if(vol =< 10){
			cout << "Informre o CPF: ";
			cin >> CPF;
			for(int j = 0; j < vol; i++){
				cout << "Informe o nome do produto: " << endl;
				cin >> nome;
				cout << "Informe o preço do produto: " << endl;
				cin >> preco;
				somador += preco;
				L.push({nome, preco});
				pL = pL->prox;
			}
			F.push({CPF, L->dado});
			pF = pF->prox;
			P.push(somador);
			pP = pP->prox;
		}else{
			cout << "VOLUME DE PRODUTOS MAIOR QUE O PERMITIDO!" << endl;
		}
	} 
	
	cout << "\n\tCLIENTES DO DIA:" << endl;
	for(int i = 0; i < 10; i++){
		cout << "[i+1]Cpf: " << F.cpf << endl;
		for(int j = 0; j < 10; j++){
			cout << "[i+1]: " << F.L->dado << endl;
			pL = pL->prox;
		}
		pF = pF->prox;
		cout << "\nValor total: " << P->dado;
		pP = pP->prox;
	}
	
	for(int i = 0; i < 10; i++){
		faturamento +=P->dado;
		pP = pP->prox;
	}
	
	cout << "\nFATURAMENTO DO DIA: " << faturamento;
}
