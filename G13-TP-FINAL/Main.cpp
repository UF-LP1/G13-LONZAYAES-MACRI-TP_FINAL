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

	CargarFabricantes(ListaFabricantes);






	return 0;
};