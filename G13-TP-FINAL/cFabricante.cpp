#include "cFabricante.h"

cFabricante::cFabricante(string _Nombre, string _Direccion, const unsigned int _ID_fabricante_) : ID_fabricante(_ID_fabricante_)
{
	this->Nombre = _Nombre; 
	this->Direccion = _Direccion;

} 

cFabricante::~cFabricante()
{}