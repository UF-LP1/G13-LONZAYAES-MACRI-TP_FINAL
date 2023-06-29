
#include "cProtesis.h"

cProtesis::cProtesis(float _Dimension, string _Material, string _Fabricante, cFecha &_Fecha_fab)
{
	this->Dimension = _Dimension; 
	this->Material = _Material;
	this->Fabricante = _Fabricante; 
	this->Fecha_fab = &_Fecha_fab; 

}

cProtesis:: ~cProtesis()
{}

ostream& operator<<(ostream& out, cListas<cProtesis>& Lista)
{

    for (int i = 0; i < Lista.Size(); i++) {


        out << "--------------------"
            << "\nDimension: " << (Lista)[i].Dimension
            << "\nMaterial: " << (Lista)[i].Material
            << "\nFabricante: " << (Lista)[i].Fabricante
            << "\nFecha de fabricacion: " << (Lista)[i].Fecha_fab

            << "--------------------" << endl;
    }

    return out;
}