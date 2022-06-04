#ifndef PLAYER_H
#define PLAYER_H

#include <SDL2/SDL.h>
#include <stdbool.h>

extern SDL_Rect player_paddle;

bool init_player();
void update_player();

#endif // PLAYER_H