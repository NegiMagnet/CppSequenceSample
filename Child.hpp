#pragma once

class Child {
public:
	virtual ~Child(){}
	virtual Child* Update() = 0;
	virtual void Draw() = 0;
};

