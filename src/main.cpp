#include <iostream>
#include "Lista.hpp"
#include "Pilha.hpp"
#include "Fila.hpp"
using namespace std;
 

int main(){
	int opc;
	char al;
	Menu m;
	
	setlocale(LC_ALL,"portuguese");
	
	cout << "\n\t--------INICIALIZANDO----------------" << endl;
	do{
		m.menu();
		cin >> opc;
		
		switch(opc){
			case 1:{ 
			do{
				cout << "\nA.Alternativa A" << endl;
				cout << "B.Alternativa B" << endl;
				cout << "C.Alternativa C" << endl;
				cout << "D.Sair da quest�o" << endl;
				cin >> al;
				
				switch(al){
						case a:{
							l.opcao1A();
						break;
						}case b:{
						//	l.opcao1B();
						break;
						}case c:{
						//	l.opcao1C();
						break;
						}case d:{
							cout << "\n\nSaindo da quest�o!!";
							break;
						}default:{
							cout << "Op��o in�lida";
						break;
						}
					}
				}while(al!=d);		
			break;
			}case 2:{
				do{
				cout << "\nA.Alternativa A" << endl;
				cout << "B.Alternativa B" << endl;
				cout << "C.Alternativa C" << endl;
				cout << "D.Sair da quest�o" << endl;
				cin >> al;
				
				switch(al){
						case a:{
						//	p.opcao2A();
						break;
						}case b:{
						//	p.opcao2B();
						break;
						}case c:{
						//	p.opcao2C();
						break;
						}case d:{
							cout << "\n\nSaindo da quest�o!!";
							break;
						}default:{
							cout << "Op��o in�lida";
						break;
						}
					}
				}while(al!=d);
			break;
			}case 3:{
				do{
				cout << "\nA.Alternativa A" << endl;
				cout << "B.Alternativa B" << endl;
				cout << "C.Sair da quest�o" << endl;
				cin >> al;
				
				switch(al){
						case a:{
						//	f.opcao3A();
						break;
						}case b:{
						//	f.opcao3B();
						break;
						}case c:{
							cout << "\n\nSaindo da quest�o!!";
							break;
						}default:{
							cout << "Op��o in�lida";
						break;
						}
					}
				}while(al!=d);
			break;
			}case 4:{
					//menu com a descri�a� do problema
					//resolu��o do problema 
				break;
			}case 5:{
				cout << "\n\nSaindo do programa!!";
				break;
			}default:{
				cout << "Op��o in�lida";
			break;
			}
		}	
	}while(opc!=5);
	
	
	return 0;
}
