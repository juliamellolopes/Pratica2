#ifndef FUNCOES_H
#define FUNCOES_H
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

struct tuple{
  int n1;
  int n2;
  tuple() = default;
  tuple(int n1, int n2) : n1(n1), n2(n2) {}
};

struct triple{
	int x;
	int y;
	int k;
	tuple() = default;
	tuple(int x, int y, in k) : x(x), y(y), k(k) {}
};

struct cliente{
	string CPF;
	List<produtos>L;
};

struct produtos{
	char nome;
	float preco;
	produtos() = default;
	produtos(char nome, float preco): nome(nome), preco(preco){}
};

class Funcoes
{
	public:
		void opcao1a();
		void opcao1b();
		void opcao1c();
		void opcao2a();
		void opcao2b();
		void opcao2c();
		void opcao3a();
		void opcao3b();
		void opcao4();
};
#endif
