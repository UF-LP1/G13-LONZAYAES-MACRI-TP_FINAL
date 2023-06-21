#pragma once
#include <iostream>
#include <string>
#include "cFecha.h"
#include "cListas.h"

class cProtesis
{
private: 

	string Dimension; 
	string Material; 
	string Fabricante; 
	cFecha *Fecha_fab;

public: 
	cProtesis(string _Dimension, string _Material, string _Fabricante, cFecha &_Fecha_fab);
	~cProtesis(); 

	friend ostream& operator<<(ostream& out, cListas<cProtesis>& Lista);
};

