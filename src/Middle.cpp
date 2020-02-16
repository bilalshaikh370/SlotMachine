#include "Middle.h"
#include "Game.h"
#include "Util.h"
#include "GLM/gtx/rotate_vector.hpp"
#include "PlayScene.h"
#include "GLM/gtx/string_cast.hpp"

Middle::Middle()
{
	TheTextureManager::Instance()->load("../Assets/textures/Machine.png",
		"MiddleMachine", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("MiddleMachine");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setIsColliding(false);
	setType(GameObjectType::SHIP);
	setState(State::IDLE);
}

Middle::~Middle()
{
	
}
void Middle::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("MiddleMachine", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Middle::update()
{
	
}

void Middle::clean()
{
}
