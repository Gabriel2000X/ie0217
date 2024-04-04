
#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP 



# include <string>


/*Se define la clase empleado con atributos protegidos y métodods públicos*/
class Empleado{

    protected:
        std::string nombre;
        int edad;
        double salario;

    public:

        /*Se declara el constructor de la clase*/    
        Empleado(std::string _string, int _edad, double _salario);
        
        /*Estos métodos son virtuales, por lo que deberán definirse en las clases que heredan esta clase*/

        /*Se declara el destructor de la clase*/
        virtual ~Empleado(){} //La clase que herede de empleado puede crear el destructor.
        virtual double calcularPago() const =0; //La clase que herede de empleado debe crear calcularPago porque es un método virtual puro .
        virtual void mostrarDetalles() const;   //La clase que herede de empleado puede crear mostrarDetalles.
};



# endif //Empleado_HPP