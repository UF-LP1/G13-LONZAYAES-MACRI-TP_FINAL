#ifndef _CANPA_H_
#define _CANPA_H_

#include <iostream>
#include <string>
#include "cListas.h"
#include "cRegistros.h"
#include "cOrtopedia.h"
#include "cHospital.h"
#include "cFabricante.h"

using namespace std;


class cANPA
{
private:

	cListas <cRegistros> *Lista_Registros;
	cListas <cOrtopedia> *Lista_Ortopedias;
	cListas <cHospital> *Lista_Hospitales;
	cListas <cFabricante>* ListaFabricantes;

public:

	cANPA(cListas <cOrtopedia> &_Lista_Ortopedias, cListas <cHospital> &_Lista_Hospitales, cListas <cFabricante> &_ListaFabricantes);

	~cANPA();

	void AgregarRegistro(cRegistros *Registro);

	void AsignarHospital(cPaciente *Paciente);

	cListas <cHospital>* GetListaHospital();


};
#endif
