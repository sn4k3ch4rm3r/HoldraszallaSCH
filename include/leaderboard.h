#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <SDL.h>
#include "menu.h"

void init_leaderboard();
void render_leaderboard(SDL_Renderer *renderer);
void destroy_leaderboard();
Screen leaderboard_events(SDL_Event event);

#endif