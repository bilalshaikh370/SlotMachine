#include "Middle.h"
#include "Game.h"
#include "Util.h"
#include "GLM/gtx/rotate_vector.hpp"
#include "PlayScene.h"
#include "GLM/gtx/string_cast.hpp"
#include "Banana.h"

Banana::Banana()
{
	TheTextureManager::Instance()->load("../Assets/textures/banana.png",
		"Banana", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Banana");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(650.0f, 300.0f));
	setIsColliding(false);
	setType(GameObjectType::BANANA);
	setState(State::IDLE);
}

Banana::~Banana()
{

}
void Banana::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Banana", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Banana::update()
{

}

void Banana::clean()
{
}
