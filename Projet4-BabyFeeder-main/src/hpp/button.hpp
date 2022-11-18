#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

using namespace std;

class Button
{
public:
    int posx;
    int posy;
    int width;
    int height;
    int red;
    int green;
    int blue;
    int alpha;

    TTF_Font *font;
    SDL_Surface *mSurface;
    SDL_Texture *mTexture;
    SDL_Color textColor = {0, 0, 0, 250};
    Button();
    ~Button();

    void setButton(int px, int py, int w, int h, int r, int g, int b, int a);
    void drawButton(SDL_Renderer* renderer);

private:
};