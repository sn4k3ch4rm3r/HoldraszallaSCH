#ifndef TERRAIN_H
#define TERRAIN_H

#include "camera.h"

extern int TERRAIN_SEED;

/// @brief Calculates the height of the terrain at a given position.
/// @param x The x coordinate we want the height at in world space
/// @return Height of the terrain in meters at x
double get_terrain_height(double x);

/// @brief Renders the currently visible part of the terrain.
/// @param camera The camera to render with
void render_terrain(Camera *camera);

void init_terrain(int *set_seed);
#endif