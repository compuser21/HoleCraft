#pragma once
#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
#include <iostream>
#include <vector>

#include <SDL.h>

namespace BlackHole2D
{

    class GameObject
    {

    protected:
        void* app;
        SDL_Rect size_pos_;
        SDL_Texture* texture_;
        SDL_Renderer* renderer_;
        std::string id_;

        void LoadTexture(const std::string& path);
    
    public:
        bool active_;
        GameObject(
            SDL_Renderer* renderer,
            const std::string& id,
            const std::string& texture_path,
            SDL_Rect size_pos,
            bool active,
            void* app
            );
        virtual ~GameObject();

        virtual void Update(const std::vector<SDL_Event>&);
        virtual void Render();

        //virtual void ColliderEnter(const GameObject&);
        //virtual void ColliderExit(const GameObject&);

        const std::string& GetID() {
            return id_;
        }

        SDL_Rect& GetSizePos() {
            return size_pos_;
        }


    };

}

#endif