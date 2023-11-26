CC=g++
CFLAGS=-std=c++17 -Wall -Iinclude -I/opt/homebrew/Cellar/glfw/3.3.8/include -I/opt/homebrew/include
LDFLAGS=-L/opt/homebrew/lib -lglfw -framework OpenGL
SRC=$(wildcard src/*.cpp)
OBJ=$(SRC:.cpp=.o)
EXECUTABLE=digbuild

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ) glad.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

glad.o: src/glad.c
	$(CC) $(CFLAGS) -c -o $@ $<

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f src/*.o glad.o $(EXECUTABLE)
