#ifndef CLASES_HPP
#define CLASES_HPP


#include <string>
#include <iostream>
#include <stdexcept>
#include <complex>
#include <vector>
#include <algorithm>
#include <random>
class ValidadorDeEntrada { 

public:

/*Se declaran los métodos que validan las entradas del
usuario */
std::string validarTipoDato(std::string input);
void validarDimensiones(int tamano);

};


/*Se declara un prototipo de clase para OperacionesBasicas
esto para que se pueda sobrecargar los operadores +, -  y *
usando los métodos de OperacionesBasicas en Matriz.*/
template <typename T>
class OperacionesBasicas;




/*Se declara la clase matriz como un template*/
template <typename T>

class Matriz { 



public:

    /*Se declaran como miembros públicos matrizGenerada que 
    será la matriz que se generará y las variables enteras que
    guardan los valores de filas y columnas de la matriz*/
    std::vector<std::vector<T>> matrizGenerada;
    OperacionesBasicas<T> operaciones;
    int filasMatriz;
    int columnasMatriz;
    std::string tipo;

    /*Se declara un primer constructor vacío para poder declarar la clase antes de los 
    bloques condicionales usados en el main, esto permitirá conservar los cambios hechos 
    dentro de los condicionales y utilizar las matrices luego de llenarlas*/
    Matriz(){}

    /*Se declara un segundo constructor de la clase Matriz que recibe los valores de
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

    
    void imprimirMatriz() const {
        /*Se utiliza un bucle for para recorrer las filas de la matriz, 
        lo que es equivalente a recorrer los vectores internos al vector
        principal*/
        for (const auto& filasMatriz : matrizGenerada) {
            
            /*Se utiliza otro ciclo for para recorrer
            cada entrada de las filas de la matriz*/
            for (const auto& entrada : filasMatriz) {
                /*Se imprime la entrada actual y un espacio
                para que las entradas salgan separadas*/
                std::cout << entrada << " ";
            }
            /*Se imprime un salto de línea al finalizar
            el for interno.*/
            std::cout << std::endl; 
        }
    }

    /*Se declara la sobrecarga del operador +*/
    void operator+(Matriz<T>& segundaMatriz) {
        operaciones.sumar(*this, segundaMatriz);
    }

    /*Se declara la sobrecarga del operador -*/
    void operator-(Matriz<T>& segundaMatriz) {
        operaciones.restar(*this, segundaMatriz);
    }

    /*Se declara la sobrecarga del operador -*/
    void operator*(Matriz<T>& segundaMatriz) {
        operaciones.multiplicar(*this, segundaMatriz);
    }
    


    void llenarMatrizAleatoriamente() {
        /*Con random_device se genera la semilla random para números aleatorios
        y con mt19937 se define generador, dandole la random como argumento para
        generar números aleatorios */
        std::random_device random;
        std::mt19937 generador(random());

        /*Si tipo es igual a int o a float entonces se procede de la siguiente manera*/
        if (tipo == "int" || tipo == "float") {
            
            /*utilizando uniform_int_distribution y uniform_real_distribution se declaran los límites de los 
            números enteros y flotantes que pueden ser generados.*/
            std::uniform_int_distribution<int> distribucionEntera(0, 100); 
            std::uniform_real_distribution<float> distribucionFlotante(0.0, 100.0); 

            /*Se usan dos ciclos for anidados para recorrer las matrices, el primero
            empieza en cero e incrementa mientras i sea menor que el número de filas de la
            matriz, el segundo empieza en cero y aumenta mientras j sea menor que las columnas
            de la matriz.*/
            for (int i = 0; i < filasMatriz; ++i) {
                for (int j = 0; j < columnasMatriz; ++j) {
                    
                    
                    T valorAleatorio;
                    /*Se utiliza constexpr para que is_same evalúe en tiempo de compilación si
                    T es entero, si se cumple entonces se le asigna un valor aleatorio entero
                    a valorAleatorio.*/
                    if constexpr (std::is_same_v<T, int>) {
                        valorAleatorio = distribucionEntera(generador);
                    } 
                    
                    /*Se utiliza constexpr para que is_same evalúe en tiempo de compilación si
                    T es flotante, si se cumple entonces se le asigna un valor aleatorio flotante
                    a valorAleatorio.*/
                    else if constexpr (std::is_same_v<T, float>) {
                        valorAleatorio = distribucionFlotante(generador);
                    }
                    
                    /*Se le asigna valor generado a la entrada actual*/
                    matrizGenerada[i][j] = valorAleatorio;
                }
            }
        } 

        /*Si en cambio valor es complejo entonces se tiene que T debe ser complejo, si esto se cumple entonces
        se procede de la siguiente manera.*/
        else if constexpr (std::is_same_v<T, std::complex<float>>) {
            /*Se procede de manera similar al bloque anterior, se declaran límites para la parte real 
            y para la parte imaginaria*/
            std::uniform_real_distribution<float> distribucionReal(0.0, 100.0); 
            std::uniform_real_distribution<float> distribucionImaginaria(0.0, 100.0); 

            /*Se procede de manera similar al bloque anterior utilizando 
            ciclos for anidados para generar los valores que se introducen a la matriz*/
            for (int i = 0; i < filasMatriz; ++i) {
                for (int j = 0; j < columnasMatriz; ++j) {
                    
                    /*Se generan los números para la parte real e imaginaria*/
                    float real = distribucionReal(generador);
                    float imaginaria = distribucionImaginaria(generador);
                    
                    /*Se crea el número complejo y se introduce en la matriz*/
                    matrizGenerada[i][j] = std::complex<float>(real, imaginaria);
                }
            }
        }
    }



};

