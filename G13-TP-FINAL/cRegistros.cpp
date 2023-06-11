#include "cRegistros.h"

cRegistros :: cRegistros(cHospital Hospital, cMedico Medico, cFecha Fecha_sol, cFecha Fecha_est_entrega, bool Entregada, cPaciente Paciente)
{
	this->hospital = Hospital; 
	this->medico = Medico; 
	this->fecha_sol = Fecha_sol; 
	this->fecha_est_entrega = Fecha_est_entrega; 
	this->entregada = Entregada; 
	this->paciente = Paciente; 
}

cRegistros :: ~cRegistros()
{}
