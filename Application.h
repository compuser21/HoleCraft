#pragma once
#ifndef APPLICATION_H
#define APPLICATION_H

#include <iostream>
#include <vector>
#include <string>
#include <map>

#include <SDL.h>

#include "GameObject.h"
#include "HolePlayer.h"
#include "FallingObject.h"
#include "Enemy.h"

namespace BlackHole2D
{

	class Application
	{

	protected:

		SDL_Window* window_;
		SDL_Renderer* renderer_;
		std::vector<GameObject*> objects_;
		//std::map<GameObject&, GameObject&> collided_;

		void InitObjects();
		void Physics();

	public:

		Application(const std::string& title, SDL_Rect window_size_pos, int argc, char** args);
		~Application();

		void Run();

		const std::vector<GameObject*>& GetObjects() {
			return objects_;
		}
	};
}

#endif
