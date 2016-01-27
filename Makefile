CFLAGS ?=
LDFLAGS ?= -lglut -lGL -lGLU
CC ?= gcc
RM ?= rm -rf
EXECUTABLE ?= main

$(EXECUTABLE): main.o
	$(CC) $(LDFLAGS) $^ -o $@

main.o: main.c
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) *.o $(EXECUTABLE) 
