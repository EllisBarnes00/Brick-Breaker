#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include <stdbool.h>

extern SDL_Window* gWindow;				// Global window variable
extern SDL_Renderer* gRenderer;			// Global renderer variable
extern SDL_Surface* gWindowSurface; 	// Global window surface variable
extern bool is_running;					// Global running variable


// Initialize the libraries, followed by creating the window and renderer
bool init();

// Load media
bool loadMedia();

// Main game loop
void gameLoop();

// Cleanup all the memory that has been used, close/destroy window and renderer
void cleanup();

#endif // WINDOW_H