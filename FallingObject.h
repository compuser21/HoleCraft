#pragma once
#ifndef FALLINGOBJECT_H
#define FALLINGOBJECT_H

#include "GameObject.h"

namespace BlackHole2D
{

	class FallingObject : public GameObject
	{
		bool fall_ = false;
	public:

		FallingObject(SDL_Renderer* renderer,
			std::string id,
			const std::string& texture_path,
			SDL_Rect size_pos,
			bool active,
			void* app) : GameObject(renderer, id, texture_path, size_pos, active, app) {
			};

		void Update(const std::vector<SDL_Event>&) override;

	};

}

#endif
