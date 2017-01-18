#pragma once
#include "SFML\Graphics.hpp"
#include <vector>
#include "Spider.h"
#include "Options.h"

using namespace std;
using namespace sf;
class CreateSpiders: public Options
{
public:
	CreateSpiders();
	~CreateSpiders();

	void createSpiders( vector <Spider> &spiderM, vector <Spider> &spiderF, unsigned short x, unsigned short y);
	Spider addSpider(bool isMale, Vector2f position);

private:
	Texture tSpiderM;
	Texture tSpiderF;
	int numberS;

	
};

