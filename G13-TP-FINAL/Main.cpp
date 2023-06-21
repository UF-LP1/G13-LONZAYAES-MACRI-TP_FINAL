#include "Funciones.h"


/*
Orden de accion:
-Un paciente va al AMPA para ser registrado en algun hospital
-El paciente va a un hospital del cual esta registrado como paciente
-Se le asigna un medico
-Si tiene un radio mayor a cero significa que esta amputado y su protesis sera NO quirujica, de lo contrario, sera quirurjica
-En funcion a la protesis se selecciona un material y que protesis va
-El medico envia el pedido de protesis al hospital
-El hospital pide a las ortopedias asociadas dicha protesis
-Si esta se retira de la la lista de stock y se le otroga al paciente, en caso contrario se busca otra ortopedia
-Si ninguna ortopedia la tiene al ANPA que refiera un fabricante para que la haga
-Si este se niega se busca otro hasta que se acepte
*/

int main() {

	cListas <cFabricante> ListaFabricantes;
	
	cListas <cHospital> ListaHospitales; 
	cListas <cProtesis> ListaProtesis; 

	//----------------------------------- INICIALIZACION DE PACIENTES-----------------------------------------//
	cPaciente* Paciente1 = new cPaciente("Rosario", "Lonzayes", 42833137, "titanio", 2); 
	cPaciente* Paciente2 = new cPaciente("Ana", "Perez", 45833137, "plastico", 0.5);
	cPaciente* Paciente3 = new cPaciente("Clarita", "Crux", 42833667, "ninguna", 0);
	cPaciente* Paciente4 = new cPaciente("Poni", "Ponex", 44563137, "titanio", 3);
	cPaciente* Paciente5 = new cPaciente("Cindy", "Aldet", 42833987, "titanio", 2);
	cPaciente* Paciente6 = new cPaciente("Pampa", "Pamplix", 32433137, "ninguna", 0.7);
	cPaciente* Paciente7 = new cPaciente("Ezequiel", "Str", 42571137, "titanio",0);
	cPaciente* Paciente8 = new cPaciente("Sol", "Segura", 42833222, "acero", 4);
	cPaciente* Paciente9 = new cPaciente("Sol", "Mala", 42831627, "cobalto", 2.6);
	cPaciente* Paciente10 = new cPaciente("Franco", "Pessana", 33233137, "ninguna",0);
	cPaciente* Paciente11= new cPaciente("Troy", "Bolton", 23543137, "ninguna", 0);
	cPaciente* Paciente12= new cPaciente("Sharpay", "Evans", 65233137, "ninguna", 0.9);
//----------------------------------------------------------------------------------------------------------------//

	CargarFabricantes(ListaFabricantes);

	CargarHospitales(ListaHospitales); 

	 






	return 0;
};