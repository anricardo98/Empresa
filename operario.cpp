#include <iostream>
using namespace std;
#include "operario.hpp"

string Operario::getNome_fabr(){
	return nome_fabr;
}

void Operario::setNome_fabr(string nome_fabr){
	this->nome_fabr = nome_fabr;
}

