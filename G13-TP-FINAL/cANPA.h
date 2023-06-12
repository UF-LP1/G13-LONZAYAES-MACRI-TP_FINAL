#pragma once
#include <iostream>
#include <string>
#include <list>
#include "cRegistros.h"
#include "cOrtopedia.h"
#include "cHospital.h"

using namespace std;


class cANPA
{
private:

	list <cRegistros> *Lista_Registros;
	list <cOrtopedia> *Lista_Ortopedias;
	list <cHospital> *Lista_Hospitales;

public:

	cANPA(list <cRegistros> &_Lista_Registros, list <cOrtopedia> &_Lista_Ortopedias, list <cHospital> &_Lista_Hospitales);

	~cANPA();

};

