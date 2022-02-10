#include "sdl_easy.h"

void it_verticalDiagram(SDL_Renderer *renderer, vector<int> numbers){
    int arraySize = numbers.size();
    int x = 500;
    int y = 500;
    for(int i = 0; i < arraySize; i++){
        it_rectangle(renderer, x, y, 10, numbers[i]);
        x += 5;
    }
}
