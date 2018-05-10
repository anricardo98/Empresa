#include <iostream>
using namespace std;

string Gerente::getSenha(){
	return senha;
}

void Gerente::setSenha(int senha){
	this->senha = senha;
}

int Gerente::getNumero_func(){
	return numero_func;
}

void Gerente::setNumero_func(int numero_func){
	this->numero_func = numero_func;
}
