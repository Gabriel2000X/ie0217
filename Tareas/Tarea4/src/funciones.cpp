#include "funciones.hpp"

/*Se realiza la definición de elegirOperación*/
std::string elegirOperacion(){ 

    /*Se define un arreglo tipo string con los valores de los 
    operadores permitidos*/
    std::vector<std::string> operadoresPermitidos = {"+","-","*"};
    std::string operador;

    /*Se imprimen instrucciones para el usuario y se le pide que introduzca 
    el operador correspondiente*/
    std::cout << "Ingrese el operador + para sumar matrices" << std::endl;
    std::cout << "Ingrese el operador - para restar matrices" << std::endl;
    std::cout << "Ingrese el operador * para multiplicar matrices" << std::endl;
    std::cout << "Ingrese el operador para la operación deseada: ";
    std::cin >> operador;

    /*Se utilizan condicionales if y else if para que se devuelva el 
    operador que el usuario introduce y además se imprime un mensaje que 
    le informa que operación a elegido*/
    if (operador == "+"){ 
        std::cout << "Ha elegido la suma de matrices" << std::endl;
        std::cout << std::endl;
        return operador;
    }

    else if (operador == "-"){ 
        std::cout << "Ha elegido la resta de matrices" << std::endl;
        std::cout << std::endl;
        return operador;
    }

    else if (operador == "*"){ 
        std::cout << "Ha elegido la multiplicación de matrices" << std::endl;
        std::cout << std::endl;
        return operador;
    }

    /*Si cin falla debido a la introducción de un valor numérico o si valor de texto que el usuario
    introduce no está dentro de operadores permitidos (se busca y compara mediante std:find) entonces
    se procede a limpiar la entrada de cin y a lanzar una excepción tipo invalid_argument.*/
    else if (std::cin.fail() || (std::find(operadoresPermitidos.begin(), operadoresPermitidos.end(), operador) == operadoresPermitidos.end())) {
                        
        /*Se elimina el error de cin usando cin.clear*/
        std::cin.clear();

        /*Se vacía el buffer de entrada y se ignoran caracteres hasta encontrar un salto de linea*/
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        throw std::invalid_argument("Se debe introducir un operador permitido (+,-,*)");
                       
    }
    /*Para evitar errores si de alguna manera no se cumple ninguna de las condiciones anteriores
    se retorna un valor de texto.*/
    return "Default";
}