/*Se declara la clase validación de operaciones, como debe contener
métodos que reciben matrices template como argumento entonces la clase
también debe ser un template, por lo que se debe definir completamente
en este archivo.*/


template <typename T>

class OperacionesBasicas{ 

    public:

        /*Se declara el constructor de la clase sin
        argumentos*/
        OperacionesBasicas(){}

        /*Se declara validarSumaResta*/
        void validarSumaResta(Matriz<T>&matrizA, Matriz<T>&matrizB){ 
            
            /*Se verifica si las filas y columnas de las matrices recibidas son iguales,
            si no lo fueran se lanza una excepción tipo invalid argument*/
            if (matrizA.filasMatriz != matrizB.filasMatriz || matrizA.columnasMatriz != matrizB.columnasMatriz){ 

                throw std::invalid_argument("Las matrices no tienen las mismas dimensiones, no se puede realizar la operación");


            } 

        } 

        /*Se define validarMultiplicación*/
        void validarMultiplicacion(Matriz<T>&matrizA, Matriz<T>&matrizB){ 
            
            /*Se verifica si las columnas de la primera matriz son iguales
            a las filas de la segunda matriz*/
            if (matrizA.columnasMatriz != matrizB.filasMatriz){ 
                
                /*Si no se cumple la condición se lanza una excepción de tipo invalid argument*/
                throw std::invalid_argument("El número de columnas de la primera matriz es diferente del número de filas de la segunda, no se puede realizar la operación");


            } 

        } 


        /*Se declara el método sumar que suma dos matrices recibidas*/
        void sumar(Matriz<T>& matrizA, Matriz<T>& matrizB) {
    
            /*Se incluye el método validarSumaResta para no realizar sumas
            sin haber validado antes*/
            validarSumaResta(matrizA, matrizB);

            /*Se declara una instancia de Matriz llamada resultado con el 
            constructor básico de Matriz*/
            Matriz<T> resultado;

            /*Se le asigna de manera manual a resultado los atributos de la 
            matriz a para que tenga dimensiones iguales*/
            resultado.filasMatriz = matrizA.filasMatriz;
            resultado.columnasMatriz = matrizA.columnasMatriz;
            resultado.tipo = matrizA.tipo;

            /*Se itera con un ciclo for sobre las filas de matrizA, continua 
            iterando mientras i sea menor que el tamaño de matrizGenerada*/
            for (size_t i = 0; i < matrizA.matrizGenerada.size(); ++i) {
        
                /*Se crea una instancia del vector filaResultado*/
                std::vector<T> filaResultado;

                /*se itera sobre cada entrada de los vectores de las matrices, 
                iterando desde cero y aumentando mientras i sea menor que el tamaño
                de matrizGenerada*/
                for (size_t j = 0; j < matrizA.matrizGenerada[i].size(); ++j) {
            
                    /*Se suma cada entrada de las matrices y se añade a filaResultado mediante el uso de
                    push_back */
                    filaResultado.push_back(matrizA.matrizGenerada[i][j] + matrizB.matrizGenerada[i][j]);
                }
                /*Se introduce todo el vector filaResultado en resultado*/
                resultado.matrizGenerada.push_back(filaResultado);
            }

            /*Se imprime la matriz resultado utilizando un método similar a imprimirMatriz*/
            for (const auto& filaResultado : resultado.matrizGenerada) {
                for (const auto& entrada : filaResultado) {
                    std::cout << entrada << " ";
                }
                std::cout << std::endl;
            }
        }


