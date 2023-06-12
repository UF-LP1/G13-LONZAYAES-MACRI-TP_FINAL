#include "cMedico.h"

cMedico :: cMedico ( string _Nombre, string _Apellido, const unsigned int _Matricula) : Matricula(_Matricula)
{ 
    this->Nombre = _Nombre; 
    this->Apellido = _Apellido; 
} 

cMedico :: ~cMedico()
{}