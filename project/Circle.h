#pragma once
#include "Drawing.h"
class Circle : public Drawing
{
private:
	int radius;
	Vector2d origin;
public:
	void addInput(Vector2d);
	Circle(Vector2d origin =Vector2d::init() ,int radius = 0);
	~Circle();
};

