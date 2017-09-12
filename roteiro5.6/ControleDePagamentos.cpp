#include "ControleDePagamentos.h"
#include "Pagamento.h"
#define TAM 2
#include <string>

ControleDePagamentos::ControleDePagamentos(){
}


double ControleDePagamentos::calculaTotalDePagamentos(Pagamento *pagamentos, int i){
	double aux=0;
	int j;
	for(j=0;j<i;j++){
		aux+=pagamentos[j].getValorPagamento();
	}
	return aux;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nomeDoFuncionario, int i, Pagamento *pagamento){
	int j;
	for(j=0;j<i; j++){
	if(!(nomeDoFuncionario.compare(pagamento[j].getNomeDoFuncionario())))
		return true;
}
		return false;
}

ControleDePagamentos::~ControleDePagamentos(){
}

/*
ControlePagamentos cP;
Pagamento p1, p2; 

// Configurou pagamento p1 e p2

string aux; 
double val;

cout << "Digite o nome do funcionario:"; 
cin >> aux;

cout << "Digite o salario do funcionario:"; 
cin >> val;

p1.setnomeDoFuncionario(aux);
p1.setValorPagamento(val);

cout << "Digite o nome do funcionario:"; 
cin >> aux;

cout << "Digite o salario do funcionario:"; 
cin >> val;

p2.setnomeDoFuncionario(aux);
p2.setValorPagamento(val);


cP.setPagamentos(p1, 0);
cP.setPagamentos(p2, 1);
*/
#include "ControleDePagamentos.h"
