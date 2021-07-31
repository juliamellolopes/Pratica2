#ifndef __LISTIMP__
#define __LISTIMP__
#include "Lista.hpp"

template <typename T> List<T>::List() {
  this->TAM = 0;
  this->HEAD = nullptr;
  this->TAIL = nullptr;
}

template <typename T> int List<T>::size() const noexcept{
	return this->TAM; 
}

template <typename T> bool List<T>::isEmpty() const noexcept {
  return this->TAM == 0;
}
template <typename T> void List<T>::push(const T dado) {
  if (this->isEmpty()) {
    this->HEAD = new node<T>(dado);
    this->TAIL = HEAD;
    this->TAM++;
  } else {
    this->TAIL->prox = new node<T>(dado);
    TAIL->prox->ant = TAIL;
    TAIL = TAIL->prox;
    TAIL->prox = nullptr;
    this->TAM++;
  }
}
template <typename T> void List<T>::pop() {
  if (!TAIL)
    return;
  node<T> *pNode = TAIL;
  TAIL = TAIL->ant;
  delete pNode;
  pNode = nullptr;
  if (TAIL == nullptr || HEAD == nullptr) {
    HEAD = nullptr;
    TAIL = nullptr;
  }
  this->TAM--;
}
template <typename T> List<T>::~List<T>() {
  while (HEAD != nullptr) {
    this->pop();
  }
  HEAD = nullptr;
  TAIL = nullptr;
}
#endif


