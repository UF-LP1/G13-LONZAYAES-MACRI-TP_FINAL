#include "cMedico.h"

cMedico :: cMedico ( string Nombre, string Apellido, const unsigned int Matricula)
{ 
    // no se como inicializar el const de la matricula 
    this->nomnbre = Nombre; 
    this->apellido = Apellido; 
} 

cMedico :: ~cMedico()
{}