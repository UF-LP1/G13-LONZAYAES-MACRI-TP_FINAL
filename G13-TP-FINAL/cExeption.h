#pragma once
#include <string>
#include <exception>

using namespace std;

class ElementNotFound : public exception
{

	const char* what() const throw() {

		return "El elemento que intenta operar no existe.";
	}
};

/*
excepcion de siempre

throw new exception ("Aca va el error que queremos tirar")
*/

