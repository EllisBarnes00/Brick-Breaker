CC := gcc
OBJS := main.c window.c player.c input.c
COMPILER_FLAGS := -Wall -Wextra -pedantic -std=c11
LINKER_FLAGS := -lSDL2
OBJ_NAME := "BrickBreaker"

all: $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

clean:
	rm $(OBJ_NAME)