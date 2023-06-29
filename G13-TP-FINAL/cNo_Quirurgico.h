#pragma once
#include "cProtesis.h"
class cNo_Quirurgico :
    public cProtesis
{ 
private: 
    bool robotizada; 
public : 
   //  virtual void Mantenimiento no sabia como declararlo
    cNo_Quirurgico(string _Dimension, string _Material, string _Fabricante, cFecha& _Fecha_fab, bool _Robotizada);
    ~cNo_Quirurgica();

};

