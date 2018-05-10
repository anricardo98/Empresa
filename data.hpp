#ifndef DATA_HPP
#define DATA_HPP

class Data{
	protected:
		int dia;
		int mes;
		int ano;
	public:
		int getDia();
		int getMes();
		int getAno();
		void setDia (int dia);
		void setMes (int mes);
		void setAno (int ano);
}


