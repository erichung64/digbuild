CC=g++
CFLAGS=-std=c++17 -Wall
CFLAGS=-std=c++17 -Wall -I/opt/homebrew/Cellar/glfw/3.3.8/include
LDFLAGS=-L/opt/homebrew/lib -lglfw -framework OpenGL

SRC=$(wildcard src/*.cpp)
OBJ=$(SRC:.cpp=.o)
EXECUTABLE=digbuild

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f src/*.o $(EXECUTABLE)
