#pragma once
#include <iostream>
#include <string>
#include <list> 
#include "cHospital.h"
#include "cAnpa.h"
#include "cOrtopedia.h"
#include "cProtesis.h"
#include "cFecha.h"

class cRegistros
{

private: 

	cHospital *Hospital; 
	cMedico *Medico; 
	cFecha *Fecha_sol; 
	cFecha *Fecha_est_entrega; 
	bool Entregada; 
	cPaciente *Paciente; 


public: 

	cRegistros(cHospital &_Hospital, cMedico &_Medico, cFecha &_Fecha_sol, cFecha &_Fecha_est_entrega, bool _Entregada, cPaciente &_Paciente);
	~cRegistros(); 
};

