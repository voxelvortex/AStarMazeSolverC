CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGET = AStarSolver
SOURCES = utils.c location.c node.c main.c
OBJECTS = $(SOURCES:.c=.o)

all: AStarSolver

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)
