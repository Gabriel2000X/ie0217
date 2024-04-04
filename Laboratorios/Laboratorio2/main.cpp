/*Para el main.cpp se incluyen los archivos.hpp correspondientes,
no se incluye Empleado.hpp porque se incluye en los 
demás .hpp*/

# include <iostream>
# include "EmpleadoAsalariado.hpp"
# include "EmpleadoPorHoras.hpp"

int main () {

    /*Se declaran dos objetos, uno tipo EmpleadoAsalariado
    y otro tipo EmpleadoPorHoras, se observa que reciben diferentes
    argumentos porque son clases distintas*/
    EmpleadoAsalariado emp1("Marito", 30, 2000);
    EmpleadoPorHoras emp2("Juana", 25, 10,40);

    /*Se imprime la información de ambos utilizando mostrarDetalles
    y calcularPago, que son métodos virtuales heredados de Empleado,
    cabe destacar que calcularPago es diferente para EmpleadoAsalariado
    y para EmpleadoPorHoras.*/
    std::cout <<"detalles del empleado asalariado " << std::endl;
    emp1.mostrarDetalles();
    std::cout << "Pago: $" << emp1.calcularPago() << std::endl;

    std::cout <<"\ndetalles del empleado por horas " << std::endl;
    emp2.mostrarDetalles();
    std::cout << "Pago: $" << emp2.calcularPago() << std::endl;
    

    return 0;
} 