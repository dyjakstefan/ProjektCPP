#pragma once
#include <SFML/Graphics.hpp>
#include "Map.h"
#include "Spider.h"
#include "CreateSpiders.h"
#include "UpdateSpider.h"
#include "Food.h"

using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();

	void start();

private:
	void draw();
	void update(float);
	void setMap(string name);
	void updateMap();


	RenderWindow window;
	View view;

	int WIDTH;
	int HEIGHT;

	Texture texture[12];

	Map map;
	vector<vector<Sprite>> sprite;

	Vector2f camera;

	CreateSpiders createSpiders;
	vector <Spider> spiderM;
	vector <Spider> spiderF;

	UpdateSpider updatespider;
	Food nourishment;
};

