CC := gcc
OBJS := main.o window.o player.o input.o
SOURCE_FILES := main.c window.c player.c input.c
COMPILER_FLAGS := -Wall -Wextra -pedantic -std=c11
LINKER_FLAGS := -lSDL2
OBJ_NAME := "BrickBreaker"

# Convert all .c files to .o
%.o: %.c
	$(CC) -c $(COMPILER_FLAGS) $< -o $@

all: $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

clean:
	rm $(OBJS)
	rm $(OBJ_NAME)