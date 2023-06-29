#pragma once
#include <iostream>
#include <string>
#include "cFecha.h"
#include "cListas.h"

class cProtesis
{
private: 

	float Dimension; 
	string Material; 
	string Fabricante; 
	cFecha *Fecha_fab;

public: 
	cProtesis(float _Dimension, string _Material, string _Fabricante, cFecha &_Fecha_fab);
	~cProtesis(); 

	friend ostream& operator<<(ostream& out, cListas<cProtesis>& Lista);
};

