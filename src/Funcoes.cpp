#include "Funcoes.hpp"
#include "Lista.hpp"
#include "Fila.hpp"
#include "Pilha.hpp"
#include <cstdio>
#include <math.h>


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
	node<int> *pL2 = L2.HEAD;
	for(int i = 0; i < 3; i++){
		L1.push(rand%13);
		L2.push(rand%13);
		pL1 = pL1->prox;
		pl2 = pL2->prox;
	}
	int num = rand%13;
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
struct produto{
	int cod;
	char nome;
	int quant;
	produto() = default;
	produto(int cod, char nome, int quant):cod(cod),nome(nome),quant(quant){}
};
struct supermercado{
	int id;
	int cod;
	supermercado() = default;
	supermercado(int id, int cod): id(id),cod(cod){}
};
struct fornecedor{
	int id;
	int cod;
	float valor;
	fornecedor() = default;
	fornecedor(int id,int cod,float valor): id(id), cod(cod), valor(valor){}
};

void Funcoes::opcao1c(){
	List<produto>L1;
	List<supermercado>L2;
	List<fornecedor>L3;
	node<int> *pL1 = L1.HEAD;
	node<int> *pL2 = L2.HEAD;
	node<int> *pL3 = L3.HEAD;
	//
	for(int i = 0; i < 2; i++){
		cout << "Informe o codigo do produto: " << endl;
		cin >> cod;
		cout << "Informe o nome do produto: " << endl;
		cin >> nome;
		cout << "Informe a quantidade do produto: " << endl;
		cin >> quant;
		L1.push({cod,nome, quant});
		pL1 = pL1->prox;
	}
	//
	for(int i = 0; i < 2; i++){
		cout << "Informe o ID do supermercado: " << endl;
		cin >> id;
		cout << "Informe o codigo do produto: " << endl;
		cin >> cod;
		L2.push({id, cod});
		pL2 = pL2->prox;
	}
	//
	for(int i = 0; i < 2; i++){
		cout << "Informe o ID do supermercado: " << endl;
		cin >> id;
		cout << "Informe o codigo do produto: " << endl;
		cin >> cod;
		cout << "Informe o valor do produto: " << endl;
		cin >> valor;
		L3.push({id,cod,valor});
		pL3 = pL3->prox;
	}
	int aux;
	int x;
	for(int i = 0; i < 2; i++){
		x = L1->cod;
		pL1 = pL1->prox;
		if(x == L2->cod){
			if()
			aux = i;
		}
	}
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
	cout << endl;
	for(int i = 0; i < 10; i++){
		cout << " " << pP1->dado << endl;
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
		cout << " " << pP2->dado << endl;
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
		x = P->dado;
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
	for(int = 0; i < 5; i++){
		F1.push({x,y,i});	
		pF1 = pF1->prox;	
	}
	nope<int> *pFR = FResultante.HEAD;
	for(int = 0; i < 5; i++){
		FResultante.push(pow((F1->x + F1->y),Fi->k));	
		pFR = pFR->prox;	
	}
	cout << endl;
	for(int i = 0; i < 10; i++){
		cout << " " << pP2->dado << endl;
	    pP2 = pP2->prox;
	}
}

void Funcoes::opcao3b(){
	//não entendi
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
	cout << "\nFATURAMENTO DO DIA: " << faturanmento;
}
