# include "Empleado.hpp"
# include <iostream>

/*se accesa al constructor de Empleado y se definen los atributos 
que debe recibir este constructor */
Empleado::Empleado(std::string _nombre, int _edad, double _salario):
    nombre(_nombre), edad(_edad), salario(_salario) {}

    /*Se define mostrardetalles accesando Empleado, 
    este método se utiliza para imprimir los atributos de empleado*/
    void Empleado::mostrarDetalles() const  {
        
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Salario: " << salario << std::endl;

        }