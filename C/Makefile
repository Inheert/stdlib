CC = gcc
CFLAGS = -Wall -Wextra -Werror

DEPS = includes
SOURCES = main.c $(wildcard src/*.c) $(wildcard src/libs/*.c)
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = exec.exe

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -I$(DEPS) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.c
	$(CC) $(CFLAGS) -I$(DEPS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)