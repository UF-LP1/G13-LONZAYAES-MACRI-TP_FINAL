#include "cHospital.h"

cHospital::cHospital(string _Nombre, string _Direccion, const unsigned int _Num_identificacion, list <cMedico>& _Lista_Medicos, list <cPaciente>& _Lista_Pacientes) :Num_identificacion(_Num_identificacion)

{
	this->nombre = _Nombre;
	this->direccion = _Direccion;
	this->lista_Medicos = &_Lista_Medicos;
	this->lista_Pacientes = &_Lista_Pacientes;

}


cHospital :: ~cHospital()
{}

void cHospital::Agregar(cPaciente *Paciente)
{
	//this->lista_Pacientes + Paciente;
}
