#ifndef PILHA_HPP
#define PILHA_HPP
#include <stdio.h>
#include <stdlib.h>
#include <string>
#define MAX 100
using namespace std;

typedef srtuct TipoItem Item;
typedef struct TipoPilha Pilha;

struct TipoItem{
	int dado;
}
struct TipoPilha{
	Item stack[MAX];
	int topo;
};

class Pilha{
	public:
		void PilhaVazia(Pilha *P);
		void Push(Item dado, Pilha *P);
		void Pop(Pilha *P, Item *dado);
		void opcao2A();
		void opcao2B();
		void opcao2C();
	private:
		int dado;
		Item stack[MAX];
		int topo;
};
#endif
