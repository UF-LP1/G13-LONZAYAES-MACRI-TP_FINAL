#pragma once
#include "cProtesis.h"


class cQuirurgico : public cProtesis 
{
private : 
	bool Osteo_Integrada; 

public : 
	// virtual void Mantenimiento no sabia como ponerlo je 
	cQuirurgico(string _Dimension, string _Material, string _Fabricante, cFecha& _Fecha_fab, bool _OsteoIntegrada);
	~cQuirurgico();
};

