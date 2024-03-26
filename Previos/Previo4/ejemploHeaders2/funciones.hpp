// Archivo .hpp que define la estructura de las funciones que se utilizarán

/* Si FUNCIONES_HPP no está definido
este se define */
#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP 


/* Se incluye clases.hpp debido a que los argumentos
recibidos por la función calculateAverage son 
instancias de la clase Student, por lo que se 
necesita el archivo que declara la clase. */
# include "clases.hpp"

void calculateAverage (Student s1, Student s2);


#endif // FUNCIONES_HPP