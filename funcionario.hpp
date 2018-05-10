#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include <iostream>
using namespace std;

class Funcionario : public Data{
	protected:
		string nome;
		float salario;
	public:
		string getNome();
		void setNome(string nome);
		float getSalario();
		void setSalario(float salario);
}


#endif
