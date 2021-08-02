#include "Menu.hpp"
#include "Funcoes.hpp"

void Menu::menuinicial(){
	cout << "\n\n1.Questão 01" << endl;
	cout << "2.Questão 02" << endl;
	cout << "3.Questão 03" << endl;
	cout << "4.questão 04" << endl;
	cout << "5.Sair do programa" << endl;
	cout << "Informe qual das opções acima você deseja: " << endl;
}

void Menu::opcao1(){
	cout << "\n1.Alternativa A" << endl;
	cout << "2.Alternativa B" << endl;
	cout << "3.Alternativa C" << endl;
	cout << "4.Sair da questão" << endl;
}

void Menu::opcao2(){
	cout << "\nA.Alternativa A" << endl;
	cout << "B.Alternativa B" << endl;
	cout << "C.Sair da questão" << endl;
}

void Menu::questao4(){
	//questão 4
}

void Menu::menu(){
	Menu me;
	Funcao f;
	do{
		me.menuinicial();
		cin >> opc;
		
		switch(opc){
			case 1:{ 
				me.opcao1();
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
				me.opcao1();
				cin >> al;
				while(al!=d){
					switch(al){
						case 1:{
						
						break;
						}case 2:{
							f.opcao2b();
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
				me.opcao2();
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
					me.questao4();
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
}


