#include "cPaciente.h"

cPaciente::cPaciente(string Nombre, string Apellido, const unsigned int DNI, string Alergia, string Hospital, float Radio): DNI(dni)
{
	this->nombre = Nombre; 
	this->apellido = Apellido; 
	this->alergia = Alergia; 
	this->hospital = Hospital; 
	this->radio = Radio; 
}

cPaciente:: ~cPaciente()
{}
