#ifndef PRODUTOSXD_H
#define PRODUTOSXD_H

class ProdutosXD{
	public:
		ProdutosXD();
		int numero;
		int quantidade;
		char descricao[20];
		float preco;
		float FINALFATURA();
		virtual ~ProdutosXD();
	protected:
};

#endif
