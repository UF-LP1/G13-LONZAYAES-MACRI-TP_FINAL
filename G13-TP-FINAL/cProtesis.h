#pragma once
#include <iostream>
#include <string>
#include <list>  
#include 'cFecha'

class cProtesis
{
private: 

	string dimension; 
	string material; 
	string fabricante; 
	cFecha fecha_fab;

public: 
	cProtesis(string Dimension, string Material, string Fabricante, cFecha Fecha_fab);
	~cProtesis(); 

};

