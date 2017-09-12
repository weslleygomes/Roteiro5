#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"
#include <string>
#define TAM 2
using namespace std;

int main() {
	Pagamento pagamento[TAM];
	ControleDePagamentos controle;
	int i;
	double aux1;
	string aux2;
	
	for(i=0;i<TAM;i++){
		cout << "Digite o valor do pagamento e o nome do funcionario " << i+1 << ": ";
		cin >> aux1 >> aux2;
		pagamento[i].setValorPagamento(aux1);
		pagamento[i].setNomeDoFuncionario(aux2);
	}
	cout << "Total de pagamentos: " << controle.calculaTotalDePagamentos(pagamento, TAM) << endl;
	cout << "Digite o nome do funcionario que deseja procurar: ";
	cin >> aux2;
	if(controle.existePagamentoParaFuncionario(aux2,TAM,pagamento)==true)
	cout << "Existe pagamento para " << aux2 <<endl;
	else
	cout << "Nao existe pagamento para " << aux2 << "." << endl;
	
	
	return 0;
}
