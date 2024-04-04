# include "EmpleadoPorHoras.hpp"

/*Se define el constructor de EmpleadoPorHoras que tiene que recibir cuatro parámetros, recibe los 
parámetros _nombre, _edad y _salario llamando al constructor de Empleado que es su clase base, y
recibe el parámetro _horasTrabajadas  */
EmpleadoPorHoras::EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas)
    : Empleado(_nombre, _edad, _salario), horasTrabajadas(_horasTrabajadas) {}

    /*Se  define calcularPago para EmpleadoPorHoras*/
    double EmpleadoPorHoras::calcularPago() const { 
        return salario * horasTrabajadas;
        }