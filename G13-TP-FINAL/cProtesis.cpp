
#include "cProtesis.h"

cProtesis::cProtesis(string _Dimension, string _Material, string _Fabricante, cFecha &_Fecha_fab)
{
	this->Dimension = _Dimension; 
	this->Material = _Material;
	this->Fabricante = _Fabricante; 
	this->Fecha_fab = &_Fecha_fab; 

}

cProtesis:: ~cProtesis()
{}
