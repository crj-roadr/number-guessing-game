run: compilation
	./main.o

compilation: main.c
	gcc -o main.o -std=c89 main.c -lm
