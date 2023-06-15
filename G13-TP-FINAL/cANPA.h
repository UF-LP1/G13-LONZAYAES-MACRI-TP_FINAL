#pragma once
#include <iostream>
#include <string>
#include "cListas.h"
#include "cRegistros.h"
#include "cOrtopedia.h"
#include "cHospital.h"

using namespace std;


class cANPA
{
private:

	cListas <cRegistros> *Lista_Registros;
	cListas <cOrtopedia> *Lista_Ortopedias;
	cListas <cHospital> *Lista_Hospitales;

public:

	cANPA(cListas <cOrtopedia> &_Lista_Ortopedias, cListas <cHospital> &_Lista_Hospitales);

	~cANPA();

	void AgregarRegistro(cRegistros *Registro);


};

