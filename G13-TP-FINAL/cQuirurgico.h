#pragma once
#include "cProtesis.h"


class cQuirurgico : public cProtesis 
{
public:
    cQuirurgico(string _Dimension, string _Material, string _Fabricante, cFecha& _Fecha_fab);

    ~cQuirurgico();
};

