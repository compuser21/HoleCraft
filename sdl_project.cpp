#include "GameObject.h"
#include <SDL.h>
#include <stdio.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

class GameObject {
public:
    bool active_;
    SDL_Rect size_pos_;
    SDL_Texture* texture_;

    GameObject() : active_(true), texture_(nullptr) {
        size_pos_ = { 0, 0, 0, 0 };
    }

    virtual ~GameObject() {
        if (texture_ != nullptr) {
            SDL_DestroyTexture(texture_);
        }
    }

    virtual void update(SDL_Event& e) {
        // ничего не делает, нужен для переопределения
    }

    void render(SDL_Renderer* renderer_) {
        if (active_ && texture_ != nullptr) {
            SDL_RenderCopy(renderer_, texture_, nullptr, &size_pos_);
        }
    }
};

class HolePlayer : public GameObject {
public:
    void update(SDL_Event& e) override {
        if (e.type == SDL_MOUSEMOTION) {
            int x, y;
            SDL_GetMouseState(&x, &y);
            size_pos_.x = x - size_pos_.w / 2;
            size_pos_.y = y - size_pos_.h / 2;
        }
    }
};

class FallingObject : public GameObject {
    // Пока ничего    
};

SDL_Window* window = nullptr;
SDL_Renderer* renderer_ = nullptr;

bool init() {
    bool success = true;
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        success = false;
    }
    else {
        window = SDL_CreateWindow("SDL Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (window == nullptr) {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
            success = false;
        }
        else {
            renderer_ = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
            if (renderer_ == nullptr) {
                printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
                success = false;
            }
        }
    }
    return success;
}

SDL_Texture* loadTexture(const char* path) {
    SDL_Surface* loadedSurface = SDL_LoadBMP(path);
    if (loadedSurface == nullptr) {
        printf("Unable to load image %s! SDL Error: %s\n", path, SDL_GetError());
        return nullptr;
    }
    SDL_Texture* newTexture = SDL_CreateTextureFromSurface(renderer_, loadedSurface);
    SDL_FreeSurface(loadedSurface);
    return newTexture;
}

void close() {
    SDL_DestroyRenderer(renderer_);
    SDL_DestroyWindow(window);
    window = nullptr;
    renderer_ = nullptr;
    SDL_Quit();
}

int main(int argc, char* args[]) {
    if (!init()) {
        printf("Failed to initialize\n");
    }
    else {
        HolePlayer player;
        player.texture_ = loadTexture("black_hole.bmp");
        if (player.texture_ == nullptr) {
            printf("Failed to load texture image!\n");
        }
        else {
            player.size_pos_ = { 0, 0, 128, 128 };

            FallingObject object;
            object.texture_ = loadTexture("falling_object.bmp");
            if (object.texture_ != nullptr) {
                object.size_pos_ = { 100, 50, 30, 30 };
            }

            SDL_Event e;
            bool quit = false;

            while (!quit) {
                while (SDL_PollEvent(&e) != 0) {
                    if (e.type == SDL_QUIT) {
                        quit = true;
                    }
                    player.update(e);
                }

                SDL_RenderClear(renderer_);

                player.render(renderer_);
                object.render(renderer_);

                SDL_RenderPresent(renderer_);
            }
        }
    }

    close();
    return 0;
}
