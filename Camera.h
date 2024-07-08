#pragma once
#ifndef CAMERA_H
#define CAMERA_H

#include <vector>
#include "Application.h"

namespace BlackHole2D
{
	class Camera
	{
		double scale = 1;
		std::vector<int> position = { 0, 0 };
	public:
		Camera(std::vector<int> position, int scale);
		~Camera();
		virtual void Update(const std::vector<SDL_Event>&);
		virtual void Render();
		

	private:

	};

}
#endif		