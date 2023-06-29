#pragma once
#ifndef _CPACIENTE_H_
#define _CPACIENTE_H_

#include "cProtesis.h"

using namespace std;

class cPaciente
{
private: 
	
	string Nombre; 
	string Apellido; 
	const unsigned int DNI; 
	string Alergia; 
	float Radio; 

	cProtesis* Protesis;


public: 
	cPaciente(string _Nombre, string _Apellido, const unsigned int _DNI, string _Alergia, float _Radio);
	~cPaciente(); 

	void PedirProtesis(cProtesis* _Protesis);

	string GetNombre();

	string GetApellido();

	string GetAlergia();

	float GetRadio();

	int GetDNI();
	//friend ostream& operator<<(ostream& out, list<cPaciente>& Lista);
};
#endif
