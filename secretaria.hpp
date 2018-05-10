#ifndef SECRETARIA_HPP
#define SECRETARIA_HPP
#include <iostream>
using namespace std;
#include "funcionario.hpp"

class Secretaria: public Funcionario{
	protected:
		string ramal;
	public:
		string getRamal();
		void setRamal(string ramal);
}

