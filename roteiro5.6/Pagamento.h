#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento
{
	public:
		void setValorPagamento(double valorPagamento);
		void setNomeDoFuncionario(std::string nomeDoFuncionario);
		double getValorPagamento();
		std::string getNomeDoFuncionario();
		Pagamento();
		virtual ~Pagamento();
	private:
		double valorPagamento;
		std::string nomeDoFuncionario;
};

#endif
