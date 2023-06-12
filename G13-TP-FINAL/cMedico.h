#pragma once
#include <iostream>
#include <string>
#include <list> 

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
};

