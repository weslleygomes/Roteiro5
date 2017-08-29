#include "Empregado.h"
#include <iostream>
using namespace std; 

Empregado::Empregado(){
}
void Empregado::salariomensal(){
	cout << "Digite o nome do funcionario: ";
	cin >> nome;
	cout << "Digite o sobrenome do funcionario: ";
	cin >> sobrenome;
	cout << "Digite o salario do funcionario: ";
	cin >> salario;
	cout << "-----------------------------------------------------------" << endl;
}

void Empregado::salarioanualAU(){
	cout << "O funcionario " << nome << " " << sobrenome << " recebe:"<< endl;
	cout << "R$" << salario*12	<< " por ano."<< endl;
	cout << "Com o aumento de 10%:\n" << "R$" << salario*1.2+salario*12 << endl;
}

Empregado::~Empregado(){
}
