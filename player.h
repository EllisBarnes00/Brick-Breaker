#ifndef PLAYER_H
#define PLAYER_H

#include <SDL2/SDL.h>
#include <stdbool.h>

// Structure for the players paddle
// typedef struct {
// 	float x;
// 	float y;
// 	float width;
// 	float height;
// } player_paddle;

SDL_Rect player_paddle;

bool init_player();
void update_player();

#endif // PLAYER_H