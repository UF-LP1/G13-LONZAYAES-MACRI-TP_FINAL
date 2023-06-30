#include "cOrtopedia.h"



cOrtopedia :: cOrtopedia(string _Nombre, string _Direccion, const unsigned int _Num_habilitacion, list <cProtesis> &_Lista_protesis): Num_habilitacion(_Num_habilitacion)
{
	this->Nombre = _Nombre; 
	this->Direccion = _Direccion; 
	this->Lista_protesis = &_Lista_protesis; 

}

cOrtopedia :: ~cOrtopedia()
{}

cProtesis* cOrtopedia::BuscarProtesis(cProtesis &Tipo, float Radio, string Alergia)
{
	//std::list<cProtesis>::iterator it = this->Lista_protesis->begin();

	cProtesis* Protesis = nullptr;

	for (std::list<cProtesis>::iterator it = this->Lista_protesis->begin(); it != this->Lista_protesis->end(); it++) {

	//	cQuirurgico* Aux = dynamic_cast<cQuirurgico*> (&Lista_protesis(it));  tira error

		if (it->GetDimension() == Radio && it->GetMaterial() != Alergia) {

			*Protesis = *it;
			return Protesis;
		}

	}
	return Protesis;
}