#include <SDL2/SDL.h>
#include <iostream>
#include <SDL2/SDL_ttf.h>

class Window
{
public:
    const int SCREEN_WIDTH = 420;
    const int SCREEN_HEIGHT = 600;

    Window();
    ~Window();
    SDL_Renderer* getRenderer();
    bool InitSDL();

private:
    SDL_Renderer *renderer;
    SDL_Window *window;
};