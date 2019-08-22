CC = g++

all: hello_world

hello_world: hello_world.cpp
	$(CC) -o hello_world.exe hello_world.cpp

clean:
	rm hello_world.exe