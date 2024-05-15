# Se realiza el makefile para la Tarea5

#Se declara el compilador que se va a utilizar
CXX = g++

# Opciones de compilación Wall es para que de todas las warnings
# y utiliza el estándar de c++11
CXXFLAGS = -Wall -std=c++11

# utilizando wildcard se encuentran todos los archivos fuente
# que son los que tienen la extensión .cpp
SOURCES = $(wildcard *.cpp)

# Se declara OBJECTS que contiene la terminación de los archivos objeto que 
# se generan, además especifica que se sacan de SOURCES.
OBJECTS = $(SOURCES:.cpp=.exe)

# Se declara el nombre del ejecutable
EXECUTABLE = tarea5.x

# se indica que tanto all como clean son targets que no corresponden a 
# archivos si no a tareas que se declararán más adelante
.PHONY: all clean

# se indica que el target all ejecuta los targets build y run
all: build run

# se indica que se hace al utilizar make build se compila el código para 
# generar el ejecutable
build: $(EXECUTABLE)


# Se define la regla que construye el ejecutable a partir de los archivos objeto
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Se define la regla para generar los archivos objeto a partir de los archivos fuente
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Se define el target run que ejecuta el contenido de ejecutable
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Se define el target clean que elimina los archivos generados
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)