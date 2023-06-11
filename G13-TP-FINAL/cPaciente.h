#pragma once
#include <iostream>
#include <string>
#include <list> 

class cPaciente
{
private: 
	
	string nombre; 
	string apellido; 
	const unsigned int dni; 
	string alergia; 
	string hospital; 
	float radio; 


public: 
	cPaciente(string Nombre, string Apellido, const unsigned int DNI, string Alergia, string Hospital, float Radio);
	~cPaciente(); 
};

