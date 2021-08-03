#ifndef __PILHAMP__
#define __PILHAMP__
#include "Pilha.hpp"

template <typename T> Pilha<T>::Pilha() : List<T>(){}

template <typename T> void Pilha<T>::push(const T dado){
	if(this->isEmpty()){
        this->HEAD = this->TAIL = new node <T>(dado);
	}else{
    	this->HEAD->ant = new node<T>(dado,NULL,this->HEAD)    ;
    	this->HEAD = this->HEAD->ant;
    }
    this->TAM++;
}

template <typename T> void Pilha<T>::pop(){
	if(this->HEAD != NULL){
        node<T> *nd = this->HEAD;
        this->HEAD = this->HEAD->prox;
        delete nd;
    	nd = nullptr;
	}
    if(this->HEAD == NULL)
    	this->TAIL= NULL;    
    this->TAM--;
}
#endif
