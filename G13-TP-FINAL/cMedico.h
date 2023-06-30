#pragma once
#include <iostream>
#include <string>
#include <list>
#include "cQuirurgico.h"
#include "cNo_Quirurgico.h"

using namespace std;

class cMedico
{ 
private : 
	  
	string Nombre;
	string Apellido; 
	const unsigned int Matricula; 

public: 

	cMedico(string _Nombre, string _Apellido, const unsigned int _Matricula); 
	~cMedico(); 

	string GetNombre();

	cProtesis AsiganarTipoProtesis(float Radio);

	friend ostream& operator<<(ostream& out, list<cMedico>& Lista);
};

