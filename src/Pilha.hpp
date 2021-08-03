#ifndef __PILHA__
#define __PILHA__
#include "Lista.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

template <typename T>class Pilha : public List<T>{
	public:
		Pilha();
		void push(const T dado) override;
		void pop() override;
};
#include "Pilha.hpp"
#endif
