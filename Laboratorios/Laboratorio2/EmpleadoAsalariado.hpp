#ifndef EMPLEADOASALARIADO_HPP
#define EMPLEADOASALARIADO_HPP 



#include "Empleado.hpp"

/*Se define EmpleadoAsalariado, que hereda de manera pública de Empleado, por lo que
se heredan todos los atributos y métdos con de la manera en la que están declarados*/
class EmpleadoAsalariado: public Empleado{

    /*Se declara el constructor de la clase EmpleadoAsalariado de manera pública, además se declara
    calcularPago con const override, esto porque este es un método virtual puro y debe declararse
    de manera obligatoria .*/
    public:
        EmpleadoAsalariado(std::string _nombre, int _edad, double _salario);
        
        double calcularPago() const override; //La clase que herede de empleado puede crear calcularPago.
        
};


# endif //EMPLEADOASALARIADO_HPP