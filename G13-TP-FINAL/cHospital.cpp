#include "cHospital.h"

cHospital::cHospital(string _Nombre, string _Direccion, const unsigned int _Num_identificacion, cListas <cMedico>& _Lista_Medicos, cListas <cPaciente>& _Lista_Pacientes) :Num_identificacion(_Num_identificacion)

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

cMedico cHospital::AsignarMedico()
{
	cMedico *Medico = NULL;

	int Aux = rand() % this->lista_Medicos->Size();

	int Contador = 0;

	this->lista_Medicos->

	if (this->lista_Medicos->Size() > 0) {

		cMedico *it = this->lista_Medicos->Inicio();
		for (cMedico *it = lista_Medicos->Inicio(); it != this->lista_Medicos->Fin(); it++) {

			if (Contador == Aux) return *it;
		}

	}

	return *Medico;
}
