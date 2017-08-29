#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include <iostream>
#include <string.h>
#include "Despesa.h"

using namespace std;
class ControleDeGastos
{
	public:
		
		setDespesas(double x){
			Despesas = x;
		}
		getDespesas(){
			return Despesas;
		}
		double calculaTotalDeDespesas(double z, double *h){
			double static total = 0;
			total = total + z;
			*h = total;
		}
		int existeDespesaDotipo(char *y, char *k){
			if(!(strcmp(y, k))){
				return 1;
			}else{
				return 0;
			}
			
		}
	
		
	private:
		double Despesas;
};

#endif

