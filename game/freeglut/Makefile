CFLAGS=-Wall -g
LIBS=-lGL -lGLU -lglut

all: window

window: window.c
	gcc $(CFLAGS) window.c -o window $(LIBS)

clean:
	rm -f window
