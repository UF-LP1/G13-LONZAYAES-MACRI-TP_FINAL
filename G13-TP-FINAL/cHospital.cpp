#include "cHospital.h"

cHospital::cHospital(string _Nombre, string _Direccion, const unsigned int _Num_identificacion, cListas <cMedico>& _Lista_Medicos) :Num_identificacion(_Num_identificacion)

{
	this->nombre = _Nombre;
	this->direccion = _Direccion;
	this->lista_Medicos = &_Lista_Medicos;

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

	for (int i = 0; i < this->lista_Medicos->Size(); i++) { // volr el for

		if (i == Aux)return (*lista_Medicos)[i];
	}

	return *Medico;
}

void cHospital::ImprimirListaPacientes()
{
	cout << this->lista_Pacientes << endl;
}
