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
std::string tipo;

public:
    /*Se declara el constructor de la clase Matriz que recibe los valores de
    las filas y columnas de la matriz, además contiene los métodos setDimensiones y llenarMatriz*/
    Matriz(int filas, int columnas, std::string tipoString) : filasMatriz(filas), columnasMatriz(columnas), tipo(tipoString){ 

    setDimensiones(filasMatriz, columnasMatriz);
    llenarMatriz();

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



    /*Se define el método para llenar las matrices una vez que fueron creadas*/
    void llenarMatriz(){ 

        /*Si la variable string tipo tiene un valor int o float se sigue con el siguiente 
        procedimiento*/
        if (tipo == "int" || tipo == "float")  { 
            
           
            /*Se itera sobre las filas de la matriz con un ciclo for, esto 
            es correspondiente a iterar sobre cada elemento del vector principal 
            llamado matrizGenerada*/
            for (int i = 0; i < filasMatriz; ++i) {
                
                /*Se itera sobre cada entrada de los vectores que están dentro de 
                matrizGenerada, por lo que se itera sobre cada elemento de las filas y como
                hay una cantidad de elementos en cada fila igual a la cantidad de columnas
                se itera con respecto a columnasMatriz*/
                for (int j = 0; j < columnasMatriz; ++j) {
                    
                    /*Se le dice al usuario que ingrese el valor para la entrada actual, se 
                    utiliza i +1 debido a que los iteradores empiezan en 0 pero las matrices 
                    tienen entradas a partir del 1, por lo que se debe sumar 1 para imprimir
                    la entrada correcta que se solicita. */
                    std::cout << "Ingrese el valor para la entrada [" << i + 1 << "][" << j + 1 << "]: ";
                    T valorEntrada;
                    std::cin >> valorEntrada;

                    /*Se utiliza un if para que si no se puede convertir la entrada un número entonces
                    se lance una excepción invalid_argument debido a que ese sería el resultado de 
                    introducir un caracter diferente a un número, cin fail devuelve true si la lectura 
                    de la entrada falla*/
                    if (std::cin.fail()) {
            

                        /*Se elimina el error de cin usando cin.clear*/
                        std::cin.clear();

                        /*Se vacía el buffer de entrada y se ignoran caracteres hasta encontrar un salto de linea*/
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        throw std::invalid_argument("Se debe introducir una entrada numérica del formato deseado");
                        
                    }

                    /*Se asigna el valor introducido a la matriz*/
                    matrizGenerada[i][j] = valorEntrada;
                }
            }

        }

        /* al usar constexpr se comprueba la condición en tiempo de compilación, se
        utilizando is_same_v se verifica si dos variabls tienen tipos iguales, entonces
        si T tiene tipo std::complex<float> que es un número complejo formado por valores
        flotantes entonces se compila el bloque que maneja los números complejos.*/
        else if constexpr (std::is_same_v<T, std::complex<float>>){ 


            /*Se itera sobre las filas de la matriz con un ciclo for, esto 
            es correspondiente a iterar sobre cada elemento del vector principal 
            llamado matrizGenerada*/
            for (int i = 0; i < filasMatriz; ++i) {
            
                
                /*Se itera sobre cada entrada de los vectores que están dentro de 
                matrizGenerada, por lo que se itera sobre cada elemento de las filas y como
                hay una cantidad de elementos en cada fila igual a la cantidad de columnas
                se itera con respecto a columnasMatriz*/
                for (int j = 0; j < columnasMatriz; ++j) {
                    

                    /*Se le dice al usuario que ingrese el valor de la parte real del número 
                    de la entrada actual, se utiliza i +1 debido a que los iteradores empiezan 
                    en 0 pero las matrices tienen entradas a partir del 1, por lo que se debe 
                    sumar 1 para imprimir la entrada correcta que se solicita. */
                    std::cout << "Ingrese la parte real del número complejo en la entrada [" << i +1 << "][" << j +1 << "]: ";
                    float real;
                    std::cin >> real;

                    /*Se utiliza un if para que si no se puede convertir la entrada un número entonces
                    se lance una excepción invalid_argument debido a que ese sería el resultado de 
                    introducir un caracter diferente a un número, cin fail devuelve true si la lectura 
                    de la entrada falla*/
                    if (std::cin.fail()) {
                        
                        /*Se elimina el error de cin usando cin.clear*/
                        std::cin.clear();

                        /*Se vacía el buffer de entrada y se ignoran caracteres hasta encontrar un salto de linea*/
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        throw std::invalid_argument("Se debe introducir una entrada numérica");
                       
                    }


                    /*Se le dice al usuario que ingrese el valor de la parte imaginaria del número 
                    de la entrada actual, se utiliza i +1 debido a que los iteradores empiezan 
                    en 0 pero las matrices tienen entradas a partir del 1, por lo que se debe 
                    sumar 1 para imprimir la entrada correcta que se solicita. */
                    std::cout << "Ingrese la parte imaginaria del número complejo en la entrada [" << i +1 << "][" << j +1 <<"]: ";
                    float imaginario;
                    std::cin >> imaginario;

                    /*Se utiliza un if para que si no se puede convertir la entrada un número entonces
                    se lance una excepción invalid_argument debido a que ese sería el resultado de 
                    introducir un caracter diferente a un número, cin fail devuelve true si la lectura 
                    de la entrada falla*/
                    if (std::cin.fail()) {
                        
                        /*Se elimina el error de cin usando cin.clear*/
                        std::cin.clear();

                        /*Se vacía el buffer de entrada y se ignoran caracteres hasta encontrar un salto de linea*/
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        throw std::invalid_argument("Se debe introducir una entrada numérica");
                        
                    }
                    
                    /*Se genera un número complejo con la parte real e imaginaria
                    y posteriormente se guarda en la entrada de la matriz presente en 
                    la iteración actual*/
                    matrizGenerada[i][j] = std::complex<float>(real, imaginario);
                }
            }



        }

    }

    
};