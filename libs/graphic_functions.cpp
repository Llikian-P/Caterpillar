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

void circle(SDL_Renderer* renderer, const Complex& center, const float& radius, const Color& color)
{
    Complex z;

    for(int i = 0 ; i < 360 ; ++i)
    {
        z = center + makeComplexExp(radius, i);
        setColor(renderer, color);
        SDL_RenderDrawPoint(renderer, z.x, z.y);
    }
}

void circleFill(SDL_Renderer* renderer, const Complex& center, const float& radius, const Color& color)
{
    Complex z;

    for(int i = center.x - radius; i < center.x + radius ; ++i)
    {
        for(int j = center.y - radius ; j < center.y + radius ; ++j)
        {
            z = makeComplex(i - center.x,  j - center.y);
            if(module(z) <= radius)
            {
                setColor(renderer, color);
                SDL_RenderDrawPoint(renderer, i, j);
            }
        }
    }
}

void outlinedCircle(SDL_Renderer* renderer, const Complex& center, const Color& outline, const Color& filling, const float& radius)
{
    circleFill(renderer, center, radius, filling);
    circle(renderer, center, radius, outline);
}