#include "ProdutosXD.h"
#include <iostream>

using namespace std;

ProdutosXD::ProdutosXD(){
}

float ProdutosXD::FINALFATURA(){
	
	if(quantidade <0){
		quantidade = 0;
		cout << "O preco da sua fatura eh 0." << endl;
		return -1;
	}
	if(preco < 0){
		preco = 0;
		cout << "O preco da sua fatura eh 0." << endl;
		return -2;
	}
	
	cout << "O preco da sua fatura foi " << quantidade*preco << " Reais";
}

ProdutosXD::~ProdutosXD(){
}
