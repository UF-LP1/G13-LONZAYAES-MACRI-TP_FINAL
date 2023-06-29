
#include "cProtesis.h"

cProtesis::cProtesis(float _Dimension, string _Material, string _Fabricante, cFecha &_Fecha_fab, string Tipo)
{
	this->Dimension = _Dimension; 
	this->Material = _Material;
	this->Fabricante = _Fabricante; 
	this->Fecha_fab = &_Fecha_fab; 

}

cProtesis:: ~cProtesis()
{}

float cProtesis::GetDimension()
{
    return this->Dimension;
}

string cProtesis::GetMaterial()
{
    return this->Material;
}

ostream& operator<<(ostream& out, list<cProtesis>& Lista)
{

    typename::list<cProtesis>::iterator it;

    for (it = Lista.begin(); it != Lista.end(); it++) {


        out << "--------------------"
            << "\nDimension: " << it->Dimension
            << "\nMaterial: " << it->Material
            << "\nFabricante: " << it->Fabricante
            << "\nFecha de fabricacion: " << it->Fecha_fab

            << "--------------------" << endl;
    }

    return out;
}