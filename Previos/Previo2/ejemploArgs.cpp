// Ejemplo de uso de argc y argv

/* se incluye iostream, que sirve para
poder imprimir texto como salida. */
# include <iostream>

/* Se define el bloque main que 
será la función principal del programa
con los argumentos necesarios en la función main */
int main(int argc, char* argv[]) {  

    /* Se utiliza std::cout para imprimir argc y los
    diferentes argv que se tienen, si se le dan 3 argumentos
    por en la línea de comandos a la hora de ejecutar el 
    programa, se tiene que imprimira 4 argv debido a que el 
    primero siempre es el nombre del programa y luego imprime 
    los demás. Además imprime argc que sería la cantidad de 
    argumentos que se le dieron al programa en la línea de comandos
    si no se le da ninguno imprime 1 por defecto porque siempre
    tiene el argumento del nombre del programa, por lo que a la 
    cantidad de argumentos que se le den siempre se le sumará 1,
    si se le dan 3 imprime un 4. */

    /* Se utiliza el operador << para enviar la información a std::cout
    y se utiliza std::endl para terminar la línea luego de imprimir la 
    información que se le envía a std::cout */ 
    std::cout << "argc: " << argc << std::endl;
    std::cout << "argv[0]: " << argv[0] << std::endl;
    std::cout << "argv[1]: " << argv[1] << std::endl;
    std::cout << "argv[2]: " << argv[2] << std::endl;
    std::cout << "argv[3]: " << argv[3] << std::endl;

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;

}