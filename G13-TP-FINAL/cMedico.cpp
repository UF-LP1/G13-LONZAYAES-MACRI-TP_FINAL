#include "cMedico.h"

cMedico :: cMedico ( string _Nombre, string _Apellido, const unsigned int _Matricula) : Matricula(_Matricula)
{ 
    this->Nombre = _Nombre; 
    this->Apellido = _Apellido; 
} 

cMedico :: ~cMedico()
{}

ostream& operator<<(ostream & out, cListas<cMedico>&Lista)
{
    
    for (int i = 0; i < Lista.Size(); i++) {

        
        out << "--------------------"
            << "\nNombre: " << (Lista)[i].Nombre 
            << "\nApellido: " << (Lista)[i].Apellido
            << "\nMatricula: " << (Lista)[i].Matricula
            << "--------------------" << endl;
    }

    return out;
    
}
