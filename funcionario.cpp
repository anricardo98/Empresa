#include <iostream>
	using namespace std;

#include "funcionario.hpp"
#include "data.hpp"

string Funcionario::getNome(){
	return nome;
}

void setNome(string nome){
	this->nome = nome;
}

float getSalario(){
	return salario;
}

void setSalario(float salario){
	this->salario = salario;
}

