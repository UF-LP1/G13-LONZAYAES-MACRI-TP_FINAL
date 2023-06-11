
#pragma once
#include <iostream>
#include <string>
#include <list> 
#include 'cMedico.h'
#include 'cPaciente.h'

using namespace std;

class cHospital
{ 
private: 
	string nombre; 
	string direccion; 
	const unsigned int num_identificacion; 
	list <cMedico>* lista_Medicos;
	list <cPaciente>* lista_Pacientes;

public: 
	cHospital(string nombre, string direccion, const unsigned int num_identificacion, list <cMedico> &lista_Medicos, list <cPaciente> &lista_Pacientes);
	~cHospital(); 
		
};

