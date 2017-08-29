#ifndef DESPESA_H
#define DESPESA_H
#include <string>
#include <iostream>

using namespace std;

class Despesa
{
	public:
		void setDespesa(double v, char *t){
			int i;
			valor = v;
			for(i=0;i<30;i++){
				tipodegasto[i] = t[i]; 
			}
			
		}
		
		double getDespesa1(){
			return valor;
		}
		string getDespesa2(){
			return tipodegasto;
		}
		
	private:
		double valor;
		char tipodegasto[30];
};

#endif

