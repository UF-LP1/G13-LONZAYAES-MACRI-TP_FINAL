#ifndef _CREGISTROS_H_
#define _CREGISTROS_H_

#include "cHospital.h"
#include "cOrtopedia.h"
#include "cProtesis.h"
#include "cFecha.h"
#include <string>

class cRegistros
{

private: 

	cHospital* Hospital;
	cMedico *Medico; 
	cFecha *Fecha_sol; 
	int Fecha_est_entrega; 
	bool Entregada; 
	cPaciente *Paciente; 


public: 

	cRegistros(cHospital &_Hospital, cMedico &_Medico, cFecha &_Fecha_sol, int _Fecha_est_entrega, bool _Entregada, cPaciente &_Paciente);
	~cRegistros(); 

	void ImprimirRegistro();
};
#endif
