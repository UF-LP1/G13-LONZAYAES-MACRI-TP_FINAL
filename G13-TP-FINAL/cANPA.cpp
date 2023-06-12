#include "cANPA.h"

cANPA::cANPA(list<cRegistros>& _Lista_Registros, list<cOrtopedia>& _Lista_Ortopedias, list<cHospital>& _Lista_Hospitales)
{
	this->Lista_Registros = NULL;
	this->Lista_Ortopedias = &_Lista_Ortopedias;
	this->Lista_Hospitales = &_Lista_Hospitales;
}

cANPA::~cANPA()
{
}
