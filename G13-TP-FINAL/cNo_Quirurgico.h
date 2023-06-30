#pragma once
#include "cProtesis.h"
class cNo_Quirurgico :
    public cProtesis
{ 
private: 
    bool Robotizada; 
public : 
   //  virtual void Mantenimiento no sabia como declararlo
    cNo_Quirurgico(float _Dimension, string _Material, string _Fabricante, cFecha& _Fecha_fab, bool _Robotizada, string Tipo);

    ~cNo_Quirurgico();

    void Service();


};

