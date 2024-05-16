


# Indicaciones de ejecución:

```
Las instrucciones para compilación de la tarea son las siguientes:

1. para compilar y generar el ejecutable se debe escribir en la consola: make build
2. para ejecutar el archivo ejecutable creado con make build se debe escribir en la consola: make run
3. para compilar y ejecutar el programa de una sola vez se debe usar: make all
4. para eliminar los archivos generados al compilar la tarea se debe usar: make clean

```

# Respuestas a la parte teórica:


```
Primera parte teórica   

1.	Las expresiones regulares son patrones utilizados para buscar y manipular cadenas de texto de una manera flexible,    
    tienen propósitos como realizar búsquedas de patrones dentro de un texto, validar cadenas de texto, realizar sustituciones    
    en cadenas de texto, entre otros.    
      
2.	
2.1.	El punto (.) significa que la expresión coincide con cualquier caracter que le siga al patrón de la expresión.   
2.2.	El asterisco (*) significa que las expresiones del elemento anterior a este pueden tener cero o más repeticiones en la cadena introducida.   


3.	 Un grupo de sub expresiones pueden agruparse conteniéndolas todas dentro de un paréntesis.     

4.	La barra invertida tiene la función de buscar un carácter especial como un carácter literal en la expresión regular, por ejemplo,    
    si se quiere buscar un punto en vez de utilizar su función en la expresión regular entonces se usa la barra o slash invertido.	  

5.	Si se usan paréntesis se pueden formar diferentes grupos de caracteres de una expresión regular, luego es posible utilizar regex_search con la       
    expresión a verificar, una variable smatch y la expresión regular, luego se puede usar esta expresión para saber si en algún grupo hubo una    
    coincidencia, otra opción es utilizar regex_match para comparar la expresión regular con la cadena introducida al programa.  	   

6.	\d hace que exista coincidencia con los dígitos (valores numéricos de una expresión) y \D hace que exista coincidencia con los    
    caracteres que no son numéricos.	 

7.	Una clase o conjunto de caracteres se puede representar utilizando los corchetes [] para delimitar ese conjunto de caracteres que serán    
    permitidos en esa sección.	   

8.	El carácter $ se utiliza en una expresión regular para indicar que la coincidencia debe terminar al final de la cadena.   

9.	Dependiendo de que tan específica sea la validación se puede hacer una expresión para todo el correo completo o si es necesario que se 
    verifiquen diferentes partes del correo por separado entonces se pueden definir clases o métodos que obtengan cada parte de la cadena de texto del correo y métodos que verifiquen estas cadenas de texto mediante expresiones regulares, de esa manera se puede verificar el correo. 	 

10.	La utilización de expresiones regulares puede mejorar el rendimiento de una aplicación de software si se realizan de manera correcta,    
    esto porque no se reduce la cantidad de métodos o funciones necesarias para verificar que las entradas sean válidas utilizando expresiones    
    regulares, además se pueden tomar ciertas medidas para optimizar las expresiones regulares complejas, por ejemplo: la utilización de caracteres    
    literales en vez de caracteres comodín como puntos y asteriscos debido a que se necesitaría tomar en cuenta más posibilidades a la hora de la ejecución, otro método puede ser el limitar el uso de otros operadores de repetición como +.   

11.	Los Makefile son un tipo especial de archivo que es utilizado para compilar ciertas partes de un programa grande o todo este programa dependiendo    
    de lo que   se necesite, esto se hace de manera automática al introducir ciertos comandos como make con un target especificado,    
    básicamente su función es facilitar la compilación de una parte o de todo el proyecto.	    

12.	Las reglas implícitas son reglas que ya están definidas de manera predeterminada que make utiliza para construir los archivos ejecutables    
    o en otro caso los archivos que se desea generar, las reglas explicitas son las reglas definidas por el usuario en el Makefile para poder    
    especificar como se deben construir los archivos ejecutables del proyecto.	   

13.	Las variables en los Makefiles tienen como propósito almacenar valores que se pueden utilizar en varias partes del archivo,    
    esto además facilita la personalización del Makefile debido a que no se tiene que cambiar cada instancia del valor en el    
    archivo si se quiere modificar, con modificar el valor original de la variable se modifican todas sus instancias.   

14.	Los targets en un Makefile vienen siendo los resultados que se desean obtener al ejecutar el Makefile, cada uno de los targets    
    debe definirse como una regla dentro del Makefile para que puedan funcionar correctamente.   

15.	Es útil dividir un proyecto en c++ en archivos tanto por el aislamiento de posibles errores, el ordenamiento del código y    
    la facilidad para el control de versiones que produce la separación en archivos diferentes, como luego de un cambio en un    
    archivo o varios el Makefile solo debe recompilar los archivos que cambian y su dependencia entonces el proceso de compilación    
    será más fácil de realizar porque solo se compilarán los archivos necesarios.	 

16.	Las dependencias entre los archivos fuente de un Makefile pueden definirse utilizando una regla, por ejemplo: suponiendo que CXX es una    
    variable que contiene el compilador a utilizar y que CXXFLAGS las banderas de compilación entonces se puede utilizar la siguiente regla:    

    main.o: main.cpp funciones.hpp   
    $(CXX) $(CXXFLAGS) -c $<   

    En esta regla se define que main.cpp y funciones.hpp son dependencias de main.o, también puede hacerse una regla que compile    
    todos los .cpp que son  dependencias entre ellos para que el programa funcione   


17.	Para poder compilar un proyecto en diferentes sistemas operativos con un solo makefile se pueden definir reglas y variables que solo   
    se ejecuten en ciertos sistemas operativos utilizando condicionales, se pueden usar ifeq e ifdef para poder definir que el comportamiento   
    sea especifico para diferentes sistemas operativos.   


18.	El target clean generalmente se declara como la regla que borra todos los archivos creados por el makefile, mientras que el target all generalmente   
    se encarga de compilar y ejecutar el proyecto mediante los archivos fuente.   

19.	Si se definen variables dentro del makefile, se pueden sobreescribir estas variables dentro de la línea de comandos, por ejemplo si se tiene una   
    variable llamada ARCHIVO se puede hacer lo siguiente make ARCHIVO = otroArchivo.cpp, esto hará que se le pasen los argumentos de los archivos que   
    necesita desde la línea de comandos.   

20.	 %.o: %.cpp   
	$(CXX) $(CXXFLAGS) -c $< -o $@   


Segunda Parte teórica:

1. 
    1.1. CC generalmente se utiliza para contener el nombre del compilador a utilizar   
    1.2. CFLAGS se utiliza para pasar las opciones de compilación al compilador   
    1.3. CXXFLAGS se utiliza para pasar las opciones de compilación al compilador de c++   
    1.4. LDFLAGS se utiliza para pasar las opciones de enlazado a seguir cuando se crea un ejecutable a partir de    
    archivos objeto.  

2. Una regla se compone de un target, una lista de dependencias y los comandos para construir un target    

3. Los targets son los resultados que se desean obtener al ejecutar un makefile, los prerequisitos se relacionan a su    
respectivo target mediante la regla que genera al target y si no están construidos se construiran con sus reglas antes    
de intentar construir el target principal.   

4. La bandera -I se utiliza para especificar la ruta de budqueda de los archivos de encabezado durante la compilación,   
   la bandera -C se utiliza para especificar que se debe generar un archivo objeto a partir del código fuente,   
   la bandera -o se utiliza para especificar el nombre del archivo generado por el compilador.   

5. Una variable en un makefile puede definirse de la siguiente manera: VARIABLE = valor y se utilizan para   
    poder hacer el código más versátil ya que en vez de incluir el nombre de la regla, target o archivo que   
    se guarde dentro de la variable cada vez que se necesite, se utiliza la variable, esto hace que si se quiere   
    realizar cambios solo se deba cambiar el contenido de la variable y el código seguirá funcionando, si no se   
    tuviera la variable se debería cambiar cada instancia en donde se utilizara el elemento dado.   

6. La arroba en un makefile se utiliza como un prefijo en una regla para que a la hora de la ejecución del makefile   
   no se imprima en la salida cuando se ejecuta.   

7. se utiliza PHONY en un makefile para especificar objetivos que no representan archivos del sistema si no acciones a    
tomar.    

```

# Link a la página que aloja la documentación de doxygen:

```

El link a la página web que aloja la documentación del doxygen es el siguiente: https://6643073523917d9f5abf07c5--dreamy-pothos-2f87ed.netlify.app/


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
# Información sobre la convención utilizada


 ```
Se utiliza CamelCase con la primera palabra en minúscula y las demás en mayúscula.

```












