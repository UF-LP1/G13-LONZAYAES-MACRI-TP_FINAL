#ifndef _CHOSPITAL_H_
#define _CHOSPITAL_H_

#include "cListas.h"
#include "cMedico.h"
#include "cPaciente.h"
#include "cOrtopedia.h"

using namespace std;

class cHospital
{ 
private: 
	string nombre; 
	string direccion; 
	const unsigned int Num_identificacion; 
	cListas <cMedico>* lista_Medicos;
	cListas <cPaciente>* lista_Pacientes;
	cListas<cOrtopedia>* lista_ortopedias; 
	

	//Agregar lista de ortopedias

public: 
	cHospital(string _nombre, string _direccion, const unsigned int _Num_identificacion, cListas <cMedico> &_lista_Medicos, cListas<cOrtopedia>&_lista_ortopedias);
	~cHospital(); 

	void Agregar(cPaciente* Paciente);

	cMedico AsignarMedico();

	void ImprimirListaPacientes();
		
};
#endif
