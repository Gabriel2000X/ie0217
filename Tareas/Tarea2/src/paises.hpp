#ifndef PAISES_HPP
#define PAISES_HPP 



# include <string>


using namespace std;

/*Se declara la clase país junto con sus métodos y atributos públicos, privados y protegidos*/
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
class PaisEnDesarrollo: public Pais{

    
    public:
    
        PaisEnDesarrollo(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente);



        

        





};

/*Se define la clase PaisPrimerMundo que hereda de manera pública de la clase Pais, se declaran sus métodos y atributos 
públicos y privados.*/
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