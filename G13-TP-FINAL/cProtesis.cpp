
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

void cProtesis::SetDimension(float _Dimension)
{
    this->Dimension = _Dimension;
}

void cProtesis::ImprimirProtesis()
{
    cout << "\nTipo de protesis: " << this->Tipo
        << "\nDimension: " << to_string(this->Dimension)
        << "\nMaterial: " << this->Material
        << "\nFabricante: " << this->Fabricante << endl;

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