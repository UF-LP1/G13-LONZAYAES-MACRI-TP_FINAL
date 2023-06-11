#include "cHospital.h"

cHospital::cHospital(string Nombre, string Direccion, const unsigned int Num_identificacion, list <cMedico>& Lista_Medicos, list <cPaciente>& Lista_Pacientes) :Num_identificacion(num_identificacion)

// no se como inicializar el numero de identificacion que es const
{
	this->nombre = Nombre;
	this->direccion = Direccion;
	this->lista_Medicos = Lista_Medicos;
	this->lista_Pacientes = Lista_Pacientes;

}


cHospital :: ~cHospital()
{}