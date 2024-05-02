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

template <typename T>

class Matriz { 

private:
std::vector<std::vector<T>> matrizGenerada;
int filasMatriz;
int columnasMatriz;


public:

    Matriz(int filas, int columnas) : filasMatriz(filas), columnasMatriz(columnas){ 

    setDimensiones(filasMatriz, columnasMatriz);

    }

   void setDimensiones(int filasMatriz, int columnasMatriz){ 

    if (filasMatriz <= 0 || columnasMatriz <= 0) {
        throw std::invalid_argument("Dimensiones de matriz no válidas");
    }
    
    matrizGenerada.resize(filasMatriz, std::vector<T>(columnasMatriz));
    
    }

    
};