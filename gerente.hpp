#ifndef GERENTE_HPP
#define GERENTE_HPP
#include <iostream>
using namespace std;
#include "funcionario.hpp"

class Gerente: public Funcionario{
	protected:
		string senha;
		int numero_func;
	public:
		string getSenha();
		void setSenha(int senha);
		int getNumero_func();
		void setNumero_func(int numero_func);
}

#endif
