# Indicaciones de ejecución:

```
1. Para compilar el programa se debe introducir en la consola la siguiente línea:  
g++ -o tarea4.exe ./main.cpp ./clases.cpp ./funciones.cpp

se puede reemplazar tarea4.exe con el nombre que se le quiera poner al ejecutable,  
para esto se debe cambiar "tarea4" por el nombre que se quiera utilizar.   


2. Si se usó la línea proporcionada con tarea4.exe como nombre del ejecutable, se  
debe introducir en la consola la siguiente línea:  ./tarea4.exe   
para correr el ejecutable, si por el contrario se utilizó otro nombre para el   
ejecutable solo se debe escribir la misma línea pero con el nombre seleccionado 
en vez de la palabra "tarea4".
```

# Respuestas a la parte teórica:

```
   1. Templates

   1. 
        Los templates son una característica del lenguaje que permite crear código genérico que puede trabajar con diferentes tipos y estructuras de datos. Esto    quiere decir que se pueden escribir e implementar funciones y clases que funcionan con distintos tipos de datos, por lo que se evita tener que escribir un     código diferente para cada tipo de dato.
   
   
        Un ejemplo del uso de templates puede ser el de una función que suma dos valores, esta función puede ser declarada de la siguiente manera:

        template  <typename T >
        T add (T num1, num2) {  
            return (num1 + num2)
        } 

   Con esta función no se necesita utilizar una función para cada tipo de dato, se puede adaptar el template sobrecargándolo para cada tipo de datos.

   
   2. 
        La sobrecarga se realiza de la siguiente manera, si se tiene por ejemplo la función plantilla definida en la pregunta 1 entonces para sumar enteros se      realiza:
   
        suma = add<int> (5, 4);
        Se sobrecarga con el tipo que se quiere utilizar y se le dan los argumentos como a una función normal, este es el caso del tipo entero, lo mismo se puede utilizar para los otros tipos de datos.
     
   3. 
        La estructura se parece a la definición de funciones, antes de definir la clase se debe utilizar la línea template  <class T > para declarar que se utilizará un tipo T de dato dentro de la clase, ya sea en sus atributos, en sus métodos o en ambos, posteriormente al definir los métodos y atributos de la clase se les pone el tipo T en vez de utilizar el tipo int, float o cualquiera de los tipos predeterminados, también si se quiere que se guarden valores externos con tipos de datos especificados en la declaración de la clase se deben introducir en el constructor.   

    2. Excepciones

   4. Los bloques se describen a continuación:
        4.1. bloque try: El bloque try encapsula el código que puede generar excepciones, por lo que mientras este bloque se ejecuta se monitorea en busca de excepciones, si se encuentra una excepción se le pasa el manejo al bloque catch respectivo, esto porque todos los bloques try deben tener un bloque catch para manejar sus excepciones.

        4.2. bloque catch: se utiliza para manejar excepciones lanzadas en el bloque try asociado a ellos, además el bloque catch debe recibir como argumento el tipo de excepción que se espera recibir para que pueda manejarlo, generalmente se utiliza para devolver un mensaje o código de error cuando se recibe una excepción.

        4.3. bloque o comando throw:  se utiliza throw para lanzar una excepción de un tipo determinado, puede ser un tipo predeterminado o un elemento especifico creado por el usuario, se utilizan dentro de un bloque try para que se inicie la búsqueda de un bloque catch que pueda recibir el tipo de excepción lanzada y manejarla.


   5.   
   
        5.1. Se tiene la excepción std::invalid_argument, la cual se utiliza cuando se le pasa un valor inválido como argumento a una función, por ejemplo en     esta misma tarea se deben utilizar excepciones si se le pasa un valor negativo como parámetro para la cantidad de filas o columnas de una matriz al método que establece estos valores, por lo que si se pasa un valor negativo o cero como argumento a este método entonces se puede utilizar esta excepción para detener la sección del programa en la que se utiliza este método debido a que se recibió un valor inválido.

        5.2. Se tiene la excepción std:out_of_range, la cual se utiliza cuando un índice se sale del rango permitido, por ejemplo, se podría utilizar si se necesita acceder a un vector que contiene tres elementos y se intenta accesar a un cuarto elemento mediante índices, esto puede ser manejado por esta excepción.

        5.3. Se tiene la excepción std::runtime_error, la cual se utiliza cuando se necesita indicar que ocurren errores durante la ejecución que no pueden ser manejados en el tiempo de la compilación, se podría utilizar si se tiene una función que escribe o lee archivos y no puede escribir en un archivo durante la ejecución debido a que este no existe, si esto pasa se puede lanzar esta excepción como resultado.


   6. 
        Una política de manejo de excepciones es un conjunto de reglas que especifican como deben manejarse las excepciones en un programa o proyecto, estas son importantes para mantener la legibilidad del código, esto porque si se tiene una serie de reglas de cuándo y cómo utilizar y manejar excepciones entonces el uso de estas excepciones no será entendido solo por la persona que programa el código si no por las personas que lean y analicen el código posteriormente.


   7.  

        El operador noexcept es un operador que se utiliza para verificar si una expresión puede lanzar excepciones, es un operador booleano debido a que devuelve true si la expresión no puede lanzar excepciones, puede utilizarse en c++ para que una función template o método de una clase template devuelva o lance excepciones para ciertos tipos de datos y para otros no.

        Fuente: https://en.cppreference.com/w/cpp/language/noexcept

   
   8.

        La excepción std::logic_error se utiliza para manejar errores de lógica dentro del código mientras que std::runtime_error se utiliza para manejar errores que existen fuera del scope del programa y generalmente solo se pueden ver en tiempo de ejecución. 

        Fuentes: 
        https://gcc.gnu.org/onlinedocs/gcc-4.8.0/libstdc++/api/a00967.html
        https://gcc.gnu.org/onlinedocs/gcc-4.8.0/libstdc++/api/a00864.html


   9.  
        Si no se atrapa la excepción por ningún bloque catch en su mismo nivel ni en ningún otro nivel entonces el programa se termina de manera repentina, esto se hace de manera automática mediante la función std::terminate() , la cual llama a std::abort() para terminar el programa.
        
        Fuente: https://docs.hektorprofe.net/cpp/13-manejo-excepciones/


    3. STL (Standard Template Library)

   
   10.  

        10.1 vector: sirve para cuando se necesita inserción o eliminación rápida de la parte final, hay acceso a cualquier elemento.
        10.2 list: sirve para cuando se necesita insertar o eliminar elementos en cualquier lugar del contenedor y se necesita un contenedor que 
        pueda crecer estáticamente.
        10.3 map: se refiere a una hash table y permite asociar un elemento con una clave para su fácil manipulación y busqueda
        10.4 stack: un contenedor en el cual el último en entrar es el primero en salir, se puede usar en implementación de algoritmos como el DFS
        10.5 deque: un contenedor que permite acceso aleatorio a cualquiera de sus elementos y se puede usar para implementar stacks o queques

   11. 

        Un iterador representa la posición de un elemento dentro de un contenedor, se utiliza para iterar (ir avanzando sobre los elementos dentro de un
        contenedor), se usan diferentes elementos para posición, .begin() apunta al primer elemento del contenedor, .end() apunta al espacio más allá del final 
        del contenedor y utilizando .begin + i se puede apuntar al elemento en el índice i.  

   12. 

        12.1 find: Es un algoritmo que busca un elemento en un rango determinado.
        12.2 binary_search: Es un algoritmo que realiza una búsqueda binaria en un rango determinado.
        12.3 count: Es un algoritmo que cuenta el número de ocurrencias de un elemento determinado en un rango.

   13.  

        Para lograr esto se necesita definir un algoritmo personalizado y una vez definido se debe pasar como argumento a una 
        de las funciones algoritmicas de STL.
         
   
  
        
   
   
```

# Link a la página que aloja la documentación de doxygen:

```

El link a la página web que aloja la documentación del doxygen es el siguiente: https://66388aebe4a6428d65d2a813--phenomenal-torte-4bd023.netlify.app/index.html


```

# Información sobre markdown

```
El formato markdown es útil para manipular textos cuyo destino es una página o sitio web, pero que no se programa en html   
por lo que hace más fácil la manipulación de texto.

algunos ejemplos de su sintaxis son:

*texto en cursiva*
**texto en negrita** 
***texto en cursiva y negrita***
# encabezado

```
# Información sobre markdown


 ```
Se utiliza CamelCase con la primera palabra en minúscula y las demás en mayúscula.

```
