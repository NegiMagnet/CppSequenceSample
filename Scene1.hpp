#pragma once

#include "Child.hpp"

class Scene1 : public Child{
public:
	~Scene1(){}
	Child* Update();
	void Draw();
};
