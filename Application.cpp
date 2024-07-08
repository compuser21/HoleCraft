#include "Application.h"

void BlackHole2D::Application::InitObjects()
{
    objects_.push_back(new HolePlayer(renderer_, "Player", "black_hole.bmp", { 20, 20, 128, 128 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO0", "wood.bmp", {145, 350, 50, 50}, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO1", "cobblestone.bmp", { 195, 350, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO2", "cobblestone.bmp", { 245, 350, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO3", "cobblestone.bmp", { 295, 350, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO4", "cobblestone.bmp", { 345, 350, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO5", "cobblestone.bmp", { 395, 350, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO6t", "tnt.bmp", { 445, 350, 50, 50 }, true, reinterpret_cast<void*>(this)));

    objects_.push_back(new FallingObject(renderer_, "FO7t", "tnt.bmp", { 145, 300, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO8", "cobblestone.bmp", { 195, 300, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO9", "glass.bmp", { 245, 300, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO10", "cobblestone.bmp", { 295, 300, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO11", "glass.bmp", { 345, 300, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO12", "cobblestone.bmp", { 395, 300, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO13", "wood.bmp", { 445, 300, 50, 50 }, true, reinterpret_cast<void*>(this)));

    objects_.push_back(new FallingObject(renderer_, "FO15", "birch_stairs.bmp", { 95, 250, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO16", "wood.bmp", {145, 250, 50, 50}, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO17", "cobblestone.bmp", { 195, 250, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO17", "cobblestone.bmp", { 245, 250, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO19", "cobblestone.bmp", { 295, 250, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO20", "cobblestone.bmp", { 345, 250, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO21", "cobblestone.bmp", { 395, 250, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO22", "wood.bmp", { 445, 250, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO23", "birch_stairs1.bmp", { 495, 250, 50, 50 }, true, reinterpret_cast<void*>(this)));

    objects_.push_back(new FallingObject(renderer_, "FO24", "birch_stairs.bmp", { 145, 200, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO25", "birch_planks.bmp", { 195, 200, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO26", "birch_planks.bmp", { 245, 200, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO27", "birch_planks.bmp", { 295, 200, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO28t", "tnt.bmp", { 345, 200, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO29", "birch_planks.bmp", { 395, 200, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO30", "birch_stairs1.bmp", { 445, 200, 50, 50 }, true, reinterpret_cast<void*>(this)));

    objects_.push_back(new FallingObject(renderer_, "FO31", "birch_stairs.bmp", { 195, 150, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO32", "birch_planks.bmp", { 245, 150, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO33", "birch_planks.bmp", { 295, 150, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO34", "birch_planks.bmp", { 345, 150, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO35", "birch_stairs1.bmp", { 395, 150, 50, 50 }, true, reinterpret_cast<void*>(this)));

    objects_.push_back(new FallingObject(renderer_, "FO36", "birch_stairs.bmp", { 245, 100, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO37", "birch_planks.bmp", { 295, 100, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new FallingObject(renderer_, "FO38", "birch_stairs1.bmp", { 345, 100, 50, 50 }, true, reinterpret_cast<void*>(this)));
    objects_.push_back(new Enemy(renderer_, "E0", "creeper.bmp", { 100, 350, 70, 120 }, true, reinterpret_cast<void*>(this)));
}

BlackHole2D::Application::Application(const std::string& title, SDL_Rect window_size_pos, int argc, char** args)
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "\033[91mWindow could not be created! SDL Error: " << SDL_GetError() << "\033[0m\n";
        throw std::runtime_error("SDLINIT_ERR");
    }

    window_ = SDL_CreateWindow(
        title.c_str(),
        window_size_pos.x,
        window_size_pos.y,
        window_size_pos.w,
        window_size_pos.h,
        SDL_WINDOW_SHOWN);

    if (window_ == nullptr) {
        std::cout << "Window could not be created! SDL_Error: %s\n" << SDL_GetError();
        throw std::runtime_error("SDL_WINCRET_ERR");
    }

    renderer_ = SDL_CreateRenderer(window_, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (renderer_ == nullptr) {
        std::cout << "Renderer could not be created! SDL Error: %s\n" << SDL_GetError();
        throw std::runtime_error("SDL_RNDRCRET_ERR");
    }

    InitObjects();
}

BlackHole2D::Application::~Application()
{
    SDL_DestroyRenderer(renderer_);
    renderer_ = nullptr;
    SDL_DestroyWindow(window_);
    window_ = nullptr;
    SDL_Quit();
}

void BlackHole2D::Application::Run()
{
    SDL_Event event;
    std::vector<SDL_Event> events;

    while (true) {
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT)
                return;
            events.push_back(event);
        }

        
        SDL_RenderClear(renderer_);

        for (auto& object : objects_)
            if (object->active_)
                object->Update(events);

        for (auto& object : objects_)
            if (object->active_) //должны ьыть в камере
                object->Render();

        SDL_RenderPresent(renderer_);
    }
}