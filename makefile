CXX = g++
CXXFLAGS = -I../include -Wall -Wextra

SRC = calculator.cpp input.cpp operations.cpp output.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = calculator

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
