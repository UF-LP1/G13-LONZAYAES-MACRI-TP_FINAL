#pragma once
#include <iostream>
#include <string>
#include <list> 

using namespace std;

class cPaciente
{
private: 
	
	string Nombre; 
	string Apellido; 
	const unsigned int DNI; 
	string Alergia; 
	string Hospital; 
	float Radio; 


public: 
	cPaciente(string _Nombre, string _Apellido, const unsigned int _DNI, string _Alergia, string _Hospital, float _Radio);
	~cPaciente(); 

	void PedirProtesis();
};

