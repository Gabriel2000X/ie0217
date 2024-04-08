#ifndef PAISES_HPP
#define PAISES_HPP 



# include <string>


using namespace std;


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



class PaisEnDesarrollo: public Pais{

    public:
    
        PaisEnDesarrollo(bool tieneAeropuerto, int poblacionPais, int id, string nombre, string continente);



        

        





};


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