#pragma once
#include <iostream>
#include <string>

using namespace std; 

class cFabricante
{

private:

	string Nombre;
	string Direccion;
	const unsigned int ID_fabricante;

public:

	cFabricante(string _Nombre, string _Direccion, const unsigned int _ID_fabricante);
	~cFabricante();
};


