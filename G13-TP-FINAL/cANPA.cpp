#include "cANPA.h"

cANPA::cANPA(cListas<cOrtopedia>& _Lista_Ortopedias, cListas<cHospital>& _Lista_Hospitales)
{
	this->Lista_Registros = NULL;
	this->Lista_Ortopedias = &_Lista_Ortopedias;
	this->Lista_Hospitales = &_Lista_Hospitales;
}

cANPA::~cANPA() {}

void cANPA::AgregarRegistro(cRegistros *Registro)
{
	
	(*Lista_Registros) + Registro;

}
