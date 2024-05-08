# Makefile para compilar un programa C++ con múltiples archivos y clases
# Nombre del programa de salida (se define el target como variable)
TARGET = gestion_biblioteca.exe

# Objetivo predeterminado (ahora se usa el target definido)
# para definir esa variable como objetivo, el makefile busca 
# el target que se llame all
all: $(TARGET)

# Compilador de C++, si se necesitara utilizar otro compilador se 
# puede cambiar
CXX = g++

# Opciones de compilación Wall es para que de todas las warnings 
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente 
SOURCES = libro.cpp biblioteca.cpp main.cpp

# Lista de archivos objeto generados a partir de los archivos fuente, se deben 
# generar archivos .exe a partir de los .cpp. 
OBJECTS = $(SOURCES: .cpp=.exe)


# Regla para compilar los archivos fuente en archivos objeto 
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto 
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar los archivos generados
.PHONY: clean
clean:
	del $(TARGET) $(OBJECTS)