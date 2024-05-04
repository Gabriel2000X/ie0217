#include <string>
#include <iostream>
#include <stdexcept>
#include <complex>
#include <vector>

class ValidadorDeEntrada { 

public:

/*Se declaran los métodos que validan las entradas del
usuario */
std::string validarTipoDato(std::string input);
void validarDimensiones(int tamano);

};

/*Se declara la clase matriz como un template*/
template <typename T>

class Matriz { 

private:
/*Se declaran como miembros privados matrizGenerada que 
será la matriz que se generará y las variables enteras que
guardan los valores de filas y columnas de la matriz*/
std::vector<std::vector<T>> matrizGenerada;
int filasMatriz;
int columnasMatriz;


public:
    /*Se declara el constructor de la clase Matriz que recibe los valores de
    las filas y columnas de la matriz, además contiene los métodos setDimensiones y */
    Matriz(int filas, int columnas) : filasMatriz(filas), columnasMatriz(columnas){ 

    setDimensiones(filasMatriz, columnasMatriz);

    }

    /*Se define el método setDimensiones que crea una matriz con las dimensiones dadas,
    recibe como argumentos las filas y las columnas */
   void setDimensiones(int filasMatriz, int columnasMatriz){ 

    /*Se lanza una excepción si filasMatriz o columnasMatriz es igual o menor que
    cero*/
    if (filasMatriz <= 0 || columnasMatriz <= 0) {
        throw std::invalid_argument("Dimensiones de matriz no válidas");
    }
    
    /* Se utiliza resize para cambiar el tamaño del vector matrizGenerada para que contenga 
    una cantidad de vectores determinada por filasMatriz y que contengan una cantidad de elementos
    con un valor de columnasMatriz, esto genera la matriz con el tamaño necesario*/
    matrizGenerada.resize(filasMatriz, std::vector<T>(columnasMatriz));
    
    }

    
};