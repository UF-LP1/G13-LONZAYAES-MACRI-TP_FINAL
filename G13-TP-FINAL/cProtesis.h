#pragma once
#include <iostream>
#include <string>
#include <list>  
#include "cFecha.h"

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

};

