#pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include "FallingObject.h"

namespace BlackHole2D
{

	class Enemy : public FallingObject
	{
	private:
		int step = 1;
	public:

		Enemy(SDL_Renderer* renderer,
			std::string id,
			const std::string& texture_path,
			SDL_Rect size_pos,
			bool active,
			void* app) : FallingObject(renderer, id, texture_path, size_pos, active, app) {};

		void Update(const std::vector<SDL_Event>&) override;

	};

}

#endif
