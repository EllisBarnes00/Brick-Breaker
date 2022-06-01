#include "window.h"

int main() {
	if(init()) {
		// load assets
		loadMedia();
		
		// loop the game
		gameLoop();
	}

	cleanup();
	return 0;
}