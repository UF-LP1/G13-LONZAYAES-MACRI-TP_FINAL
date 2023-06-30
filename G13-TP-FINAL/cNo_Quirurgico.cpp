#include "cNo_Quirurgico.h"

cNo_Quirurgico::cNo_Quirurgico(float _Dimension, string _Material, string _Fabricante, cFecha& _Fecha_fab, bool _Robotizada, string _Tipo) : cProtesis( _Dimension,  _Material,  _Fabricante,  _Fecha_fab, _Tipo)
{
	this->Robotizada = _Robotizada;
}

cNo_Quirurgico::~cNo_Quirurgico() {}

void cNo_Quirurgico::Service()
{
	this->SetDimension(this->GetDimension() / 2);
}


