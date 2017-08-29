#include <iostream>
#include <string>
#include "Despesa.h"
#include "ControleDeGastos.h"
#define TAM 5 //Definir numero de despesas

using namespace std;

struct aValor{
	double valor;
	char tipo[30];
};

int main() {
	Despesa cg[TAM];
	ControleDeGastos gastos;
	int i;
	aValor hehe[TAM];
	double pont;
	char procura[30];
	
	for(i=0; i < TAM; i++){
		cout << "Tipo da despesa " << i+1 << ": ";
		cin >> hehe[i].tipo;
		cout << "Valor da despesa " << i+1 << ": ";
		cin >> hehe[i].valor;
	}
		cout << "-----------------------------------------" << endl;
	for(i=0; i<TAM; i++){
		cg[i].setDespesa(hehe[i].valor, hehe[i].tipo);
	}
	
	for(i=0; i<TAM; i++){
		gastos.calculaTotalDeDespesas(cg[i].getDespesa1(), &pont);
	}
	cout <<"O total de gastos foi: " << pont << endl;
	
	cout << "Digite a despesa que voce quer verificar: " ;
	cin >> procura;
	for(i=0; i<TAM; i++){
		if((gastos.existeDespesaDotipo(hehe[i].tipo, procura)) == 1){
			cout << "Essa despesa existe!";
			return -1;
		}
	}
	cout << "Essa despesa nao existe!";	
	return 0;
}
