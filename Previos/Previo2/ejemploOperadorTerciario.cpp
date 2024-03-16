// Ejemplo de uso de operador Terciario ?:

/* se incluye iostream, que sirve para
poder imprimir texto como salida, como
el hola mundo. */
# include <iostream>

/* Se define el bloque main que 
será la función principal del programa */
int main() {  

    /* Se utiliza std::cout para imprimir 
    el Hola Mundo, estudiantes de ie0217! seguido de un salto de página
    en la consola, el operador << tiene la función de enviar datos al std::cout*/
    std::cout << "Hola Mundo, estudiantes de ie0217!\n";
    
    /* Se declara var1 como un entero y se inicializa asignandole
    el valor de cero, además se declara var2 como un entero, pero 
    no se le asigna un valor de inmediato*/
    int var1 = 0;
    int var2;

    /* Se utiliza el operador ?: para asignar el valor a var2, 
    si se tiene que var1 es igual a cero entonces se le asigna 
    el valor de 15 a var2, si esta condicion no se cumple entonces
    se le asigna un valor de 27 a var2*/
    var2 = (var1 == 0) ? 15 : 27;

    /* Se utiliza std::cout para imprimir var2:, realiza un salto 
    de página y luego realiza la impresión del valor de var2, como 
    se mencionó anteriormente, lo que se quiere que se imprima en la 
    consola se envía a std::cout mediante el operador << */
    std::cout << "var2: \n" << var2 << "";

    /* se retorna un valor entero de cero finalizando
    la función main */
    return 0;

}