#ifndef __PILHA__
#define __PILHA__
#include "Pilha.hpp"
using namespace std;

template <typename T>class Pilha : public List<T>{
	public:
		Pilha();
		void push(const T dado) override;
		void pop override;
};
#include "Pilha.hpp"
#endif
