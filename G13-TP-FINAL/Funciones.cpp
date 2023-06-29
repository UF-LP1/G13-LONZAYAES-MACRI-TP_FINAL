#include "Funciones.h"

void CargarFabricantes(cListas<cFabricante> &ListaFabricantes)
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

	//Agregar ortopedias igual q con los medicos

	cListas <cMedico> ListaMedicos_favaloro;
	cListas <cMedico> ListaMedicos_clinicas;
	cListas<cMedico> ListasMedicos_swiss;
	cListas <cMedico> ListasMedicos_modelo;

	cListas<cOrtopedia> ListaOrtopedias_favaloro;
	cListas<cOrtopedia> ListaOrtopedias_clinicas;
	cListas<cOrtopedia> ListaOrtopedias_swiss;
	cListas<cOrtopedia> ListaOrtopedias_modelo; 
	cListas <cProtesis> ListaProtesis1;
	cListas <cProtesis> ListaProtesis2;
	cListas <cProtesis> ListaProtesis3;



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
	cMedico* Medico11 = new cMedico("Amelia", "Shepherd", 847456);
	cMedico* Medico12 = new cMedico("Geoge", "Omali", 284456);
	cMedico* Medico13 = new cMedico("Richard", "webber", 691456);
	cMedico* Medico14 = new cMedico("Alex", "karev", 288457);
	cMedico* Medico15 = new cMedico("April", "Kepner", 453531);
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




	cHospital* Hfavaloro = new cHospital("Hospital Favaloro", "Avenida Belgrano 234", 456789, ListaMedicos_favaloro);
	cHospital* Hclinicas = new cHospital("Hospital de clinicas", "Avenida Paso 123", 456723, ListaMedicos_clinicas);
	cHospital* Hswissmedical = new cHospital("Hospital swiss Medical", "Solis 223", 206789, ListasMedicos_swiss);
	cHospital* Hmodelo = new cHospital("Sanatorio Modelo", "Colon 348", 355689, ListasMedicos_modelo);

	ListaHospitales.Agregar(Hfavaloro);
	ListaHospitales.Agregar(Hclinicas);
	ListaHospitales.Agregar(Hswissmedical);
	ListaHospitales.Agregar(Hmodelo);


	

	cFecha* Fecha1 = new cFecha("3", "5", "2021");
	cFecha* Fecha2 = new cFecha("3", "6", "2020");
	cFecha* Fecha3 = new cFecha("4", "7", "2023");
	cFecha* Fecha4 = new cFecha("4", "8", "2021");
	cFecha* Fecha5 = new cFecha("5", "9", "2021");
	cFecha* Fecha6 = new cFecha("6", "10", "2019");
	cFecha* Fecha7 = new cFecha("7", "11", "2020");
	cFecha* Fecha8 = new cFecha("8", "12", "2023");
	cFecha* Fecha9 = new cFecha("9", "13", "2022");
	cFecha* Fecha10 = new cFecha("9", "12", "2022");
	cFecha* Fecha11= new cFecha("10", "02", "2022");
	cFecha* Fecha12 = new cFecha("11", "05", "2022");
	cFecha* Fecha13 = new cFecha("31", "06", "2021");

	// protesis 

	cQuirurgico* protesis1 = new cQuirurgico(0 "Acero inoxidable", "IMECO", *Fecha1, true);
	cQuirurgico* protesis2 = new cQuirurgico(0, "titanio", "Bernet", *Fecha2, true);
	cQuirurgico* protesis3 = new cQuirurgico(0, "plastico", "IMECO", *Fecha3, true);
	cQuirurgico* protesis4 = new cQuirurgico(0, "titanio", "Diaz", *Fecha4, false);
	cQuirurgico* protesis5 = new cQuirurgico(0, "Acero inoxidable", "Rodriguez", *Fecha5, false);
	cQuirurgico* protesis6 = new cQuirurgico(0, "titanio", "Lala", *Fecha6, true);
	cQuirurgico* protesis7 = new cQuirurgico(0, "titanio", "Pony", *Fecha7, false);
	cQuirurgico* protesis8 = new cQuirurgico(0, "titanio", "Diaz", *Fecha8, false);
	cQuirurgico* protesis9 = new cQuirurgico(0, "Acero inoxidable", "IMECO", *Fecha9,true);
	cQuirurgico* protesis10 = new cQuirurgico(0, "Acero inoxidable", "Bernet", *Fecha10, true);

	cNo_Quirurgico*protesis11 = new cNo_Quirurgico(2.5, "Acero inoxidable", "Bernet", *Fecha10, true);
	cNo_Quirurgico* protesis12 = new cNo_Quirurgico(3.5, "plastico", "Bernet", *Fecha5, false);
	cNo_Quirurgico* protesis13 = new cNo_Quirurgico(4.5, "titanio", "Bernet", *Fecha4, true);
	cNo_Quirurgico* protesis14 = new cNo_Quirurgico(3.5, "Acero inoxidable", "Bernet", *Fecha2, true);
	cNo_Quirurgico* protesis15 = new cNo_Quirurgico(2.5, "Acero inoxidable", "Bernet", *Fecha9, false);
	cNo_Quirurgico* protesis16 = new cNo_Quirurgico(1.5, "Acero inoxidable", "Bernet", *Fecha11, true);
	cNo_Quirurgico* protesis11 = new cNo_Quirurgico(2.5, "plastico", "Bernet", *Fecha19, false);

	// cargo las distintas listas de protesis, asi no todas las ortopedias tienen las mismas listas 

	ListaProtesis1.Agregar(protesis1);
	ListaProtesis1.Agregar(protesis2);
	ListaProtesis1.Agregar(protesis3);
	ListaProtesis1.Agregar(protesis4);
	ListaProtesis1.Agregar(protesis5);
	ListaProtesis1.Agregar(protesis6); 

	ListaProtesis2.Agregar(protesis4);
    ListaProtesis2.Agregar(protesis5);
    ListaProtesis2.Agregar(protesis6);
    ListaProtesis2.Agregar(protesis1);
    ListaProtesis2.Agregar(protesis2); 

	ListaProtesis3.Agregar(protesis7); 
	ListaProtesis3.Agregar(protesis8);
	ListaProtesis3.Agregar(protesis9);
	ListaProtesis3.Agregar(protesis10);
	ListaProtesis3.Agregar(protesis11);
	ListaProtesis3.Agregar(protesis12);




	//Hacer objetos para cargar en las listas

	cOrtopedia* ortopedia1 = new cOrtopedia("Ortopedia ASTRAL", "Lautaro 410", 8029, ListaProtesis1);
	cOrtopedia* ortopedia2 = new cOrtopedia("Ortopedia Rosario", "Rosario 888", 1474, ListaProtesis2);
	cOrtopedia* ortopedia3 = new cOrtopedia("Ortopedia Palminteri", "Av.La Plata 418", 8036, ListaProtesis3);
	cOrtopedia* ortopedia3 = new cOrtopedia("Ortopedia Baez", "Av 123 345", 8035, ListaProtesis3);
	cOrtopedia* ortopedia4 = new cOrtopedia("Ortopedia Casasco", "calle falsa 123", 8036, ListaProtesis3);
	cOrtopedia* ortopedia5 = new cOrtopedia("Ortopedia Pilot", "Av. 34 67", 8037, ListaProtesis3);
	cOrtopedia* ortopedia6 = new cOrtopedia("Ortopedia Todo para el manco", "islas malvinas 1454" 8036, ListaProtesis3);
	cOrtopedia* ortopedia7 = new cOrtopedia("Ortopedia Diaz", "Av.La Plata 567", 8038, ListaProtesis3);
	cOrtopedia* ortopedia8 = new cOrtopedia("Ortopedia Uno", " Plata 418", 8039, ListaProtesis1);
	cOrtopedia* ortopedia9 = new cOrtopedia("Ortopedia Sol", "belgrano 418", 8040, ListaProtesis1);
	cOrtopedia* ortopedia10 = new cOrtopedia("Ortopedia Rodriguez", "nueve de julio 418", 8041, ListaProtesis1);
	cOrtopedia* ortopedia11 = new cOrtopedia("Ortopedia San Martin", "San martin 418", 8042, ListaProtesis1);
	cOrtopedia* ortopedia12 = new cOrtopedia("Ortopedia Felicidad", "Miley 48", 8043, ListaProtesis1);


	// listas de ortopedias para cada hospital 

	ListaOrtopedias_favaloro.Agregar(ortopedia1);
	ListaOrtopedias_favaloro.Agregar(ortopedia2);
	ListaOrtopedias_favaloro.Agregar(ortopedia3);
	ListaOrtopedias_favaloro.Agregar(ortopedia4);
	ListaOrtopedias_favaloro.Agregar(ortopedia5);
	ListaOrtopedias_favaloro.Agregar(ortopedia6);

	ListaOrtopedias_clinicas.Agregar(ortopedia5);
	ListaOrtopedias_clinicas.Agregar(ortopedia6);
	ListaOrtopedias_clinicas.Agregar(ortopedia7);
	ListaOrtopedias_clinicas.Agregar(ortopedia8);
	ListaOrtopedias_clinicas.Agregar(ortopedia9);
	ListaOrtopedias_clinicas.Agregar(ortopedia10);

	ListaOrtopedias_swiss.Agregar(ortopedia10);
	ListaOrtopedias_swiss.Agregar(ortopedia11);
	ListaOrtopedias_swiss.Agregar(ortopedia12);
	ListaOrtopedias_swiss.Agregar(ortopedia1);

	ListaOrtopedias_modelo.Agregar(ortopedia2);
	ListaOrtopedias_modelo.Agregar(ortopedia3);
	ListaOrtopedias_modelo.Agregar(ortopedia7);
	ListaOrtopedias_modelo.Agregar(ortopedia5);
	ListaOrtopedias_modelo.Agregar(ortopedia8);
	ListaOrtopedias_modelo.Agregar(ortopedia9);
	ListaOrtopedias_modelo.Agregar(ortopedia11);


}





