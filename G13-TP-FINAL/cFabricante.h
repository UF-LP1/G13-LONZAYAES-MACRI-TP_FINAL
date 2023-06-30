#pragma once
#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <string>
#include "cQuirurgico.h"
#include "cNo_Quirurgico.h"
#include "cFecha.h"
#include <ctime>


using namespace std; 

class cFabricante
{

private:

	string Nombre;
	string Direccion;
	const unsigned int ID_fabricante;
	list <string> Materiales;

public:

	cFabricante(string _Nombre, string _Direccion, const unsigned int _ID_fabricante);
	~cFabricante();

	cProtesis* DiseñarProtesis(cProtesis Tipo, float Radio, string Alergia, string Miembro);
};


