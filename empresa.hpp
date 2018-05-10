#ifndef EMPRESA_HPP
#define EMPRESA_HPP
#include <vector>


class Empresa{
	protected:
		string cnpj;
		string n_empresa;
		std::vector(Funcionario*) lista;
		std::vector(Funcionario*) novos;
	public:
		string getCnpj();
		void setCnpj(string cnpj);
		string getN_empresa;
		void setN_empresa(string n_empresa);
		void adicionar(Funcionario *empre);
		void funcionarios(Funcionario *novo);
		void aumento();
		void novo();
		friend istream& operator >> (istream &i, Empresa x);
		friend ostream& operator >> (ostream &o, Empresa x);
					
}
