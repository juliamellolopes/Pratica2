#ifndef __LIST__
#define __LIST__

template <typename P> struct node {
  P dado;
  node<P> *ant;
  node<P> *prox;
  node() = default;
  node(const P dado) : dado(dado), ant(nullptr), prox(nullptr) {}
};

template <typename T> class List{
	protected:
	  int TAM;
	public:
	  node<T> *TAIL;
	  node<T> *HEAD;
	  virtual void push(const T dado);
	  virtual void pop();
	  int size() const noexcept;
	  bool isEmpty() const noexcept;
	  List();
	  ~List();
};
#include "Lista.cpp"
#endif
