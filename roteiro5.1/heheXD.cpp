#include "heheXD.h"
#include <iostream>

using namespace std;


void heheXD::AvancarDia(){
	
	Dia++;
	
	if(Dia >31 && (Mes == 1 || Mes == 3 || Mes == 5 || Mes == 7 || Mes == 8 || Mes == 10 || Mes == 12)){
		Dia = 1;
		Mes++;
	}else if(Dia > 30){
		Dia = 1;
		Mes++;
	}
	
	if(Mes > 12){
		Mes = 1;
		Ano++;
	}
}

