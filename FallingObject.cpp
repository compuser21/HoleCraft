#include "FallingObject.h"
#include "Application.h"
#include "GameObject.h"

void BlackHole2D::FallingObject::Update(const std::vector<SDL_Event>& events) {
	if (fall_) {
		if (size_pos_.w <= 0 || size_pos_.h <= 0) {
			active_ = false;
		}
		else {
			size_pos_.w -= 2;
			size_pos_.h -= 2;
		}
		return;
	}
	int active_blocks = 0;
	for (const auto& object : reinterpret_cast<Application*>(app)->GetObjects()) {
		if (object->GetID() == "Player") {
			if (size_pos_.x > object->GetSizePos().x && size_pos_.y > object->GetSizePos().y &&
				size_pos_.x + size_pos_.w < object->GetSizePos().x + object->GetSizePos().w &&
				size_pos_.y + size_pos_.h < object->GetSizePos().y + object->GetSizePos().h) {
				fall_ = true;
				object->GetSizePos().w += 2;
				object->GetSizePos().h += 2;
			}
		}
	}
	
}
