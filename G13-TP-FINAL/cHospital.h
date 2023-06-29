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
	list <cMedico>* lista_Medicos;
	list <cPaciente>* Lista_Pacientes;
	list<cOrtopedia>* lista_ortopedias;
	
	//Agregar lista de ortopedias

public: 
	cHospital(string _nombre, string _direccion, const unsigned int _Num_identificacion, list <cMedico> &_lista_Medicos, list<cOrtopedia>&_lista_ortopedias, list <cPaciente>& _Lista_Pacientes);
	~cHospital(); 

	cMedico AsignarMedico();

	cProtesis OtorgarProtesis(cPaciente* Paciente);

	cProtesis PedirProtesis(cProtesis* Protesis);

	void ImprimirListaPacientes();

	friend ostream& operator<<(ostream& out, list<cPaciente>& Lista);

	void operator+(cPaciente* Paciente);

	cPaciente operator[](int pos);
		
};
#endif
