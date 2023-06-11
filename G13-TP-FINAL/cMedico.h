#pragma once
#include <iostream>
#include <string>
#include <list> 

class cMedico
{ 
private : 
	  
	string nombre;
	string Apellido; 
	const unsigned int matricula; 

public: 

	cMedico(string Nombre, string Apellido, const unsigned int Matricula); 
	~cMedico(); 
};

