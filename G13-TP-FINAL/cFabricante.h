#pragma once
#include <iostream>
#include <string>
#include <list> 

using namespace std; 

class cFabricante
{

private:

	string Nombre;
	const unsigned int ID_fabricante;

public:

	cFabricante(string _Nombre, const unsigned int _ID_fabricante);
	~cFabricante();
};