        /*Se declara el método restar que resta dos matrices recibidas*/
        void restar(Matriz<T>& matrizA, Matriz<T>& matrizB) {
    
            /*Se incluye el método validarSumaResta para no realizar sumas
            sin haber validado antes*/
            validarSumaResta(matrizA, matrizB);

            /*Se declara una instancia de Matriz llamada resultado con el 
            constructor básico de Matriz*/
            Matriz<T> resultado;

            /*Se le asigna de manera manual a resultado los atributos de la 
            matriz a para que tenga dimensiones iguales*/
            resultado.filasMatriz = matrizA.filasMatriz;
            resultado.columnasMatriz = matrizA.columnasMatriz;
            resultado.tipo = matrizA.tipo;

            /*Se itera con un ciclo for sobre las filas de matrizA, continua 
            iterando mientras i sea menor que el tamaño de matrizGenerada*/
            for (size_t i = 0; i < matrizA.matrizGenerada.size(); ++i) {
                
                /*Se crea una instancia del vector filaResultado*/
                std::vector<T> filaResultado;

                /*se itera sobre cada entrada de los vectores de las matrices, 
                iterando desde cero y aumentando mientras i sea menor que el tamaño
                de matrizGenerada*/
                for (size_t j = 0; j < matrizA.matrizGenerada[i].size(); ++j) {
            
                    /*Se suma cada entrada de las matrices y se añade a filaResultado mediante el uso de
                    push_back */
                    filaResultado.push_back(matrizA.matrizGenerada[i][j] - matrizB.matrizGenerada[i][j]);
                }
                /*Se introduce todo el vector filaResultado en resultado*/
                resultado.matrizGenerada.push_back(filaResultado);
            }

            /*Se imprime la matriz resultado utilizando un método similar a imprimirMatriz*/
            for (const auto& filaResultado : resultado.matrizGenerada) {
                for (const auto& entrada : filaResultado) {
                    std::cout << entrada << " ";
                }
                std::cout << std::endl;
            }
        }




     void multiplicar(Matriz<T>& matrizA, Matriz<T>& matrizB) {
    validarMultiplicacion(matrizA, matrizB);

    /*Se declara una instancia de Matriz llamada resultado con el 
            constructor básico de Matriz*/
            Matriz<T> resultado;

            /*Se le asigna de manera manual a resultado los atributos de la 
            matriz a para que tenga dimensiones iguales*/
            resultado.filasMatriz = matrizA.filasMatriz;
            resultado.columnasMatriz = matrizA.columnasMatriz;
            resultado.tipo = matrizA.tipo;

    
    /*Se itera desde cero y se aumenta mientras se tenga un número menor que
    la cantidad de filas de la matrizA*/
    for (size_t i = 0; i < matrizA.filasMatriz; ++i) {
        
        /*Se crea una instancia de vector llamado filaResultado que guardará las 
        entradas de una fila*/
        std::vector<T> filaResultado;

        /*Se itera mediante un ciclo for anidado sobre desde cero hasta la cantidad de 
        columnas de la matrizB*/
        for (size_t j = 0; j < matrizB.columnasMatriz; ++j) {
            
            /*Se declara una variable de tipo T llamada suma que contendrá el valor
            de la entrada actual y se le sumará progresivamente los resultados
            de las multiplicaciones de las filas por las columnas*/
            T suma = 0;

            /*Se itera desde cero hasta el número de columnas de la matrizA para poder
            realizar las multiplicaciones de las filas de A con las columnas de B*/
            for (size_t k = 0; k < matrizA.columnasMatriz; ++k) {
                suma += matrizA.matrizGenerada[i][k] * matrizB.matrizGenerada[k][j];
            }
            
            /*Se introduce suma al vector filaResultado, es equivalente
            a meter su valor en la fila actual de la matriz resultado*/
            filaResultado.push_back(suma);
        }
        /*Se mete el vector filaResultado dentro de matrizGenerada, esto para
        meter las filas de la matriz resultado dentro de ella.*/
        resultado.matrizGenerada.push_back(filaResultado); 
    }

    /*Se imprime la matriz generada con un procedimiento similar a 
    los anteriores*/
    for (const auto& filaResultado : resultado.matrizGenerada) {
                for (const auto& entrada : filaResultado) {
                    std::cout << entrada << " ";
                }
                std::cout << std::endl;
            }
}

}; 


#endif // CLASES_HPP