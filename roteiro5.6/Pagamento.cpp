#include "Pagamento.h"
#include <string>

Pagamento::Pagamento(){
	
}

void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario){
	this->nomeDoFuncionario=nomeDoFuncionario;
}

void Pagamento::setValorPagamento(double valorPagamento){
	this->valorPagamento=valorPagamento;
}

double Pagamento::getValorPagamento(){
	return valorPagamento;
}

std::string Pagamento::getNomeDoFuncionario(){
	return nomeDoFuncionario;
}

Pagamento::~Pagamento(){
	
}

