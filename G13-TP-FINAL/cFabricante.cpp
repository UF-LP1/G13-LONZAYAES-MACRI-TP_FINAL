#include "cFabricante.h"

cFabricante::cFabricante(string _Nombre, string _Direccion, const unsigned int _ID_fabricante_) : ID_fabricante(_ID_fabricante_)
{
	this->Nombre = _Nombre; 
	this->Direccion = _Direccion;
	this->Materiales.push_back("Acero Inoxidable");
	this->Materiales.push_back("Titanio");
	this->Materiales.push_back("Plastico");

} 

cFabricante::~cFabricante()
{}

cProtesis* cFabricante::DiseñarProtesis(cProtesis Tipo, float Radio, string Alergia, string Miembro)
{
	list <string> Materiales;

	string Material = "";

	for (std::list<string>::iterator it = this->Materiales.begin(); it != this->Materiales.end(); it++) {

		if (Alergia != *it) {
			Material = *it;
			break;
		}
	}

	int posibilidad = rand() % 2;

	cProtesis* Protesis = nullptr;

	if (posibilidad == 0) {

		//	cQuirurgico* Aux = dynamic_cast<cQuirurgico*> (&Lista_protesis(it));  tira error

		/*
		std::time_t t = std::time(nullptr);
		tm* now = std::localtime(&t);
		Dia = now->tm_mday;
		Mes = now->tm_mon;
		Anyo = now->tm_year;
		*/

		int Dia = 29;
		int Mes = 6;
		int Anyo = 2023;


		cFecha* Fecha = new cFecha(Dia, Mes, Anyo);


		if (Radio == 0) {

			cQuirurgico* pedidoQ = new cQuirurgico(Radio, Material, this->Nombre, *Fecha, true, Miembro);

			return pedidoQ;
		}
		else {

			cNo_Quirurgico* pedidoNQ = new cNo_Quirurgico(Radio, Material, this->Nombre, *Fecha, true, Miembro);

			return pedidoNQ;
		}
	}
	return Protesis;
}


