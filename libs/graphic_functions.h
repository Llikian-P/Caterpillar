#ifndef GRAPHIC_FUNCTIONS
#define GRAPHIC_FUNCTIONS

#include <SDL.h>
#include <cmath>
#include "color_functions.h"
#include "complex_functions.h"

void setColor(SDL_Renderer* renderer, const Color& color);
SDL_Rect makeRect(const int &x, const int &y, const int &w, const int &h);

#endif