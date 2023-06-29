#pragma once
#include "cProtesis.h"
class cNo_Quirurgico :
    public cProtesis
{ 
private: 
    bool Robotizada; 
public : 
   //  virtual void Mantenimiento no sabia como declararlo
    cNo_Quirurgico(float_Dimension, string _Material, string _Fabricante, cFecha& _Fecha_fab, bool _Robotizada);
    ~cNo_Quirurgica();

};

