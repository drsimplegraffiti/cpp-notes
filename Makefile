# Makefile for hello.cpp

# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -Wall -std=c++17

# Target executable
TARGET = hello

# Source files
SRC = hello.cpp
# Object files
OBJ = $(SRC:.cpp=.o)

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean build files
clean:
	rm -f $(OBJ) $(TARGET)

