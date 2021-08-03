<h1 align="center">Pratica Nº2-TRABALHO LISTA, PILHA, FILA</h1>
Neste trabalho teremos a implementação de quatro questões de algoritmos utilizando as estruturas de Lista, Pilha e Fila. É utilizado uma main.cpp para chamar uma classe Menu.hpp que de acordo com sua escolha alternativa ira chamar a função correspondente na classe Funcoes.hpp, lá se encontra as respectivas soluções para cada questão do trabalho utilizando as classes Lista, Fila e Pilha. Toda estrutura de programação se encontra na pasta src.
 
### Sumário
<!--ts-->
   * [Copilação](#Copilação)
   * [Questão1](#Questão1)
   * [Questão2](#Questão2)
   * [Questão3](#Questão3)
   * [Questão4](#Questão4)
<!--te-->

### Copilação

 Programação feita em C++, na plataforma DevC++, no Windows 10. Abra o arquivo Mikefile.cpp e copile:
	
    make
    make run
    
### Questão1

Na Questão 1 utilizaremos a implementação da estrutura Lista, arquivos referentes a sua estrutura se encontram na pasta src em Lista.cpp e Lista.hpp. Foram criadas funções para adicionar e retirar informações de dentro da lista, como pode ser visto a seguir:

	template <typename T> void List<T>::push(const T dado){
	  if (this->isEmpty()){
	    this->HEAD = new node<T>(dado);
	    this->TAIL = HEAD;
	    this->TAM++;
	  } else {
	    this->TAIL->prox = new node<T>(dado);
	    TAIL->prox->ant = TAIL;
	    TAIL = TAIL->prox;
	    TAIL->prox = NULL;
	    this->TAM++;
	  }
	}
	
	template <typename T> void List<T>::pop(){
	  if (!TAIL)
	    return;
	  node<T> *pNode = TAIL;
	  TAIL = TAIL->ant;
	  delete pNode;
	  pNode = NULL;
	  if (TAIL == NULL || HEAD == NULL){
	    HEAD = NULL;
	    TAIL = NULL;
	  }
	  this->TAM--;
	}
A resolução do problema 1a, 1b e 1c se encontram dentro da pasta src no arquivo Funcoes.cpp e Funcoes.hpp. Onde é implementada cada questão de forma eficaz nas funções: 

	void opcao1a();
	void opcao1b();
	void opcao1c();	

### Questão2

Na Questão 2 foi implementado herança para poder aproveitar a estrutura da Lista, dessa forma, somente foi necessário fazer algumas mudanças na função Pop() em Fila.cpp. A classe Fila.hpp e Fila.cpp ficam com a estrutura para utilização de uma fila. A baixo podemos ver como ficou a estrutura:

	template <typename T> void Fila<T>::pop(){
		if (!this->HEAD)
		    return;
	    	node<T> *pNode = this->HEAD;
	    	this->HEAD = this->HEAD->prox;
		delete pNode;
		pNode = NULL;
		this->TAM--;
	}
As resoluções das questões do problemas 2a, 2b e 2c se encontam na pasta src nos arquivos Funcoes.hpp e Funcoes.cpp. É possivel encontrar as execuções nas funções a baixo:

	void opcao2a();
	void opcao2b();
	void opcao2c();
	
### Questão3
<h4 align> 
	Em construção...  🚧
</h4>

### Questão4
<h4 align> 
	 Em construção...  🚧
</h4>
- [x] Cadastro de usuário
- [x] Cadastro de cliente
- [x] Cadastro de produtos
>
