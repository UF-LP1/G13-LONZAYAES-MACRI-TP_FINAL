#ifndef _CHOSPITAL_H_
#define _CHOSPITAL_H_

#include "cListas.h"
#include "cMedico.h"
#include "cPaciente.h"

using namespace std;

class cHospital
{ 
private: 
	string nombre; 
	string direccion; 
	const unsigned int Num_identificacion; 
	cListas <cMedico>* lista_Medicos;
	cListas <cPaciente>* lista_Pacientes;

	//Agregar lista de ortopedias

public: 
	cHospital(string _nombre, string _direccion, const unsigned int _Num_identificacion, cListas <cMedico> &_lista_Medicos);
	~cHospital(); 

	void Agregar(cPaciente* Paciente);

	cMedico AsignarMedico();

	void ImprimirListaPacientes();
		
};
#endif
