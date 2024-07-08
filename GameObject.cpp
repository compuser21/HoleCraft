#include "GameObject.h"
#include "HolePlayer.h"

void BlackHole2D::GameObject::LoadTexture(const std::string& path)
{
    if (renderer_ == nullptr)
    {
        std::cerr << "\033[91mUnable to use renderer! Renderer is not initialized.\033[0m\n";
        throw std::runtime_error("SDLRDRNLPTR_ERR");
    }

    SDL_Surface* loaded_surface = SDL_LoadBMP(path.c_str());

    if (loaded_surface == nullptr) {
        std::cerr << "\033[91mUnable to load surface! SDL Error: " << SDL_GetError() << "\033[0m\n";
        throw std::runtime_error("SDLIMGLOD_ERR");
    }

    texture_ = SDL_CreateTextureFromSurface(renderer_, loaded_surface);

    SDL_FreeSurface(loaded_surface);

    if (texture_ == nullptr) {
        std::cerr << "\033[91mUnable to load texture! SDL Error: " << SDL_GetError() << "\033[0m\n";
        throw std::runtime_error("SDLTXTRLOD_ERR");
    }
    
}

BlackHole2D::GameObject::GameObject(
    SDL_Renderer* renderer,
    const std::string& id,
    const std::string& texture_path,
    SDL_Rect size_pos, //
    bool active,
    void* app) :
	renderer_(renderer), id_(id), size_pos_(size_pos), active_(active), texture_(nullptr), app(app)
{
    std::cout << "loading texture from: " << texture_path << std::endl;
	LoadTexture(texture_path);
}

BlackHole2D::GameObject::~GameObject()
{
	if (texture_ != nullptr)
		SDL_DestroyTexture(texture_);
}

void BlackHole2D::GameObject::Update(const std::vector<SDL_Event>&) {/*здесь должно быть пуст*/}

void BlackHole2D::GameObject::Render()
{
    if (active_ && texture_ != nullptr && renderer_ != nullptr)
        SDL_RenderCopy(renderer_, texture_, nullptr, &size_pos_);
    else {
        std::cerr << "\033[91mUnable to render object! Active: " << active_ << ", Texture: " << texture_ << ", Renderer: " << renderer_ << "\033[0m\n";
    }
}

//void BlackHole2D::GameObject::ColliderEnter(const GameObject&){}

//void BlackHole2D::GameObject::ColliderExit(const GameObject&){}

