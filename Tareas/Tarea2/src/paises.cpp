/**
 * @file  paises.cpp
 * @brief Se realizan las definiciones de las diferentes clases relacionadas
 * con países, sus métdos y atributos.
 *
 * @author Gabriel González Rivera B93432
 * @date 9/4/2024
 * 
 * Licencia: MIT
 */

# include <iostream>
# include "paises.hpp"
#include <random> 
using namespace std;



        /*  Se define el constructor de la clase Pais*/


        /**
        * @brief Constructor de la clase Pais.
        * 
        * @param tieneAeropuerto es un valor booleano que es true si hay aeropuerto y false si no hay, se guarda en aeropuerto.
        * @param poblacionPais es un valor entero que guarda el valor de la población del país, se guarda en habitantes.
        * @param id es un valor entero que guarda el valor del id del país, se guarda en id.
        * @param nombre es un valor de tipo string que guarda el nombre del país, se guarda en nombrePais.
        * @param continente es un valor tipo string que guarda el nombre del continente al que pertenece el pais, se guarda en continentePais.
        * 
        */
        Pais::Pais(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente): 
        aeropuerto(tieneAeropuerto), habitantes(poblacionPais), id(id), nombrePais(nombre), continentePais(continente) {}

            /*Se define un método para calcular el PIB de manera random */
        
            /**
            * @brief método flotante perteneciente a la clase Pais que calcula un PIB al azar
            * 
            * @return retorna un valor flotante que corresponde al PIB del país.
            */
            float Pais::PIB() {

            /*Se utliza random_device para asegurar que verdaderamente se generen números al azar*/
            random_device azar;
    
            /* Se define un generador de números al azar de tipo mt19937*/
            mt19937 generador(azar());

            /* Se especifica el rango que se quiere para los números enteros aleatorios, 
            va de cero a 100000 */
            uniform_int_distribution<int> rango(0, 100000);

            /* Se crea un número random con el rango especificado, usando el generador
            creado anteriormente*/
            int productoInterno = rango(generador);

            return productoInterno;

            }

            /* Se define un método para poder obtener el valor del id*/

            /**
            * @brief método entero perteneciente a la clase Pais que obtiene el valor de id que es un atributo privado.
            * 
            * @return retorna un valor de id.
            */
            int Pais::getId() {

                return id;

            }

            /*Se define un método para usar la sobrecarga del operador
            == para comparar el atributo booleano de aeropuerto de dos
            países */

            /**
            * @brief método booleano perteneciente a la clase Pais que sobrecarga el operador ==
            * para comparar el valor booleano aeropuerto de Pais.
            * 
            * @return retorna un valor booleano true si son iguales y uno false 
            * si son diferentes.
            */
            bool Pais::operator == (Pais &otroPais){
                return this->aeropuerto == otroPais.aeropuerto;
            
            }
            
    

        /*Se define el constructor de la clase PaisEnDesarrollo*/   

        /**
        * @brief Constructor de la clase PaisEnDesarrollo
        * 
        * @param tieneAeropuerto es un valor booleano que es true si hay aeropuerto y false si no hay, se guarda en el constructor de Pais.
        * @param poblacionPais es un valor entero que guarda el valor de la población del país, se guarda en el constructor de Pais.
        * @param id es un valor entero que guarda el valor del id del país, se guarda en el constructor de Pais.
        * @param nombre es un valor de tipo string que guarda el nombre del país, se guarda en el constructor de Pais.
        * @param continente es un valor tipo string que guarda el nombre del continente al que pertenece el pais, se guarda en el constructor de Pais.
        * 
        */
        PaisEnDesarrollo::PaisEnDesarrollo(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente): 
        Pais(tieneAeropuerto, poblacionPais, id, nombre, continente) {}



        /*Se define el constructor de la clase PaisPrimerMundo*/

        
        /**
        * @brief Constructor de la clase PaisPrimerMundo
        * 
        * @param tieneAeropuerto es un valor booleano que es true si hay aeropuerto y false si no hay, se guarda en el constructor de Pais.
        * @param poblacionPais es un valor entero que guarda el valor de la población del país, se guarda en el constructor de Pais.
        * @param id es un valor entero que guarda el valor del id del país, se guarda en el constructor de Pais.
        * @param nombre es un valor de tipo string que guarda el nombre del país, se guarda en el constructor de Pais.
        * @param continente es un valor tipo string que guarda el nombre del continente al que pertenece el pais, se guarda en el constructor de Pais.
        * @param tiene5G es un valor booleano que es true si el país tiene 5G y false si no tiene, se guarda en bandaAncha.
        * @param centroInvest es un valor booleano que es true si se tiene un centro de investigación en el país y false si no lo tiene, se guarda en investigacion.
        * 
        */
        PaisPrimerMundo::PaisPrimerMundo(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente,  bool tiene5G, bool centroInvest):  
        Pais(tieneAeropuerto, poblacionPais, id, nombre, continente) , bandaAncha(tiene5G), investigacion(centroInvest){}
            
            /* Se define un método para poder obtener el valor de trabajadores ya que este
            es un atributo privado*/

            /**
            * @brief método entero perteneciente a la clase PaisPrimerMundo y que obtiene el valor que 
            * retorna el método privado trabajadores
            * 
            * @return retorna el valor entero que corresponde al valor que retorna el método privado trabajadores.
            */
            int PaisPrimerMundo::getTrabajadores(){
                int empleados = PaisPrimerMundo::trabajadores();
                return empleados;
            }

            /* Se define un método para poder obtener el valor de bandaAncha ya que este
            es un atributo privado*/

             /**
            * @brief método booleano que perteneciente a la clase PaisPrimerMundo y que obtiene el valor del
            * atributo privado bandaAncha.
            * 
            * @return retorna el valor booleano que corresponde la condición de si hay o no 5G en el país.
            */
            bool PaisPrimerMundo::getBandaAncha(){
                
                return bandaAncha;
                
            }
            
            /* Se define un método para poder obtener investigacion ya que este es un 
            atributo privado.*/

            /**
            * @brief método booleano que perteneciente a la clase PaisPrimerMundo y que obtiene el valor del
            * atributo privado bandaAncha.
            * 
            * @return retorna el valor booleano que corresponde la condición de si hay o no un centro de investigación en el país.
            */
            bool PaisPrimerMundo::getCentroInvest(){
                
                return investigacion;
                
            }

            /*Se define un método para generar un número random de trabajadores entre cero y el 
            número de pobladores del país.*/

              /**
            * @brief método entero perteneciente a la clase PaisPrimerMundo y que calcula un valor 
            * al azar de trabajadores con base en la población del país.
            * 
            * 
            * @return retorna el valor entero de la cantidad de trabajadores.
            */
            int PaisPrimerMundo::trabajadores(){

                /*Se utliza random_device para asegurar que verdaderamente se generen números al azar*/
                random_device azar;
    
                /* Se define un generador de números al azar de tipo mt19937*/
                mt19937 generador(azar());

                /* Se especifica el rango que se quiere para los números enteros aleatorios, 
                va de cero a 100000 */
                uniform_int_distribution<int> rango(0, Pais::habitantes);

                /* Se crea un número random con el rango especificado, usando el generador
                creado anteriormente*/
                int poblacionTrabajadora = rango(generador);

                return poblacionTrabajadora;

            }





