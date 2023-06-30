#include "cRegistros.h"

cRegistros :: cRegistros(cHospital &_Hospital, cMedico &_Medico, cFecha &_Fecha_sol, int _Fecha_est_entrega, bool _Entregada, cPaciente &_Paciente)
{
	this->Hospital = &_Hospital; 
	this->Medico = &_Medico; 
	this->Fecha_sol = &_Fecha_sol; 
	this->Fecha_est_entrega = _Fecha_est_entrega; 
	this->Entregada = _Entregada; 
	this->Paciente = &_Paciente; 
}

cRegistros :: ~cRegistros()
{}

void cRegistros::ImprimirRegistro()
{
	string Estado = "";
	if (this->Entregada) Estado = "Entregado";
	else Estado = "En espera";
	cout << "\n------------------------------"
		<< "\nNombre: " << this->Paciente->GetNombre() << " " << this->Paciente->GetApellido()
		<< "\nHospital: " << this->Hospital->GetNombre()
		<< "\nMedico: " << this->Medico->GetNombre()
		<< "\nFecha de solicitud: " << this->Fecha_sol
		<< "\nDias hasta la entrega: " << to_string(this->Fecha_est_entrega)
		<< "\nEstado: " << Estado
		<< "------------------------------" << endl;
}



