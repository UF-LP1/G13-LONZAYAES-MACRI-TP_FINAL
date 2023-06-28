#include "cOrtopedia.h"

cOrtopedia :: cOrtopedia(string _Nombre, string _Direccion, const unsigned int _Num_habilitacion, cListas <cProtesis> &_Lista_protesis): Num_habilitacion(_Num_habilitacion)
{
	this->Nombre = _Nombre; 
	this->Direccion = _Direccion; 
	this->Lista_protesis = &_Lista_protesis; 

}

cOrtopedia :: ~cOrtopedia()
{}
