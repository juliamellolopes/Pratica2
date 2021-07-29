#ifndef LISTA_HPP
#define LISTA_HPP
#include <stdio.h>
#include <stdlib.h>
#include <string>
#define MAX 100
using namespace std;

typedef struct TipoItem Item;
typedef struct TipoLista Lista;

struct TpoItem{
	int dado;
};

struct TipoLista{
	Item Lista[MAX];
	int primeiro;
	int ultimo;
};

class Lista{
	public:
		void ListVazia(Lista *L);
		void Inserir(Item dado, Lista *L);
		void Retirar(int p, Lista *L, Item *dado);
		void setListaI(Item ListaI[MAX]);
		Item getListaI();
		void setListaP(Item ListaP[MAX]);
		Item getListaP();
		void opcao1A();
		void opcao1B();
		void opcao1C();
		void imprimir();
	private:
		int dado;
		//lista1
		//lista2
		int primeiro;
		int ultimo;
};
#endif
