#pragma once
#include "cANPA.h"
#include "cFabricante.h"
#include "cFecha.h"
#include "cHospital.h"
#include "cListas.h"
#include "cMedico.h"
#include "cNo_Quirurgico.h"
#include "cOrtopedia.h"
#include "cPaciente.h"
#include "cQuirurgico.h"
#include "cRegistros.h"
#include "cFecha.h"

using namespace std;

void CargarFabricantes(cListas <cFabricante> &ListaFabricantes);

void CargarHospitales(cListas <cHospital> &ListaHospitales);

void CargarOrtopedias(cListas <cOrtopedia> &ListaOrtopedias);
