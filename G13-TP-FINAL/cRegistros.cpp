#include "cRegistros.h"

cRegistros :: cRegistros(cHospital &_Hospital, cMedico &_Medico, cFecha &_Fecha_sol, cFecha &_Fecha_est_entrega, bool _Entregada, cPaciente &_Paciente)
{
	this->Hospital = &_Hospital; 
	this->Medico = &_Medico; 
	this->Fecha_sol = &_Fecha_sol; 
	this->Fecha_est_entrega = &_Fecha_est_entrega; 
	this->Entregada = _Entregada; 
	this->Paciente = &_Paciente; 
}

cRegistros :: ~cRegistros()
{}
