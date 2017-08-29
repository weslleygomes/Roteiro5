#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>
using namespace std;

class Empregado
{
	public:
		Empregado();
		string nome, sobrenome;
		float salario;
		void salariomensal();
		void salarioanualAU();
		virtual ~Empregado();
	protected:
};

#endif
