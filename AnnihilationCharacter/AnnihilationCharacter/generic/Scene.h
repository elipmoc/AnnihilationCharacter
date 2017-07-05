#pragma once

namespace generic{
	class Scene {
	public:
		virtual void   Update() = 0;
		virtual ~Scene(){};
	};
}