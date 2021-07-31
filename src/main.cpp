#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
 

int main(){
	int opc;
	int al;
	Menu m;
	Funcoes f;
	
	do{
		m.menu();
		cin >> opc;
		switch(opc){
			case 1:{ 
				Menu.opcao1();
				cin >> al;
				while(al!=d){
					switch(al){
						case 1:{
							f.opcao1a();
						break;
						}case 2:{
							f.opcao1b();
						break;
						}case 3:{
							
						break;
						}case 4:{
							cout << "\n\nSaindo da questão!!";
							break;
						}default:{
							cout << "Opção inálida";
						break;
						}
					}
				}
			break;
			}case 2:{
				m.opcao1();
				cin >> al;
				while(al!=d){
					switch(al){
						case 1:{
						
						break;
						}case 2:{
						
						break;
						}case 3:{
						
						break;
						}case 4:{
							cout << "\n\nSaindo da questão!!";
							break;
						}default:{
							cout << "Opção inálida";
						break;
						}
					}
				}
			}
			break;
			}case 3:{
				m.opcao2();
				cin >> al;
				while(al!=d){
					switch(al){
						case a:{
						
						break;
						}case b:{
						
						break;
						}case c:{
							cout << "\n\nSaindo da questão!!";
							break;
						}default:{
							cout << "Opção inálida";
						break;
						}
					}
				};
			break;
			}case 4:{
					m.questao4();
				break;
			}case 5:{
				cout << "\n\nSaindo do programa!!";
				break;
			}default:{
				cout << "Opção inálida";
			break;
			}
		}	
	}while(opc!=5);
	return 0;
}
