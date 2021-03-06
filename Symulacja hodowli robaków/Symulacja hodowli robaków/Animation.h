#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "const.h"

using namespace sf;

class Animation
{
public:
	Animation();
	~Animation();
	void update(float deltaTime, Face face);
	void dead(float deltaTime);
	void setAnimation(Texture* texture, Vector2u imageCount, float switchTime);
	IntRect uvRect;
private:
	Vector2u imageCount;
	Vector2u currentImage;
	float totalTime;
	float switchTime;
};