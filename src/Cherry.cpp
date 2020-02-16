#include "Cherry.h"

#include "Middle.h"
#include "Game.h"
#include "Util.h"
#include "GLM/gtx/rotate_vector.hpp"
#include "PlayScene.h"
#include "GLM/gtx/string_cast.hpp"
#include "Banana.h"

Cherry::Cherry()
{
	TheTextureManager::Instance()->load("../Assets/textures/Cherry.png",
		"Cherry", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Cherry");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(650.0f, 300.0f));
	setIsColliding(false);
	setType(GameObjectType::CHERRY);
	setState(State::IDLE);
}

Cherry::~Cherry()
{

}
void Cherry::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Cherry", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Cherry::update()
{

}

void Cherry::clean()
{
}
