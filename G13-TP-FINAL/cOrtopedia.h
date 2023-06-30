#pragma once
#include <iostream>
#include <string>
#include <list> 
#include "cQuirurgico.h"
#include "cNo_Quirurgico.h"


using namespace std;

class cOrtopedia
{
private:

	string Nombre;
	string Direccion;
	const unsigned int Num_habilitacion;
	list <cProtesis>* Lista_protesis;

public:

	cProtesis* BuscarProtesis(cProtesis &Tipo, float Radio, string Alergia);
	cOrtopedia(string Nombre, string _Direccion, const unsigned int _Num_habilitacion, list <cProtesis>& _Lista_protesis);
	~cOrtopedia();
};

