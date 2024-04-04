# Instrucciones para compilado y ejecución 

Las siguientes instrucciones se deben seguir para compilar y ejecutar el laboratorio 2.   
```
1. Para compilar el laboratorio 2 se debe introducir en la consola lo siguiente:  
   g++ -o empleados.exe ./main.cpp ./Empleado.cpp ./EmpleadoAsalariado.cpp ./EmpleadoPorHoras.cpp   
   
   Se puede cambiar la palabra "empleados" de empleados.exe si se quiere que el ejecutable a generar   
   tenga otro nombre. 
```
```
2. Para utilizar el ejecutable generado durante la compilación se debe introducir en la consola los siguiente:    
   ./empleados.exe  

   Si se utilizó otro nombre para el ejecutable debe cambiarse la palabra "empleados" por el nombre que se le dió   
   al ejecutable.      
```

# Factores importantes en la programación orientada a objetos

```

Encapsulación: La encapsulación se refiere a la capacidad de una clase para ocultar sus datos internos y proporcionar una interfaz bien definida para   
interactuar con esos datos. En nuestro ejemplo, las clases EmpleadoAsalariado y EmpleadoPorHoras encapsulan los detalles específicos de cada tipo de empleado,    como el nombre, la edad y el salario. Estos datos están protegidos y solo pueden ser accedidos y modificados mediante métodos específicos, lo que evita que se    modifiquen de manera incorrecta desde fuera de la clase.   

Herencia: La herencia es un mecanismo en el que una clase (subclase) puede heredar comportamientos y atributos de otra clase (superclase). En nuestro ejemplo,    las clases EmpleadoAsalariado y EmpleadoPorHoras son subclases de la clase Empleado. Esto significa que heredan los atributos y métodos de la clase base    Empleado, como nombre, edad, salario y mostrarDetalles(). La herencia facilita la reutilización de código y permite organizar las clases en una jerarquía, donde  las clases más específicas heredan características de las más generales.   

Polimorfismo: El polimorfismo se refiere a la capacidad de los objetos de una clase base de comportarse de manera diferente en función de su clase derivada. En  nuestro ejemplo, el método calcularPago() es un método virtual puro en la clase base Empleado, lo que significa que debe ser implementado por todas las clases   derivadas. Cada clase derivada proporciona su propia implementación de calcularPago(), lo que permite calcular el pago de manera diferente para cada tipo de  empleado. En el código principal, el polimorfismo se muestra cuando se llama al método calcularPago() para objetos de tipo EmpleadoAsalariado y EmpleadoPorHoras, y se ejecuta la implementación específica de cada clase.   

Abstracción: La abstracción se refiere a la capacidad de modelar objetos del mundo real como clases con atributos y comportamientos específicos. En nuestro   ejemplo, las clases EmpleadoAsalariado y EmpleadoPorHoras son abstracciones de diferentes tipos de empleados que existen en el mundo real. Cada clase encapsula  los detalles relevantes de un empleado, como su nombre, edad y salario, y proporciona métodos para interactuar con esos detalles. La abstracción permite a los  programadores centrarse en los aspectos importantes de un objeto y ocultar los detalles innecesarios para simplificar el diseño y la implementación del sistema.   

```