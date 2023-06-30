#pragma once
#include "cProtesis.h"


class cQuirurgico : public cProtesis 
{

private: 

    bool Osteo_Integrada;

public:

    cQuirurgico(float _Dimension, string _Material, string _Fabricante, cFecha& _Fecha_fab, bool _Osteo_Integrada, string _Tipo);

    ~cQuirurgico();

    bool Service();
};

