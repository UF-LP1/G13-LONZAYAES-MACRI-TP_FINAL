#pragma once
#include <iostream>
#include <string>
#include <list> 
#include "cProtesis.h"

using namespace std;

class cOrtopedia
{
private:

	string Nombre;
	string Direccion;
	const unsigned int Num_habilitacion;
	list <cProtesis>* Lista_protesis;

public:
	cOrtopedia(string Nombre, string _Direccion, const unsigned int _Num_habilitacion, list <cProtesis>& _Lista_protesis);
	~cOrtopedia();
};

