#include "cFabricante.h"

cFabricante::cFabricante(string _Nombre, const unsigned int _ID_fabricante_) : ID_fabricante(_ID_fabricante_)
{
	this->Nombre = _Nombre; 

} 

cFabricante::~cFabricante()
{}