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

list<cHospital>* cANPA::GetListaHospital()
{
	return this->Lista_Hospitales;
}

void cANPA::operator+(cRegistros* Registro)
{
	this->Lista_Registros->push_back(*Registro);
}


