#include "cMedico.h"

cMedico :: cMedico ( string _Nombre, string _Apellido, const unsigned int _Matricula) : Matricula(_Matricula)
{ 
    this->Nombre = _Nombre; 
    this->Apellido = _Apellido; 
} 

cMedico :: ~cMedico()
{}

cProtesis cMedico::AsiganarTipoProtesis(float Radio)
{
    cQuirurgico* Tipo1 = nullptr;
    cNo_Quirurgico* Tipo2 = nullptr;

    if (Radio > 0)return *Tipo1;
    else return *Tipo2;
}

ostream& operator<<(ostream & out, list<cMedico>&Lista)
{
    
    typename::list<cMedico>::iterator it;

    for (it = Lista.begin(); it != Lista.end(); it++) {

        
        out << "--------------------"
            << "\nNombre: " << it->Nombre 
            << "\nApellido: " << it->Apellido
            << "\nMatricula: " << it->Matricula
            << "--------------------" << endl;
    }

    return out;
    
}
