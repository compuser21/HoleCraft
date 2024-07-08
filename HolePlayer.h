#pragma once
#ifndef HOLEPLAYER_H
#define HOLEPLAYER_H

#include "GameObject.h"

namespace BlackHole2D
{

	enum class PlayerState
	{
		game, lose, win
	};

	class HolePlayer : public GameObject
	{
	private:
		PlayerState state_ = PlayerState::game;
	public:

		HolePlayer(SDL_Renderer* renderer,
			std::string id,
			const std::string& texture_path,
			SDL_Rect size_pos,
			bool active,
			void* app) : GameObject(renderer, id, texture_path, size_pos, active, app) {};

		void Update(const std::vector<SDL_Event>&) override;

	};

}

#endif