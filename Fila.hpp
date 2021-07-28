#ifndef FILA_HPP
#define FILA_HPP
#include <stdio.h>
#include <stdlib.h>
#include <string>
#define MAX 100
using namespace std;

typedef struct TipoItem Item;
typedef struct TipoFila Fila;

struct TipoItem{
	int dado;
};
struct TipoFila{
	Item Fila[MAX];
	int Frente;
	int Fundo;
};
class Fila{
	public:
		void FilaVazia(Fila *F);
		void Enfileirar(Item dado, Fila *F);
		void Desenfileirar(Fila *F, Item *dado);
		void opcaoA();
		void opcaoB();
	private:
};
#endif
