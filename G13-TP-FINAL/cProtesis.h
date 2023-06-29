#pragma once
#include <iostream>
#include <string>
#include "cFecha.h"
#include <list>

class cProtesis
{
private: 

	float Dimension; 
	string Material; 
	string Fabricante; 
	cFecha *Fecha_fab;

	string Tipo;

public: 
	cProtesis(float _Dimension, string _Material, string _Fabricante, cFecha &_Fecha_fab, string Tipo);
	~cProtesis(); 

	float GetDimension();

	string GetMaterial();

	friend ostream& operator<<(ostream& out, list<cProtesis>& Lista);
};

