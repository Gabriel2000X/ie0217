# Respuestas a la parte teórica:


```

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


```
# Evidencia de trabajo


Se procede a generar la base de datos, se adjunta captura del código utilizado: 

![Creación de la base de datos](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura1.PNG)

Posteriormente se genera la tabla Cursos:

![Generación de la tabla cursos](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura2.PNG)

Posteriormente se procede a crear la tabla Requisitos y la tabla Descripciones:

![Generación de la tabla Requisitos](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura3.PNG)
![Generación de la tabla Descripciones](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura4.PNG)

Se añaden tanto los cursos del plan a la tabla de cursos, como los requisitos de cada curso:

![Inserción de los cursos a su tabla](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura5.PNG)
![Inserción de los cursos requisito a la tabla cursos](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura6.PNG)

Se añaden los requisitos a la tabla de requisitos y las descripciones en la respectiva tabla Descripciones:


![Inserción de requisitos a la tabla requisitos](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura7.PNG)
![Inserción de los elementos de la tabla Descripciones](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura8.PNG)

Se añaden los cursos que se desearía que se impartieran en la carrera y sus respectivos requisitos y descripciones:

![Se aladen los cursos deseados](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura9.PNG)


Se añaden las multiples consultas que utilizan SELECT para consultar datos específicos de la base de datos:

![Código de las consultas](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura10.PNG)


Se añaden las tablas resultantes de las consultas anteriormente añadidas:

Primeramente se visualiza la tabla con todos los cursos y su información realizada por la primera consulta:

![Tabla visualizada de cursos](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura1_Cons.PNG)

A continuación se visualiza la tabla de requisitos del curso de ciencia de datos:
 
 ![Tabla visualizada de requisitos](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura2_Cons.PNG)

Seguidamente se visualiza la tabla del listado de cursos no optativos:

![Tabla visulizada de cursos no optativos](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura3_Cons.PNG)

Por último se visualiza la tabla que contiene los cursos que pertenecen al semestre 10 

![Tabla visualizada de cursos de semestre 10](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura4_Cons.PNG)

A continuación se visualizan los resultados de actualizar los cursos optativos utilizando tablas para confirmar el cambio:


El código utlizado para cambiar los nombres, siglas y descripciones de las optativas es:

![Código optativas](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura_Código.PNG)


La tabla de cursos antes de actualizar la primera optativa es la siguiente:

![Tabla antes del cambio en primer optativa](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura11.PNG)

Luego de actualizar la optativa 1 se puede visualizar el cambio en la tabla actualizada:

![Tabla luego del cambio de la primera optativa](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura12.PNG)

Posteriormente se actualiza la optativa 2, por lo que se utiliza una tabla de cursos actualizada para verificar su resultado:

![Tabla luego del cambio de la segunda optativa](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura13.PNG)

Para visualizar el último cambio en los nombres de los cursos optativos se actualiza la optativa 3 y muestra la tabla actualizada:

![Tabla luego del cambio de la optativa 3](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura14.PNG)

A continuación se visualizan los resultados de los cambios en las descripciones de los cursos optativos:

Para el primer curso optativo se cambia su descripción y se actualiza la tabla:

![Descripcion de la primera opt](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura15.PNG)

Se actualiza la descripción del segundo curso optativo y se muestra su resultado en la siguiente tabla actualizada:

![Descripción de la segunda opt](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura16.PNG)

Se actualiza la descripción del tercer curso optativo y se muestra su resultado en la siguiente tabla actualizada:

![Descripción de la tercera opt](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura17.PNG)

Se procede con la sección de eliminación de los cursos y requisitos:

Se tiene la siguiente tabla de cursos antes de la eliminación del primer curso (017):

![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura18.PNG)

Se tiene la siguiente tabla de cursos después de la eliminación del primer curso:

![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura19.PNG)

Se tiene la siguiente tabla antes de la eliminación de la descripción del primer curso (017):

![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura20.PNG)

Se tiene la siguiente tabla después de la eliminación de la descripción del primer curso (017):

![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura21.PNG)


Ahora se tiene la siguiente tabla de cursos luego de la eliminación del segundo curso (003):
![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura22.PNG)

Se tiene la siguiente tabla de cursos después de la eliminación del primer curso:

![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura23.PNG)

Ahora se tiene la siguiente tabla de cursos luego de la eliminación del tercer curso (004):

![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura24.PNG)

Se tiene la siguiente tabla después de la eliminación de la descripción del primer curso (004)

![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura25.PNG)


Se procede a la sección de eliminación de requisitos de los cursos:

La siguiente tabla es la visualización de la tabla de requisitos antes de eliminar los requisitos

![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura26.PNG)

La tabla queda de la siguiente manera al eliminar el primer requisito:

![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura27.PNG)

Se obtiene la siguiente tabla al eliminar el segundo requisito:

