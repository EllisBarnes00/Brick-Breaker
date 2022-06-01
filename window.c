#include "window.h"
#include "gamestate.h"

/* Renderering related globals */
SDL_Window* gWindow = NULL;
SDL_Renderer* gRenderer = NULL;
SDL_Surface* gWindowSurface = NULL;

int window_width = 640;
int window_height = 480;

/* Game-state related globals */
bool is_running = false;
gamestate_t gamestate;
input_t input = {0};

bool init() {
	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("SDL could not be initialized. SDL_Error: %s\n", SDL_GetError());
		return false;
	} else {
		// Create the window
		gWindow = SDL_CreateWindow("Brick Breaker", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, window_width, window_height, SDL_WINDOW_RESIZABLE);
		if(gWindow == NULL) {
			printf("Window could not be created. SDL_Error: %s\n", SDL_GetError());
			return false;
		}

		// Create the renderer
		gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
		if(gRenderer == NULL) {
			printf("Renderer could not be created. SDL_Error: %s\n", SDL_GetError());
			return false;
		}
		SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
		SDL_RenderClear(gRenderer);
		SDL_RenderPresent(gRenderer);

		gWindowSurface = SDL_GetWindowSurface(gWindow);
		is_running = true;
	}

	printf("Initialization complete.\n");
	return true;
}

bool loadMedia() {
	return true;
}

void gameLoop() {
	SDL_Event event_handler;
	while(is_running) {
		while(SDL_PollEvent(&event_handler) != 0) {
			// Check if the window is closed by the top right button
			if(event_handler.type == SDL_QUIT) {
				is_running = false;
			}
		}

		// Check for window resizing
		SDL_GetWindowSize(gWindow, &window_width, &window_height);

		// Check for key presses and record them
		const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
		input.up 		= currentKeyStates[SDL_SCANCODE_UP];
		input.down		= currentKeyStates[SDL_SCANCODE_DOWN];
		input.left		= currentKeyStates[SDL_SCANCODE_LEFT];
		input.right		= currentKeyStates[SDL_SCANCODE_RIGHT];


		// Start to modify the gamestate
		if(input.left) {
			gamestate.x -= .1;
		}
		if(input.right) {
			gamestate.x += .1;
		}

		// TODO: Figure something out for the up and down arrows
		if(input.up) {

		}
		if(input.down) {
			
		}
		
		// TODO: Draw a rectangle that moves left and right

		// Clear the screen
		SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
		SDL_RenderClear(gRenderer);

		// Update the screen
		SDL_RenderPresent(gRenderer);
	}
}

void cleanup() {
	// Destroy any assets

	// Destroy the window and renderer
	SDL_DestroyRenderer(gRenderer);
	SDL_DestroyWindow(gWindow);
	gRenderer = NULL;
	gWindow = NULL;
	printf("Window and Renderer destroyed and set to NULL.\n");
	SDL_Quit();
	is_running = false;
}