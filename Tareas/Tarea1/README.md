# Indicaciones de ejecución:

```
1. Para compilar el programa se debe introducir en la consola la siguiente línea:  
g++ -o juego.exe ./main.cpp ./Funciones.cpp  

se puede reemplazar juego.exe con el nombre que se le quiera poner al ejecutable,  
para esto se debe cambiar "juego" por el nombre que se quiera utilizar.   


2. Si se usó la línea proporcionada con juego.exe como nombre del ejecutable, se  
debe introducir en la consola la siguiente línea:  ./juego.exe   
para correr el ejecutable, si por el contrario se utilizó otro nombre para el   
ejecutable solo se debe escribir la misma línea pero con el nombre seleccionado 
en vez de la palabra "juego".
```

# Respuestas a la parte teórica:

```
1. La principal diferencia entre c y c++ es que en c no existe la programación   
orientada a objetos y en c++ si está presente.   

2. git init: sirve para crear un repositorio de git en el directorio actual.   
   para usarlo se debe escribir: git init   

   git add: se usa para añadir archivos al área de preparación antes de realizar   
   el commit.  
   Se utiliza escribiendo: git add nombreDelArchivo.   
      
   git commit: se utiliza para realizar guardar el estado del código en el   
   repositorio local.   
   Se utiliza escribiendo: git commit nombreDelArchivo  
   aunque puede incluirse la firma del usuario y una descripción del commit desde   
   afuera del menú de commit si se usa: git commit nombreDelArchivo -s -m    

   git push: se utiliza para cargar o subir el estado del código o proyecto   
   que se guardó previamente utilizando git commit desde el repositorio local   
   a github.  
   Se utiliza escribiendo: git push   

   git pull: Se utiliza para bajar o cargar el estado del código o proyecto   
   desde github hacia el repositorio local.   
   Se utiliza escribiendo: git pull   

   git clone: se utiliza para crear una copia de un repositorio.  
   Se usa de la siguiente manera: git clone ruta/de/ejemplo/repositorio    

   git branch: tiene múltiples usos, se puede utilizar para obtener una   
   lista de las ramas o branches, para borrar ramas y crear ramas.   
   Para obtener una lista de las ramas se usa: git branch   
   Para borrar ramas se usa: git branch -d nombreDelBranch   
   Para crear ramas se usa_ git branch nombreDelBranch

   git merge: se utiliza para unir la rama o branch sobre la que se está   
   trabajando con una que se especifique en el comando.   
   Se utiliza de la siguiente manera: git merge nombreDelBranch   

   3. Según el sitio oficial de git, git es un sistema de control de versiones   
   de fuente abierta y está diseñado para manejar proyectos de manera rápida    
   y eficiente. Al ser un sofware de control de versiones ayuda a manejar   
   diferentes versiones de proyectos o archivos dentro de estos.   

   4. Un conflicto de fusión es un conflicto que ocurre cuando se quiere hacer   
   un merge entre entre dos ramas o branches y se presentan diferencias en las   
   mismas lìneas entre el archivo presente en una rama y el archivo presente en   
   otra rama, se puede resolver cambiando uno de los archivos manualmente   
   o utilizando git checkout para deshacer los cambios hechos en uno de los 
   archivos   

   5. Un archivo git ignore es un archivo de texto que contiene extensiones de   
   archivos, este se usa para que git ignore los archivos con las extensiones   
   contenidas en este archivo y así estos archivos no sean subidos a github,   
   solo se quedan en el repositorio local.   

   6.  Una pull request es una solicitud para que los cambios realizados en una  
   rama externa a main y que ya se subieron al repositorio de github se añadan   
   a la rama principal realizando un merge. Se utiliza generalmente cuando hay   
   más de una persona trabajando en un proyecto para que los demás integrantes   
   o los designados como revisores aprueben los cambios realizados, se puede   
   crear una pull request en la sección "pull requests" del un repositorio de   
   github, eligiendo las ramas que se quieren comparar, luego si los cambios son   
   aprovados se utiliza la opción "merge pull request" lo que causa que las ramas   
   se combinen y los cambios se muevan a la rama principal.   

   7. La principal diferencia entre los lenguajes compilados y los interpretados   
   es que los lenguajes interpretados utilizan un interprete que lee, traduce y 
   ejecuta el programa línea por línea, mientras que los lenguajes compilados 
   se traduce el código completamente a lenguaje de máquina que es un lenguaje 
   que puede ser entendido por la computadora antes de ser ejecutado, además un 
   lenguaje compilado se debe compilar de manera manual, mientras que un lenguaje 
   interpretado no necesita esto. 

   Ejemplos de uso de lenguaje compilado: es más óptimo utilizar lenguajes compilados   
   en sistemas o dispositivos embedidos como los microcontroladores y en la creación    
   de sistemas operativos, esto porque los lenguajes compilados generalmente permiten   
   un control mayor o manual sobre la memoria que se utiliza, lo que permite dedicar   
   los recursos óptimos para el funcionamiento del sistema.   

   Ejemplos de uso de lenguaje interpretado: es más óptimo utilizar lenguajes interpretados   
   en el desarrollo de aplicaciones web y en automatización de tareas debido a que estos
   lenguajes tienen la capacidad de ejecutar el programa o código escrito más rápidamente.

   8. A la hora de la compilación de un código en un lenguaje compilado, el compilador crea   
   archivos con código maquina, la función principal del linker o enlazador es vincular estos     
   archivos objeto creados por el compilador, es escencial para el proceso de compilación porque   
   resuelve las referencias a funciones, librerías o a otros archivos presentes en el código   
   y genera el ejecutable del programa.   

   9. 9.1. Se crea una rama aparte de la principal para realizar los cambios   
      9.2. Se realizan cambios y se utiliza git add para incluir estos cambios   
      en el espacio de preparación.   
      9.3. Se utiliza git commit para confirmar los cambios que se subieron al   
      espacio de preparación.   
      9.4. Se utiliza git push para subir los cambios del repositorio local al   
      repositorio remoto, como se está usando una rama diferente de main entonces   
      se usa git push origin NombreDeLaRama.   
      9.5. Se crea una pull request para que los cambios realizados sean revisados   
      y añadidos a la rama principal.   
      9.6. Si los cambios son aprovados se utiliza la opción merge en github para   
      combinar la rama que tiene los cambios con la rama principal y así hacer   
      los cambios oficiales.   

   10. Declarar una variable significa crear una variable y asignarle un nombre,   
   por ejemplo al hacer int num; se declara una variable entera de nombre num,   
   para inicializar la variable se le da un valor, por lo que si la variable ya   
   está creada, para inicializarla se utiliza num = 14;.

   11. La sobrecarga de funciones ocurre cuando se tienen dos o más funciones que    
   tienen el mismo nombre pero un diferente número o tipo de argumentos que reciben,   
   esto brinda flexibilidad al uso de funciones ya que se puede tener un solo nombre    
   de función que realice distintas tareas según la cantidad o tipo de argumentos que       
   recibe, lo cual puede hacer el código más entendible.

   12. Un puntero es un tipo de variable que almacena la dirección de memoria de otra   
   variable, por lo que apunta hacia la dirección de memoria de esa otra variable,   
   se utiliza pasandole el valor de la referencia en memoria de una variable a la    
   variable puntero, se se tiene una variable entera llamada num, y se crea una   
   variable puntero int *puntero, se puede usar puntero = &num para guardar la   
   información del espacio en memoria de num en puntero, los punteros se pueden 
   usar por ejemplo para asignar memoria de manera dinámica a variables, si por   
   se quiere asignar memoria de forma dinámica a un array con cadenas de texto en su 
   interior entonces se puede usar un puntero para guardar la ubicación en memoria de
   ese string, y utilizar *puntero = new array[tamañoDelArray], el new se encarga de 
   que se asigne la memoria dinámicamente al array.

   13. en git una rama es un espacio paralelo al espacio principal en el que se pueden   
   realizar cambios en los archivos del proyecto y estos cambios solo se reflejan en   
   ese espacio, no se reflejan en el espacio principal ni en ninguna otra rama,   
   se utilizan creando la rama con git branch nombreDeLaRama, cambiando a la rama con   
   git checkout nombreDeLaRama y utilizando los comandos git add, git commit y git push origin   
   de los que se esribió anteriormente para realizar cambios y subirlos a github de manera   
   que luego se pueda utilizar una pull request para oficializar esos cambios.   

   14. La principal diferencia entre un bucle do-while y un bucle while es que el bucle do-while    
   realiza lo que esté dentro de el por lo menos una vez aunque la condición no se cumpla, luego   
   si la condición se cumple sigue reproduciiendo el bucle, pero el bucle wihle solo realiza lo que   
   esté dentro de este si se cumple la condición del bucle.   

   15. Es útil dividir los proyectos en archivos .hpp, .cpp y main.cpp debido a que dividiendo los   
   archivos de esta manera, el código se puede visualizar de una manera más ordenada y además se    
   puede incluir código dentro de un proyecto sin saturar el archivo principal.   

      15.1 Propósito de archivos .hpp: estos archivos almacenan las declaraciones de funciones, estructuras,      
      clases y variables para que sean fáciles de incluir, compartir y utilizar en diferentes archivos del código   
      fuente del proyecto que se esté realizando.   
      
      15.2 Propósito de archivos .cpp: estos archivos almacenan las definiciones de las funciones, estructuras,    
      clases y variables que se definen en los archivos .hpp, dentro de los archivos .cpp se incluyen los archivos   
      .hpp correspondientes, los archivos .cpp guardan las declaraciones para no tener que realizarlas en el espacio   
      principal del programa.   

      15.3 Propósito de archivos main.cpp: estos archivos contienen el código que utiliza las funciones, estructuras,   
      clases y variables que se almacenan en los demás archivos para realizar las acciones u operaciones necesarias   
      para que el programa se comporte de la manera que se necesita.

   16. Dependiendo de su tipo las variables en c++ se guardan en lugares diferentes, las variables locales se guardan    
   en un espacio llamado pila de ejecución y se desruyen cuando se termina de usar la función o el contenedor dentro   
   del que están declaras, en cambio las variables globales se guardan en una parte de la memoria estática, por lo que    
   están presentes durante todo el programa. 

   17. La diferencia radica en que si se pasan parámetros por valor a una función, se está pasando una copia del valor   
   del parámetro a la función, por ejemplo si se tiene int num = 5 y se le pasa num a la función, se le pasa una copia   
   del 5, pasar parámetros por puntero pasa la dirección en memoria del parámetro a la función y mediante el puntero se   
   puede acceder a este argumento y cambiarlo, por último, pasar argumentos por referencia pasa una referencia del argumento   
   original a la función por lo que no se necesita usar un puntero para modificar el argumento, además cualquier cambio    
   realizado sobre el argumento también cambiará fuera de la función.   

   18. Cuando se utiliza un puntero para apuntar a un arreglo en C++, inicialmente se apunta a la dirección de memoria del   
   primer elemento del arreglo, para acceder a todos los datos de ese arreglo mediante el puntero y no solo a la primera   
   entrada se puede utilizar un ciclo for en el que i empiece en cero y aumente hasta llegar al valor de la longitud del 
   arreglo menos 1 y debido a que puntero aumenta a la dirección de la entrada cero, puntero +1 apunta a la dirección de   
   la entrada 1 y así sucesivamente, se puede poner puntero + i para acceder a cada dirección de memoria de los elementos   
   del ciclo for mientras aumentan las iteraciones.   

   19. Los punteros dobles son empleados para apuntar a un puntero que esté apuntando a una variable, consisten en un puntero   
   que apunta a otro puntero, por lo que un puntero doble es una variable que guarda la dirección en memoria de otro puntero   
   que a su vez apunta a una variable de tipo entero, flotante u otro tipo que no sea puntero. Un ejemplo de una situación en   
   la que es beneficioso trabajar con punteros dobles es cuando se trabaja con matrices grandes, los punteros dobles sirven   
   para acceder de una manera sencilla al los elementos de la matriz, además pueden ser útiles a la hora de pasarle estas   
   matrices como argumentos a funciones ya que de esta manera se pueden usar los punteros para cambiar elementos individuales   
   de la matriz dentro de la función y que se refleje fuera de esta.   

   20. Esta directiva se utiliza para evitar la inclusión múltiple de archivos de encabezado en archivos fuente, por ejempo si 
   se utiliza:
      #ifndef FUNCIONES_HPP 
      #define FUNCIONES_HPP

      declaraciones

      #endif

   Se crea la etiqueta FUNCIONES_HPP al principio del archivo .hpp donde se esté usando siempre y cuando no se haya creado antes,    
   esto quiere decir que se crea si el archivo no se ha incluido antes en el archivo fuente .cpp que se esté utilizando, además   
   todas las declaraciones que se quieran realizar se deben hacer antes de utilizar #endif, esto para que todo el contenido del   
   archivo .hpp se incluya solo una vez.

   21. El puntero this es un puntero que solo se puede accesar dentro de los métodos de una clase o una estructura, se usa para    
   apuntar a la dirección de memoria del atributo de la estructura o clase que se está utilizando, por ejemplo si dentro de un   
   método de una clase se quiere accesar a la dirección de un atributo llamado numero entonces se debe usar this -> numero.   

   22. Un arreglo es una estructura de datos estática, lo que quiere decir que se declara el tamaño máximo del arreglo desde el    
   principio y este no puede modificarse, mientras que el tamaño de la lista no debe declararse, estas pueden aumentar su tamaño    
   o disminuirlo según se necesite. Además las listas tienen capacidades de ser recorridas de manera circular ya que se manejan   
   por punteros, se puede enlazar la última entrada de una lista con la primera entrada de esta y recorrerla de manera circular,   
   en cambio los arreglos no tienen esta capacidad, por lo que si se recorre un arreglo por ejemplo con un ciclo for y se llega   
   a una i mayor que la cantidad de entradas se pueden encontrar problemas ya que se accede a lugares en memoria que no están   
   asociados con los elementos del arreglo.   
   
   23. Un memory leak o fuga de memoria sucede cuando no se libera correctamente la memoria que se asignó en un programa y esta   
   memoria sigue ocupada aunque ya no se esté utilizando, al acumularse memoria en uso el rendimiento del programa y el equipo baje   
   y no sea el esperado debido al uso excesivo de memoria.      


```

```

El link a la página web que aloja la documentación del doxygen es el siguiente: https://66069cf2cac645da3972e6c9--keen-fox-5c4fef.netlify.app/index.html


```