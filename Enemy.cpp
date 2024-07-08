#include "Enemy.h"
#include "FallingObject.h"

void BlackHole2D::Enemy::Update(const std::vector<SDL_Event>& events)
{
	size_pos_.x += step;
	if (size_pos_.x > 400 || size_pos_.x < 0) {
		step *= -1;
	}
	FallingObject::Update(events);
}
