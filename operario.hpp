#ifndef OPERARIO_HPP
#define OPERARIO_HPP
#include "funcionario.hpp"
#include <iostream>
using namespace std;

class Operario: public Funcionario{
	protected:
		string nome_fabr;
	public:
		string getNome_fabr();
		void setNome_fabr(string nome_fabr);

}

#endif
