#include <iostream>
#include "Pessoa.h"
#include <string>

using namespace std;

int main() {
	Pessoa CadastroDePessoas;
	string nome;
	int idade, telefone;
	
	cout << "Digite o nome: ";
	cin >> nome;
	cout << "Digite a idade: ";
	cin >> idade;
	cout << "Digite o telefone: ";
	cin >> telefone;
	system("cls");
	
	CadastroDePessoas.setCadastro(nome, telefone, idade);
	cout << "Usuario Cadastrado!" << endl;
	cout << "Nome: " << CadastroDePessoas.getNome() << endl;
	cout << "Idade: " << CadastroDePessoas.getIdade() << endl;
	cout << "Telefone: " << CadastroDePessoas.getTelefone() << endl;
	
	return 0;
}
