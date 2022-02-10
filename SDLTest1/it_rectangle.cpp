#include "sdl_easy.h"

void it_rectangle(SDL_Renderer *renderer, int x, int y, int length, int width){
    int cursorMove = -1;
    if(width < 0){
        cursorMove = 1;
        width *= -1;
    }
    for(int i = 0; i < width; i++){
        it_horizontalLine(renderer, x, y, length);
        y += cursorMove;
    }
}
