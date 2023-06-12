#include "cPaciente.h"

cPaciente::cPaciente(string _Nombre, string _Apellido, const unsigned int _DNI, string _Alergia, string _Hospital, float _Radio): DNI(_DNI)
{
	this->Nombre = _Nombre; 
	this->Apellido = _Apellido; 
	this->Alergia = _Alergia; 
	this->Hospital = _Hospital; 
	this->Radio = _Radio; 
}

cPaciente:: ~cPaciente()
{}
