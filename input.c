#include "input.h"
#include "player.h"
#include "window.h"

input_t input = {0};

void pollKeyPresses() {
	// Check for key presses and record them
	currentKeyStates = SDL_GetKeyboardState(NULL);
	input.up 		= currentKeyStates[SDL_SCANCODE_UP];
	input.down		= currentKeyStates[SDL_SCANCODE_DOWN];
	input.left		= currentKeyStates[SDL_SCANCODE_LEFT];
	input.right		= currentKeyStates[SDL_SCANCODE_RIGHT];

	// Start to modify the gamestate
	if(input.left) {
		player_paddle.x -= 1;
	}
	if(input.right) {
		player_paddle.x += 1;
	}
}