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
