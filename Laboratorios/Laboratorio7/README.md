# Instrucciones para compilado y ejecución 

Las siguientes instrucciones se deben seguir para compilar y ejecutar el laboratorio 7.   
```
Para compilar el laboratorio 7 se debe introducir en la consola la siguiente línea:   
make

Cabe destacar que se debe tener dentro del directorio en el que se quiera compilar el programa una carpeta    
llamada src con los archivos fuente como la observada en la carpeta de este laboratiorio, otra carpeta    
llamada bin donde se guardarán los archivos generados y una última carpeta llamada data donde se debe    
introducir un archivo llamada input.txt, para reemplazar  alguna línea de texto por otra se utiliza en    
la consola la línea:   

 ./bin/textprocessor -f data/input.txt -o data/output.txt -search "foo" -replace "bar"   

En el caso de la línea anterior se cambia la palabra "foo" por la palabra "bar", si se quiere cambiar una palabra   
o cadena diferente por otra solo se debe reemplazar "foo" por la cadena que se quiere eliminar y "bar" por la cadena que se quiere.   


```
