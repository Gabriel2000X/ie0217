/**
 * @file estructura.hpp
 * @brief Este archivo contiene la declaración de la estructura juego
 *
 * @author Gabriel González Rivera B93432
 * @date 29/3/2024
 * 
 * Licencia: MIT
 */


#ifndef ESTRUCTURA_HPP
#define ESTRUCTURA_HPP 


# include <iostream>
# include <string>
using namespace std;


struct juego
{
    string palabra;
    string palabraAdivinar;
    int intentosMax;
    int intentosActuales;
     
};



# endif