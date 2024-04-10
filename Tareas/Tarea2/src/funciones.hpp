#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP 

/*Se incluyen las librerías necesarias para
que las funciones hagan su trabajo*/
# include "paises.hpp"
# include "planeta.hpp"
#include <iostream> 
# include <string>
# include <limits>
# include <vector>
using namespace std;

/*Se declaran las funciones*/
PaisPrimerMundo crearPaisPrim(vector<int>& vectorInt);
PaisEnDesarrollo crearPaisEnDes(vector<int>& vectorInt);
void EliminarPais(vector<PaisPrimerMundo>& vectorPrimerMundo, vector<PaisEnDesarrollo>& vectorTercerMundista);
bool comparar(Pais primerPais, Pais segundoPais);
Pais convertir(vector<PaisPrimerMundo>& vectorPrimerMundo, vector<PaisEnDesarrollo>& vectorTercerMundista);
void imprimirInformacion(Planeta argPlaneta);
# endif //FUNCIONES_HPP