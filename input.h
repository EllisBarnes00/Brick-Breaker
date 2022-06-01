#ifndef INPUT_H
#define INPUT_H
#include <SDL2/SDL.h>

// Structure that holds the input values so that they can be read
typedef struct {
	int up;
	int down;
	int left;
	int right;
} input_t;

// All the key states
const Uint8* currentKeyStates;

// Poll the input for the player
void pollKeyPresses();


#endif // INPUT_H