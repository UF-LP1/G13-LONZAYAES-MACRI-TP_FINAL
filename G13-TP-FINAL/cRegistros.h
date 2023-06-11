#pragma once
#include <iostream>
#include <string>
#include <list> 
#include 'cHospital.h'
#include 'cAnpa.h'
#include 'cOrtopedia.h'
#include 'cProtesis.h'
#include 'cFecha.h'

class cRegistros
{

private: 

	cHospital hospital; 
	cMedico medico; 
	cFecha fecha_sol; 
	cFecha fecha_est_entrega; 
	bool entregada; 
	cPaciente paciente; 


public: 

	cRegistros(cHospital Hospital, cMedico Medico, cFecha Fecha_sol, cFecha Fecha_est_entrega, bool Entregada, cPaciente Paciente);
	~cRegistros(); 
};

