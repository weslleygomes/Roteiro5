#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

using namespace std;

class Pessoa
{
	public:
		void setCadastro(string n ,int t, int i){
			nome = n;
			telefone = t;
			idade = i;
		}
		
		string getNome(){
			return nome;
		}
			
		int getTelefone(){
			return telefone;
		}
		
		int getIdade(){
			return idade;
		}
	private:
		string nome; 
		int telefone;
		int idade;
};

#endif

