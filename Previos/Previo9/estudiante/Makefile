# Nombre del programa de salida 
TARGET = gestion_estudiantes.exe

# Compilador de C++ (se puede definir otro compilador si se utiliza uno diferente)
CXX = g++

# Opciones de compilación (Wall me enseña todas las advertencias)
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente (se ponen todos los cpp)
SOURCES = main.cpp estudiante.cpp

# Lista de archivos objeto generados a partir de los archivos fuente  
OBJECTS = $(SOURCES: .cpp=.exe)

# Regla para compilar los archivos fuente en archivos objeto (crea la regla para todos los .exe y
# con dependencia en los .cpp usando las variables declaradas, se usa -c para la dependencia y -o
# se le pasa el exe
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto
# tiene como dependencia los archivos objeto y se genera el ejecutable final

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar los archivos generados haciendo delete de los archivos generados
clean:
	del $(TARGET) $(OBJECTS)