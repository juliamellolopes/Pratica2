#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
 

int main(){
	int opc;
	int al;
	Menu m;
	
	setlocale(LC_ALL,"portuguese");
	
	cout << "\n\t--------INICIALIZANDO----------------" << endl;
	do{
		m.menu();
		cin >> opc;
		
		switch(opc){
			case 1:{ 
			do{
				Menu.opcao1();
				cin >> al;
				
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
				}while(al!=d);		
			break;
			}case 2:{
				do{
				m.opcao1();
				cin >> al;
				
				switch(al){
						case a:{
						
						break;
						}case b:{
						
						break;
						}case c:{
						
						break;
						}case d:{
							cout << "\n\nSaindo da questão!!";
							break;
						}default:{
							cout << "Opção inálida";
						break;
						}
					}
				}while(al!=d);
			break;
			}case 3:{
				do{
				m.opcao2();
				cin >> al;
				
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
				}while(al!=d);
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
