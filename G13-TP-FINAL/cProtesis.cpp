
#include "cProtesis.h"

cProtesis::cProtesis(string Dimension, string Material, string Fabricante, cFecha Fecha_fab)
{
	this->dimension = Dimension; 
	this->material = Material;
	this->fabricante = Fabricante; 
	this->fecha_fab = Fecha_fab; 

}

cProtesis:: ~cProtesis()
{}
