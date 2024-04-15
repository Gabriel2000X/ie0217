# Indicaciones de ejecución:

```
1. Para compilar el programa se debe introducir en la consola la siguiente línea:  
g++ -o tarea3.exe ./main.cpp ./clasesYEstruct.cpp

se puede reemplazar tarea3.exe con el nombre que se le quiera poner al ejecutable,  
para esto se debe cambiar "tarea3" por el nombre que se quiera utilizar.   


2. Si se usó la línea proporcionada con tarea3.exe como nombre del ejecutable, se  
debe introducir en la consola la siguiente línea:  ./tarea3.exe   
para correr el ejecutable, si por el contrario se utilizó otro nombre para el   
ejecutable solo se debe escribir la misma línea pero con el nombre seleccionado 
en vez de la palabra "tarea3".
```

# Respuestas a la parte teórica:

```

1.	Un algoritmo es un conjunto de instrucciones bien definidas para resolver un problema en particular.   
Características principales:   
    1.1.	 Entrada y salida definidas con precisión.   
    1.2.	 Pasos claros e inequívocos.   
    1.3.	 Debe escribirse de tal manera que pueda utilizarse en diferentes lenguajes de programación.   
    1.4.	Tienen más eficacia entre más formas diferentes de resolver un problema.    
      
2.	Un algoritmo eficiente realiza la tarea en la menor cantidad de tiempo y utilizando la menor cantidad de memoria posible, por lo que un algoritmo ineficiente utiliza una cantidad de memoria mayor a la necesaria para resolver el problema o utiliza una cantidad de tiempo computacional mayor a la necesaria, puede que sea aún más ineficiente si se cumplen ambos casos.   

3.	Una estructura de datos es un almacenamiento que se utiliza para almacenar datos y organizarlos, para poder acceder a ellos y actualizarlos de manera    eficiente. Su importancia radica en la facilidad que brindan para poder trabajar con grupos de datos y organizarlos de maneras específicas.   

4.	Una estructura de datos estática es una estructura de datos en la que el tamaño en memoria que ocupa la estructura se está definida desde antes de la    ejecución del programa y el tamaño de memoria que ocupa no puede modificarse durante la ejecución, en cambio una estructura de datos dinámica es una en la que se puede modificar el tamaño que ocupa en memoria durante la ejecución del programa.     
Fuente: https://blog.soyhenry.com/que-es-una-estructura-de-datos-en-programacion/#:~:text=Las%20estructuras%20de%20datos%20est%C3%A1ticas,ocupado%20en%20memoria%20puede%20modificarse   

5.	La memoria dinámica corresponde a los espacios en memoria conformados por el heap y el stack, estos espacios en memoria guardan los datos designados por el  programador hasta que este libere los espacios en memoria que se asignaron dinámicamente. Se gestiona utilizando sentencias como:   

    5.1.	 El operador new y el operador delete: con el operador new se declara memoria a una variable de manera dinámica, new regresa la dirección en memoria  de este elemento, por lo que el valor que devuelve new se debe guardar dentro de un puntero, el operador delete libera la memoria dinámica asignada.   
    5.2.	 También pueden utilizarse operadores como el malloc que se utiliza para asignar un bloque de memoria en el heap y devuelve un puntero void al inicio de la memoria asignada. Se puede utilizar el operador calloc que tienen el mismo comportamiento de malloc con la diferencia de que se inicia el bloque de    memoria asignado en cero, además puede utilizarse el operador realloc para poder cambiar el tamaño de un bloque de memoria asignado de manera previa o    redimensionar un bloque existente. Para liberar la memoria asignada con los tres operadores descritos previamente se puede utilizar free.     
Fuente: https://docs.hektorprofe.net/cpp/07-punteros-memoria/07-memoria-dinamica/    

6.	Ventajas:   
    6.1.	 Como la memoria dinámica permite asignar memoria durante la ejecución entonces al utilizarla se tiene una mayor flexibilidad de uso de memoria que   al utilizar la memoria dinámica.    
    6.2.	El programa puede tener algoritmos más eficientes debido a que se puede liberar la memoria utilizada cuando se ya no se necesite, por lo que un    programa que implemente el uso de memoria dinámica puede ser más eficiente que uno que solo utilice la memoria estática.    

    Desventajas    
    6.3.	Se pueden producir fugas de memoria al utilizar memoria dinámica ya que es responsabilidad del usuario liberar los bloques de memoria utilizados  durante la ejecución del programa, lo que no sucede en memoria estática.   
    6.4.	 Existe la posibilidad de que se fragmente la memoria si se utiliza memoria dinámica, lo que puede hacer que sea difícil asignar bloques de memoria   contiguos que tengan el tamaño suficiente para satisfacer las necesidades del programa.   

7.	Un árbol es una estructura de datos jerárquica y no lineal que se compone de nodos que se conectan por aristas, existen diferentes maneras o caminos para  atravesar un árbol, estos consisten en métodos para visitar todos los nodos presentes en un árbol, posee nodos que guardan los valores o datos, estos son    conectados por las aristas, además se tienen algunas características de nodos como el grado, que corresponde a la cantidad de ramas que tiene, la profundidad,  que es el número de aristas desde la raíz hasta el nodo, la altura del nodo, que es el numero de aristas desde el nodo hasta la hoja más profunda, también es     importante mencionar que el nodo más alto de un árbol recibe el nombre de raíz. También se tienen características del árbol en general como su altura, que    corresponde a la altura del nodo raíz o la profundidad del nodo más profundo.    

8.	Una cola es una estructura de datos en la que el primer elemento en entrar es el primer elemento en salir, un uso de las colas en c++ puede ser el    procesamiento de datos o elementos en el orden en el que se reciben, por ejemplo, se puede utilizar en el procesamiento de tareas en un servidor.    

9.	La principal diferencia entre una cola y una pila es que en la cola el primer elemento que entra es el que sale, mientras que en una pila el último elemento en entrar es el primero en salir, para sacar el primer elemento que entró a la pila se necesita sacar todos los demás elementos antes.   

10.	El algoritmo de inserción sirve de la siguiente manera, para almacenar elementos en una tabla hash se necesita convertir su clave asignada a un número   aplicando la función de dispersión a la clave del elemento. Posteriormente el resultado de esta función se mapea en el espacio de direcciones del arreglo, esto  se consigue utilizando una función módulo y tras este paso se obtiene un índice válido para la tabla. Por último, se asigna el elemento en la posición de la   tabla, si otro elemento ya está asignado a esta posición puede buscarse la siguiente posición para asignar este elemento.   
Fuente: https://www.udb.edu.sv/udb_files/recursos_guias/informatica-ingenieria/programacion-con-estructuras-de-datos/2020/i/guia-8.pdf    

11.	La función de dispersión es la función encargada de convertir las claves de los elementos en las direcciones de la tabla, la utilización o implementación de  esta función depende del tipo de clave que se tenga, su importancia radica en que, si las claves no se convierten en direcciones de la tabla, la tabla del todo  no podría construirse debido a que los datos no podrían alojarse en esta.   

12.	La complejidad temporal promedio de búsqueda en una tabla hash bien implementada es igual a O(1).   

13.	Si se quiere poder realizar varias veces sin repetir código se debe crear una función que realice este proceso, esta función debe confirmar si la pila está  llena de antemano, debido a que si la pila estuviera llena entonces no habría posibilidad de realizar el push, si la pila no estuviera llena entonces se debe   sumar uno a la posición top para desplazar el objeto que estaba en top a la segunda posición antes de insertar el nuevo objeto,  posteriormente se debe0 igualar el nuevo valor del objeto en la posición top que estará vacío, al valor del nuevo objeto que se está insertando en el la pila, por último también se debe sumar   un valor de uno al tamaño de la pila.   

14.	Como las operaciones push y pop toman un tiempo constante entonces tienen una complejidad temporal de O(1)   

15.	La lista de datos enlazados funciona debido a que cada nodo almacena los datos y la dirección del siguiente nodo, por lo que se puede avanzar sobre los    elementos de la lista debido a que se tiene la dirección de memoria del siguiente nodo.   

    Ventajas 
    15.1.	No se necesita pre asignar memoria debido a que la lista crece o se reduce durante el tiempo de ejecución, por lo que no se desperdicia memoria,   además esto causa que no sea necesario dar el tamaño de la lista enlazada.   
    15.2.	No es necesario cambiar de elemento cuando se elimina un elemento de la lista, solo se debe actualizar la dirección de memoria presente en el  siguiente puntero.   
    15.3.	Las pilas y colas se pueden implementar de manera fácil con el uso de una lista enlazada.   
    
    Desventajas   
    15.4.	El acceso a un elemento aleatorio de la lista no es posible en una lista enlazada debido a que se crea por asignación de memoria dinámica.   
    15.5.	El recorrido toma más tiempo que el recorrido de un array, por ejemplo, para acceder a un elemento no se puede acceder de manera directa por índice, se tiene que recorrer los demás nodos para poder alcanzar el nodo deseado.   
Fuente: https://barcelonageeks.com/ventajas-y-desventajas-de-la-lista-vinculada/   

16.	Un nodo es una estructura que contiene la información de la entrada actual y la dirección en memoria del siguiente nodo.   
Fuente: https://barcelonageeks.com/ventajas-y-desventajas-de-la-lista-vinculada/   

17.	La diferencia entre una lista enlazada y doblemente enlazada radica en que en una lista enlazada los nodos se enlazan únicamente con el nodo siguiente, pero  en una lista doblemente enlazada los nodos se enlazan tanto con el nodo siguiente como con el nodo anterior, por lo que se puede realizar el recorrido de manera inversa.   
Fuente:  https://barcelonageeks.com/ventajas-y-desventajas-de-la-lista-vinculada/   

18.	Para eliminar un nodo de manera correcta en una lista enlazada se debe crear un puntero que apunte al nodo que se quiere eliminar, se le asigna al nodo    anterior del que se quiere eliminar el nodo siguiente del que se quiere eliminar como siguiente nodo, para de esta manera cerrar el recorrido de la lista, se  elimina en nodo que se quiere eliminar dejando la lista con los enlaces necesarios para que pueda seguir operando.   
Fuente: https://conclase.net/c/edd/cap1   

19.	 Se tienen tres maneras de recorrer un árbol binario:   
    19.1.	El recorrido en orden en el que se recorren todos los nodos en el subárbol izquierdo, luego el nodo raíz y luego todos los nodos en subárbol derecho  
    19.2.	El recorrido en pre orden, en el que se recorre primero el nodo raíz, luego los nodos del subárbol izquierdo y luego los nodos del subárbol derecho.  
    19.3.	El recorrido post orden, en el que se recorren primero todos los nodos en el subárbol izquierdo, luego todos los nodos en el subárbol derecho y luego se recorre el nodo raíz.   

20.	 La complejidad temporal en los tres tipos de recorridos se da por O(n), con n como el número de nodos que tiene el árbol.   

21.	La notación Big O representa el límite superior del tiempo de ejecución de un algoritmo, por lo que proporciona la complejidad del peor de los casos de un  algoritmo y la notación omega representa el límite inferior del tiempo de ejecución de un algoritmo, por lo que proporciona la complejidad del mejor de los casos de un algoritmo.   

Al tener una pila basada en arreglos y utilizar el método push, primero se verifica si la pila está llena, si no está llena entonces se le suma un valor de 1 a  la posición de top y se le asigna el valor de top al nuevo valor que se está introduciendo en la pila, posteriormente se suma un valor de 1 al tamaño de la pila. La complejidad de este algoritmo en notación big O es de O(1)  y la complejidad en notación omega es de Ω(1), esto debido a que se realiza en un tiempo constante porque solo involucra quitar o poner un elemento en la pila.   

```

# Link a la página que aloja la documentación de doxygen:

```

El link a la página web que aloja la documentación del doxygen es el siguiente: https://661cec1ceef1b92ed434d266--peppy-pastelito-ab1890.netlify.app/


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












