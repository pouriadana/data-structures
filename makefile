# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -O2
TARGET = program
SOURCES = hello.cc slink.cc
OBJECTS = $(SOURCES:.cc=.o)

# Default target
all: $(TARGET)

# Linking the final executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Rule to compile .cc files into .o files
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJECTS) $(TARGET)

# Phony targets
.PHONY: all clean
