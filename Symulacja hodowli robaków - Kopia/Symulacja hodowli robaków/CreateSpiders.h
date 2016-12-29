#pragma once
#include "SFML\Graphics.hpp"
#include <vector>
#include "Spider.h"


using namespace std;
using namespace sf;
class CreateSpiders
{
public:
	CreateSpiders();
	~CreateSpiders();

	void createSpiders( vector <Spider> &spiderM, vector <Spider> &spiderF, unsigned short x, unsigned short y);
private:
	Texture tSpiderM;
	Texture tSpiderF;
};

