# Se define el compilador a utilizar
CXX = g++

# Se definen las banderas a utilizar como Wall que da 
# todas las advertencias.
CXXFLAGS = -Wall -std=c++11
LDFLAGS = -lstdc++fs

# Directorio que contiene los archivos fuente
SRC_DIR = src

# Directorio donde se almacenan los archivos .exe
BIN_DIR = bin

# Se asigna la lista de archivos .cpp encontrados en src a la variable sources
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)

# Se generan los .exe en bin, provenientes de cada .cpp de src
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.exe)
EXECUTABLE = $(BIN_DIR)/textprocessor

# se define all que se crea si se utiliza make
all: $(EXECUTABLE)


$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

$(BIN_DIR)/%.exe: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Se utiliza clean para limpiar el directorio bin 
clean:
	del $(BIN_DIR)
