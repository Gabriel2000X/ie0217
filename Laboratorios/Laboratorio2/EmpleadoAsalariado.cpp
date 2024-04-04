# include "EmpleadoAsalariado.hpp"

/*Se define el constructor de la clase empleadoAsalariado que utiliza el constructor de 
la clase empleado debido a que se le deben dar los mismos argumentos*/
EmpleadoAsalariado::EmpleadoAsalariado(std::string _nombre, int _edad, double _salario):
    Empleado (_nombre, _edad, _salario) {}  

/*Se define el método calcularPago de la clase EmpleadoAsalariado que retorna el salario*/
double EmpleadoAsalariado::calcularPago() const {
    return salario; 
    
    };