![Elim primer curso](https://github.com/Gabriel2000X/ie0217/blob/main/Tareas/Tarea6/Captura29.PNG)




# Código utilizado en SQL Workbench para obtener estos resultados

```
-- crear una base de datos
CREATE DATABASE IF NOT EXISTS Plan_electrica_db;

-- Se crea la tabla Cursos

USE Plan_electrica_db;

CREATE TABLE IF NOT EXISTS Cursos (
    CursoID INT AUTO_INCREMENT,
    Sigla VARCHAR(20) NOT NULL,
    Nombre VARCHAR(90) NOT NULL,
    Semestre INT NOT NULL,
    Creditos INT NOT NULL,
    PRIMARY KEY (CursoID),
    UNIQUE (Nombre),
    UNIQUE (Sigla)
);

-- Se crea la tabla Requisitos

CREATE TABLE IF NOT EXISTS Requisitos (

	RequisitoID INT AUTO_INCREMENT,
    CursoID INT NOT NULL,
    RequisitoCursoID INT NOT NULL,
    PRIMARY KEY (RequisitoID),
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID),
    FOREIGN KEY (RequisitoCursoID) REFERENCES Cursos(CursoID)

);

-- Se crea la tabla descripciones

CREATE TABLE IF NOT EXISTS Descripciones (
    DescripcionID INT AUTO_INCREMENT,
    CursoID INT NOT NULL,
    Descripcion TEXT NOT NULL,
    Dificultad ENUM('Facil', 'Media', 'Dificil') NOT NULL,
    PRIMARY KEY (DescripcionID),
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID)
);


-- Se añaden los cursos del plan de estudio
INSERT INTO Cursos (CursoID, Sigla, Nombre, Semestre, Creditos) VALUES
(001, 'IE-0579', 'Administración de sistemas', 9, 4),
(002, 'IE-0613', 'Electrónica industrial', 9, 4),
(003, 'IE-0001', 'Optativa 1', 9, 3),
(004, 'IE-0002', 'Optativa 2', 9, 3),
(005, 'IE-0679', 'Ciencia de datos para la est. y pron. de eventos', 10, 3),
(006, 'IE-0541', 'Seguridad ocupacional', 10, 3),
(007, 'IE-0003', 'Optativa 3', 10, 3),
(008, 'IE-0004', 'Optativa 4', 10, 3),
(009, 'IE-TFG', 'Trabajo final de graduación', 10, 0);


-- Se añaden los cursos requisito de cada curso
INSERT INTO Cursos (CursoID, Sigla, Nombre, Semestre, Creditos) VALUES
(010, 'IE-0479', 'Ingenirería económica', 8, 3),
(011, 'IE-0413', 'Electrónica 2', 5, 3),
(012, 'IE-0315', 'Máquinas eléctricas 1', 6, 3),
(013, 'IE-0499', 'Proyecto eléctrico', 8, 3),
(014, 'IE-0405', 'Modelos probabilísticos de señales y sistemas', 6, 3),
(015, 'IE-0501', 'Responsabilidad en el ejercicio profesional de la ingeniería eléctrica', 6, 1);

-- Se añade el curso anteproyecto de TFG que se dejó por fuera anteriormente
INSERT INTO Cursos (CursoID, Sigla, Nombre, Semestre, Creditos) VALUES
(016, 'IE-0599', 'Anteproyecto de TFG', 9, 4);

-- Se añaden los requisitos de los diferentes cursos del plan
INSERT INTO Requisitos (RequisitoID, CursoID, RequisitoCursoID) VALUES
(001, 001, 010 ),
(002, 002, 011 ),
(003, 002, 012 ),
(004, 005, 014 ),
(005, 005, 001 ),
(006, 006, 015 ),
(007, 016, 013 );

-- Se añaden las descripciones de los cursos y sus respectivos ID
INSERT INTO Descripciones (DescripcionID, CursoID, Descripcion, Dificultad) VALUES
(001, 001, 'Curso basado en el aprendizaje de técnicas de administración de sistemas', 'Difícil'),
(002, 002, 'Curso basado en la sección industrial de la eléctronica.', 'Difícil'),
(003, 003, 'Curso optativo.', 'Facil'),
(004, 004, 'Curso optativo. ', 'Facil'),
(005, 005, 'Curso enfocado en la estimación y pronóstico de eventos mediante ciencia de datos.', 'Media'),
(006, 006, 'Curso basado en la salud ocupacional en el área de trabajo.', 'Fácil'),
(007, 007, 'Curso optativo.', 'Facil'),
(008, 008, 'Curso optativo.', 'Facil'),
(009, 009, 'Curso que consiste en la elaboración del trabajo final de graduación.', 'Difícil'),
(010, 010, 'Curso basado en conocimientos del área económica.', 'Media'),
(011, 011, 'Curso basado en materia de electrónica.', 'Dificil'),
(012, 012, 'Curso basado en el aprendizaje del manejo y funcionamiento de máquinas eléctricas.', 'Difícil'),
(013, 013, 'Curso que consiste en elaborar un proyecto de graduación para bachillerato.', 'Dificil'),
(014, 014, 'Curso basado en el aprendizaje de modelos probabilistícos con aplicación en señales y sistemas.', 'Fácil'),
(015, 015, 'Curso basado en ética y responsabilidad en el ambiente laboral.', 'Facil'),
(016, 016, 'Curso basado en la construcción del anteproyecto de graduación de la licenciatura.', 'Difícil');

-- Se añaden los dos cursos nuevos 

-- Primero se añaden a la tabla Cursos
INSERT INTO Cursos (CursoID, Sigla, Nombre, Semestre, Creditos) VALUES
(017, 'IE-998', 'Introducción a la ingeniería aeroespacial', 6, 3),
(018, 'IE-999', 'Modelos probabilísticos de señales y sistemas 2 ', 7, 4);

-- Posteriormente se añade el requisito de el curso IE-999, el IE-998 no requiere requisitos debido a que es introductorio

INSERT INTO Requisitos (RequisitoID, CursoID, RequisitoCursoID) VALUES
(008, 018, 014 );

INSERT INTO Descripciones (DescripcionID, CursoID, Descripcion, Dificultad) VALUES
(017, 017, 'Curso en el que se aprenden los fundamentos y la base de la ingeniería aeroespacial', 'Media'),
(018, 018, 'Curso en el que se profundiza en el análisis de los modelos probabilistícos aplicados a señales y sistemas.', 'Difícil');



-- Se añade la consulta para visualizar los cursos con sus respectivos atributos

SELECT e.Sigla, e.Nombre, e.Semestre, e.Creditos, d.Descripcion, d.Dificultad
FROM Cursos e
JOIN Descripciones d ON e.CursoID = d.CursoID;

-- Se añade la consulta para visualizar los requisitos de un curso en específico mediante su 
-- sigla
SELECT r.RequisitoID, e1.Sigla AS Curso, e2.Sigla AS Requisito
FROM Requisitos r
JOIN Cursos e1 ON r.CursoID = e1.CursoID
JOIN Cursos e2 ON r.RequisitoCursoID = e2.CursoID
WHERE e1.Sigla = 'IE-0679';

-- Se añade la consulta para los cursos que no son optativos
SELECT Sigla, Nombre, Semestre, Creditos
FROM Cursos
WHERE Nombre NOT LIKE 'Optativa%';

-- Se añade la consulta para visualizar los cursos que pertenecen al décimo semestre 


SELECT Sigla, Nombre, Semestre, Creditos
FROM Cursos
WHERE Semestre = 10;



-- Se añade el código para actualizar los valores de las optativas
-- código para actualizar los valores de la optativa 1
UPDATE Cursos
SET Nombre = 'Temas especiales 2 en control', Creditos = 4
WHERE Sigla = 'IE-0001';

-- código para actualizar los valores de la optativa 2
UPDATE Cursos
SET Nombre = 'Procesamiento dígital de señales', Creditos = 4
WHERE Sigla = 'IE-0002';

-- código para actualizar los valores de la optativa 3
UPDATE Cursos
SET Nombre = 'Automatización industrial', Creditos = 4
WHERE Sigla = 'IE-0003';

-- Se añade el código para actualizar la descripción y dificultad de tres cursos

UPDATE Descripciones
SET Descripcion = 'Curso avanzado que estudia áreas emergentes del control automático', Dificultad = 'Dificil'
WHERE CursoID = 003;

UPDATE Descripciones
SET Descripcion = 'Curso que se enfoca en técnicas de procesamiento de señales mediante métodos dígitales', Dificultad = 'Difícil'
WHERE CursoID = 004;


UPDATE Descripciones
SET Descripcion = 'Curso avanzado que se enfoca en métodos de automatización para procesos industriales', Dificultad = 'Difícil'
WHERE CursoID = 007;


-- Se añade el código para eliminar un curso inventado 

-- Primero se desactiva el modo seguro para poder eliminar valores de las tablas 
SET SQL_SAFE_UPDATES = 0;

-- Se elimina el curso inventado (introducción a la ingenirería aeroespacial)
DELETE FROM Descripciones
WHERE CursoID = 017;
DELETE FROM Cursos
WHERE CursoID = 017;

-- Se elimina el primer curso del plan optativa 1

DELETE FROM Descripciones
WHERE CursoID = 003;
DELETE FROM Cursos
WHERE CursoID = 003;

-- Se elimina el segundo curso del plan optativa 2
DELETE FROM Descripciones
WHERE CursoID = 004;
DELETE FROM Cursos
WHERE CursoID = 004;

-- Se eliminan los requisitos de dos cursos

-- Se elimina el requisito de Ciencia de datos para la est. y pron. de eventos 
DELETE FROM Requisitos
WHERE CursoID = 005 AND RequisitoCursoID = 014;

-- Se elimina el requisito de seguridad ocupacional
DELETE FROM Requisitos
WHERE CursoID = 006 AND RequisitoCursoID = 015;

SET SQL_SAFE_UPDATES = 1;

```

Si se necesitara probar el código se insta a hacerlo por partes debido a que ciertas operaciones y consultas necesitan de la existencia previa de ciertos datos.