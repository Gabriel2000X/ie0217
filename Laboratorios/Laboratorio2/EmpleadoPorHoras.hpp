#ifndef EMPLEADOPORHORAS_HPP
#define EMPLEADOPORHORAS_HPP 



# include "Empleado.hpp"

/*Se declara la clase EmpleadoPorHoras que recibe
herencia pública de Empleado*/

class EmpleadoPorHoras : public Empleado{

    /*Horas trabajadas se declara como privado por lo que solo se puede
    accesar mediante funciones y clases amigas y dentro de la misma clase. */
    private:
        int horasTrabajadas;

    /*Se declara el constructor de la clase EmpleadoPorHoras y también se declara calcularPago
    que debe declararse de manera obligatorio en las funciones que heredan de Empleado porque es
    un método virtual puro.*/
    public:
        EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);
        
        double calcularPago() const override; 
        
};


# endif //EMPLEADOPORHORAS_HPP