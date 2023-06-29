#include "cPaciente.h"

cPaciente::cPaciente(string _Nombre, string _Apellido, const unsigned int _DNI, string _Alergia, float _Radio): DNI(_DNI)
{
	
	this->Nombre = _Nombre; 
	this->Apellido = _Apellido; 
	this->Alergia = _Alergia; 
	this->Radio = _Radio; 

	this->Protesis = NULL;
}

cPaciente:: ~cPaciente(){

	this->Protesis = NULL;
}

void cPaciente::PedirProtesis(cProtesis* _Protesis)
{
	this->Protesis = _Protesis;
}

string cPaciente::GetNombre()
{
	return this->Nombre;
}

string cPaciente::GetApellido()
{
	return this->Apellido;
}

string cPaciente::GetAlergia()
{
	return this->Alergia;
}

float cPaciente::GetRadio()
{
	return this->Radio;
}

int cPaciente::GetDNI()
{
	return this->DNI;
}


/*ostream& operator<<(ostream& out, list<cPaciente>& Lista)
{

	typename::list<cPaciente>::iterator it;

	for (it = Lista.begin(); it != Lista.end(); it++) {


		out << "--------------------"
			<< "\nNombre: " << it->Nombre
			<< "\nApellido: " << it->Apellido
			<< "\nDNI: " << it->DNI
			<< "\nAlergia: " << it->Alergia
			<< "\nRadio: " << to_string(it->Radio)
			<< "--------------------" << endl;
	}

	return out;
}*/