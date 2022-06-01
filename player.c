#include "player.h"
#include "window.h"

bool init_player() {
	player_paddle.w = 100;
	player_paddle.h = 25;
	player_paddle.x = (640 - player_paddle.w) / 2;
	player_paddle.y = (480 - player_paddle.h) / 2 + 200;

	printf("Player initiatlized.\n");
	return true;
}

void update_player() {
	SDL_SetRenderDrawColor(gRenderer, 255, 255, 255, 255);
	SDL_RenderFillRect(gRenderer, &player_paddle);
}