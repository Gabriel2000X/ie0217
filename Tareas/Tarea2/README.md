# Indicaciones de ejecución:

```
1. Para compilar el programa se debe introducir en la consola la siguiente línea:  
g++ -o tarea2.exe ./main.cpp ./continente.cpp ./planeta.cpp ./paises.cpp ./funciones.cpp

se puede reemplazar tarea2.exe con el nombre que se le quiera poner al ejecutable,  
para esto se debe cambiar "tarea2" por el nombre que se quiera utilizar.   


2. Si se usó la línea proporcionada con tarea2.exe como nombre del ejecutable, se  
debe introducir en la consola la siguiente línea:  ./tarea2.exe   
para correr el ejecutable, si por el contrario se utilizó otro nombre para el   
ejecutable solo se debe escribir la misma línea pero con el nombre seleccionado 
en vez de la palabra "tarea2".
```

# Respuestas a la parte teórica:

```
   1. Es un paradigma de programación que se centra alrededor de los objetos que los programadores manipulan en vez de centrarse alrededor de funciones   
   Sus principios son abstracción, encapsulamiento, polimorfismo y herencia.      

    fuente:  https://ed.team/blog/que-es-la-programacion-orientada-a-objetos-poo
   
   2. El ocultamiento de datos consiste en limitar el acceso directo a ciertos datos de un objeto como datos y atributos, en c++ se  utilizan los    
   tipos de datos privados y protegidos para que otros métodos no accedan a estos métodos.    

   3. Una clase se refiere a la estructura o molde dentro del que se declaran métodos y atributos, mientras que un objeto es lo que genera la clase,    
   este puede acceder a los atributos y métodos pero no generar otros objetos.    

   4. El polimorfismo es la capacidad de un objeto de tomar muchas formas, se puede lograr en c++ por ejemplo si se declara un método virtual en una    
   clase y se declara en diferentes subclases de manera distinta.       

   5. El encapsulamiento se refiere a incluir todos las funciones y variables relacionadas en una sola estructura, esta estructura viene siendo una clase, las    funciones son los métodos y las variables son los atributos.   

   6. El constructor es un método que se ejecuta en cada instancia de la clase y se encarga de inicializar variables de la clase y ejecutar métodos en su   
   interior para cada instancia de su clase.   

   Un destructor es un método que siempre se utiliza una instancia de la clase, se encarga de destruir o terminar los métodos y atributos de la instancia    
   de la  clase.      

   fuentes: https://www.codingame.com/playgrounds/50577/miembros-especiales-de-la-clase-en-c-practica-2/   constructores#:~:text=Constructores%20de%20la%20clase%20en,los%20m%C3%A9todos%20de%20la%20clase.   

   https://www.codingame.com/playgrounds/50577/miembros-especiales-de-la-clase-en-c-practica-2/destructor   


   7. Para declarar una función clase abstracta se debe declarar al menos una función o método virtual puro, su función es ser un molde para diferentes    
   clases derivadas que definirán el comportamiento de los métodos virtuales.   

   fuentes: https://learn.microsoft.com/es-es/cpp/cpp/abstract-classes-cpp?view=msvc-170   
   
   8. Es un constructor que tiene una referencia a un objeto de la misma clase como parámetro de entrada, esto hace que las variables del objeto que se está    creando se inicialicen con los valores  de las variables del objeto que se pasa como parámetro, se puede utilizar para crear objetos de una clase que    
   traigan un valor predeterminado en ciertos atributos.   

   fuentes: https://www.codingame.com/playgrounds/50577/miembros-especiales-de-la-clase-en-c-practica-2/constructores#:~:text=Constructor%20de%20copia%3A%20Es%20un,que%20se%20pasa%20como%20par%C3%A1metro.    

   9.  
      9.1 En el polimorfismo estático la memoria para el polimorfismo se reserva en tiempo de compilación, se usa en sobrecarga de operadores y sobrecarga de    funciones.    
      
      9.2 En cambio en el polimorfismo dinámico se  reserva la memoria que se necesita para este en tiempo de ejecución, generalmente se da mediante el uso de,   métodos virtuales.   

      funciones: https://www.codingame.com/playgrounds/51214/manejo-dinamico-de-memoria-y-polimorfismo-practica-4/polimorfismo   

   10. Una clase declarada dentro de otra clase se denomina clase anidada, con las clases anidadas se pueden agrupar mejor los contenidos del código y organizar  mejor las relaciones entre clases haciendo el código más entendible.   

   11. Los punteros pueden utilizarse para pasar objetos como argumentos a funciones por referencia, evitando copiar objetos grandes y mejorando el rendimiento,  también se pueden usar para tratar objetos de clases derivadas como objetos de clase base.   

   12. Una función prototipo es la declaración de una función sin el cuerpo de la misma.   

      funciones: https://es.linkedin.com/learning/c-plus-plus-esencial/   prototipo-de-una-funcion-en-c-plus-plus#:~:text=Un%20prototipo%20es%20una%20declaraci%C3%B3n,con%20un%20punto%20y%20coma.   

   13.  
       13.1 Miembros públicos: pueden ser accesados por la misma clase, por clases externas y por  clases derivadas.   
       
       13.2 Miembros protegidos: pueden ser accesados por la misma clase, la clase derivada pero no pueden ser accesados por una clase externa.   
       
       13.3 Miembros privados: pueden ser accesados solo por la misma clase o funciones amigas.   
   
   14. Un memory leak sucede cuando se asigna memoria de forma dinámica con la sentencia new y luego no libera esa memoria usando el operador delete,   
   por lo que la memoria nunca se libera y se pierde la porción de memoria en la que se alojó un valor de manera dinámica.   
   
   15. 
   
      15.1 La herencia multiple es importante ya que un objeto puede necesitar heredar de más de una clase y es más práctico que se herede de varias    
      clases que crear clases nuevas o atributos nuevos solo para incluir métodos y atributos de más de una clase base.   

      15.2 La herencia multinivel es de importancia debido a que se puede tener la necesidad de que una clase herede de una clase derivada, esto    
      porque aunque una clase sea derivada puede contener métodos o atributos de interés para otra    

      15.3 La herencia jerarquica también tiene su importancia porque puede surgir la necesidad de que varias clases derivadas hereden de la clase   
      base.   

      fuente: https://www.codingame.com/playgrounds/50747/herencia-en-c-practica-3/redefinicion-de-metodos    
   
   16. La composición consiste en una manera para accesar atributos o métodos de una clase en otra clase y consiste en declarar objetos de una clase       
   dentro de otra clase, causando que se pueda acceder a los métodos y atributos de la clase de la que se crea el objeto dentro de la clase creada.      

   fuente: https://www.codingame.com/playgrounds/50747/herencia-en-c-practica-3/composicion-de-clases   
   
   17. La sobreescritura de funciones consiste en declarar métodos virtuales en la clase base que serán definidos de otra manera en clases derivadas      
   solo que utilizando la misma declaración.   

   18. Un método es el equivalente a una función dentro de una clase, básicamente es una acción que se puede realizar dentro de la clase, mientras que      
   un atributo es más parecido a una variable dentro de una clase, es un contenedor de datos dentro de la clase que puede ser de diferentes tipos.   

   19. El constructor de una clase es un método especial que siempre se ejecuta en cada instancia u objeto de las clases, este se encarga de declarar   
   todos los atributos necesarios para la clase y de ejecutar los métodos contenidos en este.   

       El destructor de una clase es un método que se encarga de liberar la memoria asignada a los atributos de la clase cuando esta termina de utilizarse.   
      
      Cabe destacar que si no se declara un constructor o destructor para una clase se usa uno por defecto.   
      
   20. La sobrecarga de operadores es una forma de definir el comportamiento de los operadores en c++ para que comparen o interactuen con objetos de   
   las clases creadas de maneras que no son las comunes, se declara una sobrecarga de operador en forma de método y para utilizar esta sobrecarga por   
   ejemplo con el operador +, luego de haberlo declarado como sobrecargado se debe invocar de la siguiente manera Objeto + Objeto, de esta manera se da   
   el comportamiento programado.   

```

# Link a la página que aloja la documentación de doxygen:

```

El link a la página web que aloja la documentación del doxygen es el siguiente: https://66161a71df043c838156da7d--aesthetic-otter-184913.netlify.app/index.html


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

























