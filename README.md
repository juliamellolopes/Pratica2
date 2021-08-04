<h1 align="center">Pratica Nº2-TRABALHO LISTA, PILHA, FILA</h1>
Neste trabalho teremos a implementação de quatro questões de algoritmos utilizando as estruturas de Lista, Pilha e Fila. É utilizado uma main.cpp para chamar uma classe Menu.hpp, que de acordo com sua escolha, a alternativa ira chamar a função correspondente na classe Funcoes.hpp, lá se encontra as respectivas soluções para cada questão do trabalho utilizando as classes Lista, Fila e Pilha. Toda estrutura de programação se encontra na pasta src.
 
### Sumário
<!--ts-->
   * [Copilação](#Copilação)
   * [Inicialização](#Inicialização)
   * [Questão1](#Questão1)
   * [Questão2](#Questão2)
   * [Questão3](#Questão3)
   * [Questão4](#Questão4)
<!--te-->

### Copilação

 Programação feita em C++, na plataforma DevC++, no Windows 10. Abra o arquivo Mikefile.cpp e copile:
	
    make
    make run
    
### Inicialização

Ao inicializar o programa sera impresso na tela um menu com opções das questões do trabalho como é mostrado a baixo:
<h4 align> 
	Em construção...  🚧
</h4>

	//menu
	
Ao você fazer sua escolha aparecerá outro menu correspondente a letra que você deseja, dessa forma teremos um unico main para todos os problemas. 

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
	
opcao1a(). foi criado 3 listas, onde uma tera os numeros impares e outra os numeros pares, a terceira lista tera cada dado das duas listas anteriores na mesma posição.

opcao1b(). foram criadas 2 listas de 3 possições cada, que são preenchidas com valores aleatórios de 1 a 13, é sorteado um valor aleatório de 1 a 13, esse numero sera subtraido de cada lavor em cada posição das listas, deopis é somado todos os valores das listas e a lista que tiver o maior valor ganha o jogo. 

opcao1c().

<h4 align> 
	Em construção...  🚧
</h4>

### Questão2

Na Questão 2 foi implementado herança para poder aproveitar a estrutura da Lista, dessa forma, somente foi necessário fazer algumas mudanças na função Pop() e Push() em Pilha.cpp. A classe Pilha.hpp e Pilha.cpp ficam com a estrutura para utilização de uma pilha. A baixo podemos ver como ficou a estrutura:

	template <typename T> void Pilha<T>::push(const T dado){
		if(this->isEmpty()){
		this->HEAD = this->TAIL = new node <T>(dado);
		}else{
		this->HEAD->ant = new node<T>(dado);
		this->HEAD->ant->prox = this->HEAD;
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
As resoluções das questões do problemas 2a, 2b e 2c se encontam na pasta src nos arquivos Funcoes.hpp e Funcoes.cpp. É possivel encontrar as execuções nas funções a baixo:

	void opcao2a();
	void opcao2b();
	void opcao2c();
	
opcao2a(). sera requisitado uma função matematica do usuário, onde sera armazenada em uma string, depois sera separada os caracteres dos parênteses, para checar se esta com o numero ceto de parênteses sera usada uma pilha que empilha e desmpilha, no final se a pilha estiver vazia o numero de parênteses estara certo senão estara errado.

opcao2b(). foi criada duas pilhas onde uma é preenchida por 10 valores e depois cada valor é passsado para a segunda pilha.

opcao2c(). foi criada uma pila que vai receber numeros aleatórios, depois cada numero vai passar pelo for onde sera encontrado os co-primos e no final eles serão impressos na tela.

### Questão3

Na Questão 3 foi utilizado a estrutura de Fila das classes Fil.cpp e Fila.hpp, tambem foi ultilizado herança para aproveitar a estrutura de Lista e somente foram feitas mudanças na função Pop() noo arquivo Fila.cpp. É possivel ver essa mudança abaixo:

	template <typename T> void Fila<T>::pop(){
		if (!this->HEAD)
		   return;
		node<T> *pNode = this->HEAD;
		this->HEAD = this->HEAD->prox;
		delete pNode;
		pNode = NULL;
		this->TAM--;
	}
As execuções das questões 3a e 3b se encontram na pasta src nos arquivos Funcoes.cpp e Funcoes.hpp. É possivel encontrar as execuções nas funções a baixo:
	
	void opcao3a();
	void opcao3b();

opcao3a().Criado duas filas, uma que vai armazenas o x, y e k de uma função e outra que sera a resultante da função elevada a k, depois é impresso a fila resultante.

opcao3b().

<h4 align> 
	Em construção...  🚧
</h4>

### Questão4

Na questão 4 foi criado um problema que imita um caixa de 10 volumes. Onde tera uma fila de clientes, uma lista de produtos e uma pilha de notas fiscais. Sera feita uma Fila com o CPF do cliente, uma Lista com o nome dos produtos e seus respectivos preços e uma Pilha com o valor da nota fiscal das compra. O programa foi limitado a um caixa de 10 operações e no final deve mostrar a Fila, Lista e Pilha e o faturameno do dia. A resolução do problema se encontra em src, Funcoes.cpp e Funcoes.hpp, e tem sua execusão na função abaixo:

	void opcao4();

No codigo sera cadastrado o CFP do cliente, o nome do produto e seu preço de uma Lista serão armazenados em uma Lista, em seguida, o valor da compra é armazenado em uma Pilha. No final sera impresso os cpfs de cada cliente que esteve, os produtos que comprou, o final do falor da compra e o faturamento do dia. Abaixo mosta como deve aparecer o final:

<h4 align> 
	Em construção...  🚧
</h4>
