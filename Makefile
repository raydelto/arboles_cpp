SRC=Arbol.cpp \
	Nodo.cpp

OBJ=Arbol.o \
    Nodo.o

all:
	g++ -c $(SRC)
	g++  $(OBJ) main.cpp -o main

clean:
	rm *.o
	rm main
