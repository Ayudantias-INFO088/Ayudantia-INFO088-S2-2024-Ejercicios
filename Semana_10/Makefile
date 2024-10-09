# Definir el compilador
CXX = g++

# Definir las banderas de compilación
CXXFLAGS = -Wall -std=c++11

# Directorio donde se colocarán los binarios
BIN_DIR = bin

# Definir los archivos fuente
SOURCES = Ejercicio1.cpp Ejercicio2.cpp Ejercicio3.cpp Ejercicio4.cpp

# Generar los nombres de los ejecutables en el directorio bin
EXECUTABLES = $(SOURCES:.cpp=)
EXECUTABLES := $(patsubst %, $(BIN_DIR)/%, $(EXECUTABLES))

# Regla para compilar todos los archivos
all: $(EXECUTABLES)

# Regla para compilar cada archivo cpp en su correspondiente binario
$(BIN_DIR)/%: %.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

# Crear el directorio bin si no existe
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Limpiar los binarios generados
clean:
	rm -rf $(BIN_DIR)


