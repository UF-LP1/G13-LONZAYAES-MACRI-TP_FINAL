#include "Funciones.h"

void CargarFabricantes(cListas<cFabricante>& ListaFabricantes)
{

	cFabricante* ImplantesOrtopedicos = new cFabricante("IMECO", "Calle Combet 7391", 8429);

	cFabricante* ProtesisDental = new cFabricante("MHC Odontologia", "Av. José Gervasio Artigas 5014", 8474);

	cFabricante* ProtesisQuirurgica = new cFabricante("FICO ALEMANA", "Montevideo 865", 8436);

	ListaFabricantes.Agregar(ImplantesOrtopedicos);
	ListaFabricantes.Agregar(ProtesisDental);
	ListaFabricantes.Agregar(ProtesisQuirurgica);


}



void CargarHospitales(cListas <cHospital>& ListaHospitales) {

/*en esta funcion cargamos por un lado listas con medicos para cada hospital y despues a
  cada hospital le cargamos su lista correspondiente de medicos (esto es para que todos los hospitales
  no tengan exactamente la misma lista de medicos), si bien hay medicos vinculados a más de un hospital
  la idea es que todos los hospitales tengan listas de medicos distintas entre si !
*/



	cListas <cMedico> ListaMedicos_favaloro; 
	cListas <cMedico> ListaMedicos_clinicas;
	cListas<cMedico> ListasMedicos_swiss; 
	cListas <cMedico> ListasMedicos_modelo; 

	cMedico* Medico1 = new cMedico("Callie", "Torres", 44456);
	cMedico* Medico2 = new cMedico("Derek", "Shepherd", 33467);
	cMedico* Medico3 = new cMedico("Miranda", "Bailey", 28906);
	cMedico* Medico4 = new cMedico("Arizona", "Robins", 45120);
	cMedico* Medico5 = new cMedico("Meredith", "Grey", 66892); 
	cMedico* Medico6 = new cMedico("Owen", "Haunt", 333456);
	cMedico* Medico7 = new cMedico("Cristina", "Yang", 123456);
	cMedico* Medico8 = new cMedico("Teddy", "Atman", 333567);
	cMedico* Medico9 = new cMedico("Mark", "Stone", 332246);
	cMedico* Medico10 = new cMedico("Adison", "Montgomery", 677456);
	cMedico* Medico11= new cMedico("Amelia", "Shepherd", 847456);
	cMedico* Medico12= new cMedico("Geoge", "Omali", 284456);
	cMedico* Medico13= new cMedico("Richard", "webber", 691456);
	cMedico* Medico14 = new cMedico("Alex", "karev", 288457);
	cMedico* Medico15= new cMedico("April", "Kepner", 453531);
	cMedico* Medico16 = new cMedico("Izzie", "Stevens", 333456);


	ListaMedicos_favaloro.Agregar(Medico1); 
	ListaMedicos_favaloro.Agregar(Medico2);
    ListaMedicos_favaloro.Agregar(Medico3);
	ListaMedicos_favaloro.Agregar(Medico4);
	ListaMedicos_favaloro.Agregar(Medico16); 
	ListaMedicos_clinicas.Agregar(Medico5);
	ListaMedicos_clinicas.Agregar(Medico6);
	ListaMedicos_clinicas.Agregar(Medico7);
	ListaMedicos_clinicas.Agregar(Medico8);
	ListasMedicos_modelo.Agregar(Medico9);
	ListasMedicos_modelo.Agregar(Medico10);
	ListasMedicos_modelo.Agregar(Medico2);
	ListasMedicos_modelo.Agregar(Medico11);
	ListasMedicos_modelo.Agregar(Medico12);
	ListasMedicos_swiss.Agregar(Medico13);
	ListasMedicos_swiss.Agregar(Medico14);
	ListasMedicos_swiss.Agregar(Medico15);
	ListasMedicos_swiss.Agregar(Medico16);



	 
	cHospital* Hfavaloro = new cHospital("Hospital Favaloro", "Avenida Belgrano 234", 456789 ,ListaMedicos_favaloro);
	cHospital* Hclinicas = new cHospital("Hospital de clinicas", "Avenida Paso 123", 456723,ListaMedicos_clinicas);
	cHospital* Hswissmedical = new cHospital("Hospital swiss Medical", "Solis 223", 206789,ListasMedicos_swiss);
	cHospital* Hmodelo = new cHospital("Sanatorio Modelo", "Colon 348", 355689,ListasMedicos_modelo);
}


