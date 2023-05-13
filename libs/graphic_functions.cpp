#include "graphic_functions.h"

void setColor(SDL_Renderer* renderer, const Color& color)
{
	SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
}

SDL_Rect makeRect(const int &x, const int &y, const int &w, const int &h)
{
    SDL_Rect rect;

    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;

    return rect;
}