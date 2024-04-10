/**
 * @file  paises.hpp
 * @brief Se realizan las declaraciones de las diferentes clases relacionadas
 * con países, sus métdos y atributos.
 *
 * @author Gabriel González Rivera B93432
 * @date 9/4/2024
 * 
 * Licencia: MIT
 */




#ifndef PAISES_HPP
#define PAISES_HPP 



# include <string>


using namespace std;

/*Se declara la clase país junto con sus métodos y atributos públicos, privados y protegidos*/

/**
 * @brief Clase base de las clases que tienen que ver con países 
 * 
 */
class Pais{

    public: 
        Pais(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente);
        bool aeropuerto;
        int habitantes;
        float PIB();
        int getId();
        string nombrePais;
        string continentePais;

    
    protected:

        int id;

    private:

        

        bool operator==(Pais &otroPais);
        friend bool comparar(Pais primerPais, Pais segundoPais);
        
};


/*Se declara la clase PaisEnDesarrollo que hereda de forma pública de Pais,
se define el constructor como único método público*/

/**
 * @brief Clase derivada que hereda de la clase País de manera pública. 
 * 
 */
class PaisEnDesarrollo: public Pais{

    
    public:
    
        PaisEnDesarrollo(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente);



        

        





};

/*Se define la clase PaisPrimerMundo que hereda de manera pública de la clase Pais, se declaran sus métodos y atributos 
públicos y privados.*/

/**
 * @brief Clase derivada que hereda de la clase País de manera pública. 
 * 
 */
class PaisPrimerMundo: public Pais{

    public:

        PaisPrimerMundo(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente, bool tiene5G, bool centroInvest);
        int getTrabajadores();
        bool getBandaAncha();
        bool getCentroInvest();
        
        

    private:

        bool bandaAncha;
        bool investigacion;
        int trabajadores();

    

};




# endif //PAISES_HPP