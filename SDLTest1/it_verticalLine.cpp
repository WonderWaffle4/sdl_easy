#include "sdl_easy.h"

void it_verticalLine(SDL_Renderer *renderer, int x, int y, int length){
    int cursorMove = -1;
    if(length < 0){
        cursorMove = 1;
        length *= - 1;
    }
    for(int i = 0; i < length; i++){
        SDL_RenderDrawPoint(renderer, x, y);
        y += cursorMove;
    }
}
