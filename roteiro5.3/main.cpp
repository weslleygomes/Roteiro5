#include <iostream>
#include "Empregado.h"
#define TAM 10 //Defina o numero de Funcionários

int main() {
	int i;
	Empregado funcionario[TAM];

	for(i=0; i<TAM; i++){
		funcionario[i].salariomensal();	
			if(funcionario[i].salario<0){
			cout << "Salario invalido!";
		return 0;
			}
	}
	for(i=0; i<TAM; i++){
		funcionario[i].salarioanualAU();
	}

	return 0;
}
