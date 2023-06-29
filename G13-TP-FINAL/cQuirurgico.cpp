#include "cQuirurgico.h"

class cQuirurgico :: cQuirurgico(string _Dimension, string _Material, string _Fabricante, cFecha& _Fecha_fab, bool _OsteoIntegrada);
{
	this->Dimension = _Dimension;
	this->Material = _Material;
	this->Fabricante = _Fabricante;
	this->Fecha_fab = &_Fecha_fab;
	this->Osteo_Integrada = _OsteoIntegrada;
}
class ccQuirurgico:: ~cQuirurgico();