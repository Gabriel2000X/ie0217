#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP 

# include "paises.hpp"
# include "planeta.hpp"
#include <iostream> 
# include <string>
# include <limits>
# include <vector>
using namespace std;

PaisPrimerMundo crearPaisPrim(vector<int>& vectorInt);
PaisEnDesarrollo crearPaisEnDes(vector<int>& vectorInt);
void EliminarPais(vector<PaisPrimerMundo>& vectorPrimerMundo, vector<PaisEnDesarrollo>& vectorTercerMundista);
bool comparar(Pais primerPais, Pais segundoPais);
Pais convertir(vector<PaisPrimerMundo>& vectorPrimerMundo, vector<PaisEnDesarrollo>& vectorTercerMundista);
void imprimirInformacion(Planeta argPlaneta);
# endif //FUNCIONES_HPP