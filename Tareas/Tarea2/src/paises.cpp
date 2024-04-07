

# include <iostream>
# include "paises.hpp"
#include <random> 
using namespace std;



    
        Pais::Pais(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente): 
        aeropuerto(tieneAeropuerto), habitantes(poblacionPais), id(id), nombrePais(nombre), continentePais(continente) {}
        
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

            /* Se crea un método para poder asignarle un valor a id*/
            void Pais::setId(int valor) {

            id = valor;


            }
    
    
        PaisEnDesarrollo::PaisEnDesarrollo(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente): 
        Pais(tieneAeropuerto, poblacionPais, id, nombre, continente) {}

           
        PaisPrimerMundo::PaisPrimerMundo(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente,  bool tiene5G, bool centroInvest):  
        Pais(tieneAeropuerto, poblacionPais, id, nombre, continente) , bandaAncha(tiene5G), investigacion(centroInvest){}
            
            /* Se define un método para poder asignarle un valor a bandaAncha*/
            void PaisPrimerMundo::setBandaAncha(bool valor) {

                valor = bandaAncha;

            }
            
            /* Se define un método para poder asignarle un valor a investigación*/
            void PaisPrimerMundo::setCentroInvest(bool valor) {

                valor = investigacion;

            }
            
            /* Se define un método para poder obtener el valor de trabajadores ya que este
            es un atributo privado*/
            int PaisPrimerMundo::getTrabajadores(){
                int empleados = PaisPrimerMundo::trabajadores();
                return empleados;
            }

            /* Se define un método para poder obtener el valor de bandaAncha ya que este
            es un atributo privado*/
            bool PaisPrimerMundo::getBandaAncha(){
                
                return bandaAncha;
                
            }
            
            /* Se define un método para poder obtener investigacion ya que este es un 
            atributo privado.*/
            bool PaisPrimerMundo::getCentroInvest(){
                
                return investigacion;
                
            }

            /*Se define un método para generar un número random de trabajadores entre cero y el 
            número de pobladores del país.*/
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





