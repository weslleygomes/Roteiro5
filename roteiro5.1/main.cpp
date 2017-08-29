#include <iostream>
#include "heheXD.h"


using namespace std;

int main() {
	heheXD QueroJogarPubg;
	
	cout << "Digite o Dia: ";
	cin >> QueroJogarPubg.Dia;
	cout << "Digite o Mes: ";
	cin >> QueroJogarPubg.Mes;
	cout << "Digete o Ano: ";
	cin >> QueroJogarPubg.Ano;
	
	if(QueroJogarPubg.Dia > 31 || QueroJogarPubg.Dia < 1){
		cout << "Dia invalido!!" << endl;
		return -1;
		
	}else if(QueroJogarPubg.Mes > 12 && QueroJogarPubg.Mes < 1){
		cout << "Mes invalido!!" << endl; 
		return -1;
	}else if(QueroJogarPubg.Mes == 2 && QueroJogarPubg.Dia > 28){
		cout << "Dia invalido!!" << endl;
			return -1 ;
	}
	
	QueroJogarPubg.AvancarDia();
	
	cout << QueroJogarPubg.Dia << "/" << QueroJogarPubg.Mes << "/" << QueroJogarPubg.Ano;
	
	
	
	return 0;
}
