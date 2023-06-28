#include "cANPA.h"

cANPA::cANPA(cListas<cOrtopedia>& _Lista_Ortopedias, cListas<cHospital>& _Lista_Hospitales, cListas <cFabricante>& _ListaFabricantes)
{
	this->Lista_Registros = NULL;
	this->Lista_Ortopedias = &_Lista_Ortopedias;
	this->Lista_Hospitales = &_Lista_Hospitales;
	this->ListaFabricantes = &_ListaFabricantes;
}

cANPA::~cANPA() {}

void cANPA::AgregarRegistro(cRegistros *Registro)
{
	
	(*Lista_Registros) + Registro;

}

void cANPA::AsignarHospital(cPaciente* Paciente)
{

	int Pos = rand() % this->Lista_Hospitales->Size();

	(*Lista_Hospitales)[Pos].Agregar(Paciente);

}

cListas<cHospital>* cANPA::GetListaHospital()
{
	return this->Lista_Hospitales;
}
