#include "sdl_easy.h"
#define WINDOW_SIZE 1000

using namespace std;

int main( int argc, char* args[] )
{
    vector<int> arr = {200, 300, 350, 360, 365, 366, 367};
    SDL_Renderer *renderer;
    SDL_Window *window;
    SDL_Init( SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(WINDOW_SIZE, WINDOW_SIZE, 0, &window, &renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    it_horizontalDiagram(renderer, arr);
    SDL_RenderPresent(renderer);
    SDL_Delay(1500);
    SDL_Quit();
    return 0;
}

//SDL_Renderer *renderer;
//    SDL_Window *window;
//    SDL_Init( SDL_INIT_EVERYTHING);
//    SDL_CreateWindowAndRenderer(WINDOW_SIZE, WINDOW_SIZE, 0, &window, &renderer);
//    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
//    SDL_RenderClear(renderer);
//    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
//    SDL_RenderDrawPoint(renderer, 500, 500);
//    SDL_RenderPresent(renderer);
//    SDL_Delay(3000);
//    SDL_Quit();
