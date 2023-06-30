#include "cQuirurgico.h"

cQuirurgico::cQuirurgico(float _Dimension, string _Material, string _Fabricante, cFecha& _Fecha_fab, bool _Osteo_Integrada, string _Tipo) : cProtesis( _Dimension,  _Material,  _Fabricante,  _Fecha_fab, _Tipo)
{
	this->Osteo_Integrada = _Osteo_Integrada;
}

cQuirurgico::~cQuirurgico()
{
}

bool cQuirurgico::Service()
{
	int probabilidad = rand() % 2;

	if (probabilidad == 0)return true;
	else return false;
}
