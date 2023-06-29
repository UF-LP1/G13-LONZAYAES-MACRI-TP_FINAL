#include "cQuirurgico.h"

cQuirurgico::cQuirurgico(string _Dimension, string _Material, string _Fabricante, cFecha& _Fecha_fab, bool _Osteo_Integrada) : cProtesis( _Dimension,  _Material,  _Fabricante,  _Fecha_fab)
{
}

cQuirurgico::~cQuirurgico()
{
}
