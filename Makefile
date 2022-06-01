CC := gcc
OBJS := main.c
COMPILER_FLAGS := -Wall -Wextra -pedantic -std=c11
LINKER_FLAGS := -lSDL2
OBJ_NAME := "Brick Breaker"

all: $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

clean:
	rm $(OBJ_NAME)