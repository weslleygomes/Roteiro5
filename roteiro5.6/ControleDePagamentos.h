#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <string>

class ControleDePagamentos
{
	public:
		
		double calculaTotalDePagamentos(Pagamento *pagamentos, int i);
		bool existePagamentoParaFuncionario(std::string nomeDoFuncionario, int i, Pagamento *pagamento);
		ControleDePagamentos();
		virtual ~ControleDePagamentos();
};

#endif
