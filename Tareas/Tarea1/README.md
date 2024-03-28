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
   lista de las ramas o branches y para borrar ramas.   
   Para obtener una lista de las ramas se usa: git branch   
   Para borrar ramas se usa: git branch -d nombreDelBranch   

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
   lenguaje compilado se debe compilar de manera manual, mientra que un lenguaje 
   interpretado no necesita esto.

   
```