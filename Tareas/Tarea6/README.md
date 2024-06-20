# Respuestas a la parte teórica:


```
Primera parte teórica   

1.	Una base de datos relacional es un sistema organizado de almacenamiento de datos que permite almacenar y recuperar   
    información de manera eficiente utilizando tablas las cuales contienen filas y columnas, las filas son registros y   
    las columnas se consideran atributos.


    1.1 Estructura tabular: Los datos se almacenan en tablas con filas y columnas.     
    1.2 Relaciones entre datos: se dan utilizando primary keys y foreign keys.  
    1.3 vista(view): se puede observar la tabla de manera virtual consultando tablas específicas.
    1.4 integridad de datos y transacciones fiables: mediante ACID se pueden asegurar transacciones seguras.

2. Solo puede haber una clave primaria en una tabla, esta identifica de manera única cada fila, mientras que en la misma tabla pueden existir varias claves candidatas,    
   generalmente   se selecciona una clave candidata para convertirse en clave primaria ya que estas también identidican cada fila de manera única   
   

3. Una clave foranea es un atributo que solo puede tomar datos presentes en otra tabla como referencia, esto mantiene la integridad referencial de la base de datos debido a que solo  se puede referenciar un valor existente en la tabla de la que viene la clave foranea mediante este tipo de clave, esto quiere decir que en ningún momento se pueden referenciar    valores inexistentes mediante claves foraneas sin recibir un error de parte de la base de datos   


4. Una transacción en una base de datos es una serie de operaciones que se llevan a cabo como una unidad lógica de trabajo, por lo que deben completarse del todo una    
   vez que se inician	  

   4.1 Atomicidad: Si no se completan todas las acciones dentro de una transacción esta se deshace   
   4.2 Consistencia: La consistencia consiste en que las transacciones sean capaces de llevar las bases de datos de un estado válido a otro estado válido    
   4.3 Aislamiento: Las transacciones no se cruzan entre sí, las acciones de una transacción no serán visibles para las otras transacciones hasta que la transacción haya terminado  
   4.4 Durabilidad: Los cambios realizados por las transacciones terminadas se vuelven permanentes    
		  
5.	Las vistas son consultas almacenadas en la base de datos que permiten al usuario ver los datos como en formato de tabla   

    Beneficios:   

    5.1 Se simplifica la manera de visualizar la información ante consultas complejas.   
    5.2 Se restringe el acceso a datos específicos.   
    
    Limitaciones:

    5.3 Si la consulta es muy compleja se puede impactar el rendimiento del programa.   
    5.4 No se almacenan datos en la vista, por lo que esta depende de las tablas programadas.   

6.  Normalización: Es un proceso en el cual se mejora la integridad de una base de datos organizando los datos para reducir la redundancia.   
    Formas normales:

    Primera Forma Normal (1NF): Se eliminan valores duplicados y se confirma que se tengan valores atómicos.
    Segunda Forma Normal (2NF): Se asegura que se cumple con 1NF y se asegura que todos los atributos fuera de la clave primaria dependen de esta.
    Tercera Forma Normal (3NF): Se asegura que se cumple con 2NF y se asegura que no existen dependencias transitivas entre los atributos no clave.
    Cuarta Forma Normal (4NF): Se asegura que se cumple con 3NF y se confirma que no se tienen dependencias multivaluadas.
    Quinta Forma Normal (5NF): Se asegura que se cumple con 4NF y se descomponen las relaciones complejas entre los datos en relaciones más simples.		 

7.	Los índices son estructuras de datos que mejoran la velocidad de recuperación de datos en una base de datos. Funcionan de manera similar a los índices de los libros, 
    permiten encontrar el dato deseado rápidamente sin recorrer toda la tabla.   

    Tienen impacto negativo y positivo en el rendimiento, esto debido a que aceleran las consultas realizadas con SELECT pero pueden realentizar operaciones de inserción, actualización y eliminación porque se necesita mantener el índice actualizado

8.	Es una técnica de ataque que permite a un usuario malicioso ejecutar consultas SQL maliciosas en la base de datos de una aplicación. Sucede cuando los datos que proporciona 
    el usuario se introducen directamente desde las consultas
    
    Algunas prácticas para prevenir este tipo de ataques son:

    Usar consultas preparadas de antemano para no dejar libertad al usuario.
    Validar los datos de entrada.
    Evitar la concatenación directa de entradas de usuario en las consultas SQL.
 

9.  Los procedimientos almacenados son conjuntos de instrucciones SQL que se almacenan en la base de datos para poder ejecutarlas cuando sea necesario.
    
    Beneficios:

    Mayor eficiencia: si la base forma parte de un servidor se reduce el tráfico de red, además se reutiliza el código.
    Mayor seguridad: Se puede controlar mejor el acceso a datos y verificar estos antes de realizar las operaciones.

10.	
    10.1 Uno a Uno: Se puede implementar usando una clave primaria que se comparte o una clave foránea única, se usa para confirmar que cada fila de una tabla corresponde 
    únicamente a una fila de otra tabla, es importante tomar en consideración si los datos pueden ser integrados en una sola tabla.

    10.2 Uno a Muchos: Se implementa utilizando una clave fóranea en la tabla que corresponde a muchos valores, esta referencia a la clave primaria de la tabla que solo referencia un valor, es importante tomar en consideración el impacto sobre el rendimiento que puede causar este tipo de relación.

    10.3 Muchos a Muchos: Se utiliza una tabla de unión entre dos tablas,  esta tabla que contiene las claves foraneas que marcan la referencia de las claves primarias en las tablas que se quieren comunicar, se debe gestionar correctamente la tabla intermedia para evitar redundancias.



