#include <iostream>
#include "ProdutosXD.h"

using namespace std;

int main() {
	
	ProdutosXD Cliente;
	
	cout << "Digite o nome do item: ";
	cin >> Cliente.descricao;
	cout << "Digite o numero de serie do produto: ";
	cin >> Cliente.numero;
	cout << "Digite a quantidade: ";
	cin >> Cliente.quantidade;
	cout << "Digite o preco do produto: ";
	cin >> Cliente.preco;
	
	Cliente.FINALFATURA();
	
	return 0;
}
