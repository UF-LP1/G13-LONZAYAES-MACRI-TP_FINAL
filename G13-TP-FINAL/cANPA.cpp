#include "cANPA.h"

cANPA::cANPA(list<cHospital>& _Lista_Hospitales, list <cFabricante>& _ListaFabricantes)
{
	this->Lista_Registros = NULL;
	this->Lista_Hospitales = &_Lista_Hospitales;
	this->ListaFabricantes = &_ListaFabricantes;
}

cANPA::~cANPA() {}

cHospital cANPA::AsignarHospital()
{

	int Pos = rand() % this->Lista_Hospitales->size();

	int Contador = 0;

	typename::list<cHospital>::iterator it;

	for (it = this->Lista_Hospitales->begin(); it != this->Lista_Hospitales->end(); it++) {

		if (Pos == Contador)return *it;
	}


}

void cANPA::Registrar(cHospital Hospital, cMedico Medico, cFecha FechaS, cFecha FechaE, bool Entregado, cPaciente Paciente)
{
	//cRegistros(cHospital & _Hospital, cMedico & _Medico, cFecha & _Fecha_sol, cFecha & _Fecha_est_entrega, bool _Entregada, cPaciente & _Paciente);
	cRegistros* Registro = new cRegistros(Hospital, Medico, FechaS, FechaE, Entregado, Paciente);

	this->Lista_Registros->push_back(*Registro);
}

list<cHospital>* cANPA::GetListaHospital()
{
	return this->Lista_Hospitales;
}

cFabricante cANPA::AsignarFabricante()
{

	int Aux = rand() % this->ListaFabricantes->size();

	int Contador = 0;


	for (std::list<cFabricante>::iterator it = this->ListaFabricantes->begin(); it != this->ListaFabricantes->end(); it++) {

		if (Aux == Contador) {

			return *it;
		}
	}

}

void cANPA::operator+(cRegistros* Registro)
{
	this->Lista_Registros->push_back(*Registro);
}


