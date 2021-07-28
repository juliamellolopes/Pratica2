#include <iostream>
#include "Lista.hpp"
#include "Pilha.hpp"
#include "Fila.hpp"
using namespace std;
 

int main(){
	int opc;
	char al;
	
	setlocale(LC_ALL,"portuguese");
	
	cout << "\n\t--------INICIALIZANDO----------------" << endl;
	do{
		cout << "1.Questão 01" << endl;
		cout << "2.Questão 02" << endl;
		cout << "3.Questão 03" << endl;
		cout << "4.questão 04" << endl;
		cout << "5.Sair do programa" << endl;
		cout << "Informe qual das opções acima você deseja: " << endl;
		cin >> opc;
		
		switch(opc){
			case 1:{ 
			do{
				cout << "A.Alternativa A" << endl;
				cout << "B.Alternativa B" << endl;
				cout << "C.Alternativa C" << endl;
				cout << "D.Sair da questão" << endl;
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
			}case 2:{
				do{
				cout << "A.Alternativa A" << endl;
				cout << "B.Alternativa B" << endl;
				cout << "C.Alternativa C" << endl;
				cout << "D.Sair da questão" << endl;
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
				cout << "A.Alternativa A" << endl;
				cout << "B.Alternativa B" << endl;
				cout << "C.Sair da questão" << endl;
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
