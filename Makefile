CC=clang
CFLAGS= -std=c11 -Wall

target: hello

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c
