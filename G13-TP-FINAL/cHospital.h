
#pragma once
#include <iostream>
#include <string>
#include <list> 
#include "cMedico.h"
#include "cPaciente.h"

using namespace std;

class cHospital
{ 
private: 
	string nombre; 
	string direccion; 
	const unsigned int Num_identificacion; 
	list <cMedico>* lista_Medicos;
	list <cPaciente>* lista_Pacientes;

public: 
	cHospital(string _nombre, string _direccion, const unsigned int _Num_identificacion, list <cMedico> &_lista_Medicos, list <cPaciente> &_lista_Pacientes);
	~cHospital(); 
		
};

