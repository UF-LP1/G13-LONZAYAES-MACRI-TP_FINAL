#include "cOrtopedia.h"

cOrtopedia :: cOrtopedia(string Nombre, string Direccion, const unsigned int Num_habilitacion, list <cProtesis> &Lista_protesis)
{
	this->nombre = Nombre; 
	this->direccion = Direccion; 
	this->lista_protesis = Lista_protesis; 

}

cOrtopedia :: ~cOrtopedia()
{}
