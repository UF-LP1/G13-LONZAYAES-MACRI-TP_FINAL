#pragma once
#include <iostream>
#include <string>
#include <list> 
#include 'cProtesis.h'

class cOrtopedia
{
private: 

	string nombre; 
	string direccion; 
	const unsigned int num_hablilitacion; 
	list <cProtesis> *lista_protesis; 

public: 
	cOrtopedia(string Nombre, string Direccion, const unsigned int Num_habilitacion, list <cProtesis>& Lista_protesis);
	~cOrtopedia(); 
}

