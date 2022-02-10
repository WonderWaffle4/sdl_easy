#ifndef SDL_EASY_H_INCLUDED
#define SDL_EASY_H_INCLUDED

#include <iostream>
#include <vector>
#include <SDL2/SDL.h>

using namespace std;

void it_horizontalLine(SDL_Renderer *renderer, int x, int y, int length);
void it_verticalLine(SDL_Renderer *renderer, int x, int y, int length);
void it_rectangle(SDL_Renderer *renderer, int x, int y, int length, int width);
void it_verticalDiagram(SDL_Renderer *renderer, vector<int> numbers);
void it_horizontalDiagram(SDL_Renderer *renderer, vector<int> numbers);
#endif // SDL_EASY_H_INCLUDED
