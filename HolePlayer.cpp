#include "HolePlayer.h"
#include "FallingObject.h"
#include "Application.h"
#include "GameObject.h"


void BlackHole2D::HolePlayer::Update(const std::vector<SDL_Event>& events)
{
	if (state_ != PlayerState::game) {
		if (state_ == PlayerState::lose) {
			std::cout << "Game Over!" << std::endl;
		}
		else {
			std::cout << "You Win!)" << std::endl;
		}
		return;
	}

	for (const auto& event : events) {
		if (event.type == SDL_MOUSEMOTION) {
			int x, y;
			SDL_GetMouseState(&x, &y);
			size_pos_.x = x - size_pos_.w / 2;
			size_pos_.y = y - size_pos_.h / 2;
		}
	}

	int ObjectsForTake = 0;
	int TNTs = 0;
	int Enemies = 0;

	for (const auto& object : reinterpret_cast<Application*>(app)->GetObjects()) {
		if (object->active_ && object->GetID()[object->GetID().size() - 1] != 't' && object->GetID()[0] != 'E' && object->GetID() != "Player") {
			ObjectsForTake++;
		}
		else if (object->active_ && object->GetID()[object->GetID().size() - 1] == 't' && object->GetID() != "Player") {
			TNTs++;
		}
		else if (object->active_ && object->GetID()[0] == 'E' && object->GetID() != "Player") {
			Enemies++;
		}
	}


	if (ObjectsForTake == 0) {
		state_ = PlayerState::win;
	}
	
	if (TNTs < 3) {
		state_ = PlayerState::lose;
	}

	if (Enemies < 1) {
		state_ = PlayerState::lose;
	}
}

