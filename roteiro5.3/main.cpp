#include <iostream>
#include "Empregado.h"

int main() {
	Empregado funcionario;
	funcionario.salariomensal();
	if(funcionario.salario<0){
		cout << "Salario invalido!";
		return 0;
	}
	funcionario.salarioanualAU();
	
	return 0;
}
