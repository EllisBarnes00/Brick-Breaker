#include "window.h"

int main(int argc, char* args[]) {
	if(init()) {
		// load assets
		loadMedia();
		
		// loop the game
		gameLoop();
	}

	cleanup();
	return 0;
}