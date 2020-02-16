#pragma once
#include "Bar.h"



#include "Orange.h"
#include "Middle.h"
#include "Game.h"
#include "Util.h"
#include "GLM/gtx/rotate_vector.hpp"
#include "PlayScene.h"
#include "GLM/gtx/string_cast.hpp"


Bar::Bar()
{
	TheTextureManager::Instance()->load("../Assets/textures/bar.png",
		"Bar", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Bar");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(650.0f, 300.0f));
	setIsColliding(false);
	setType(GameObjectType::BAR);
	setState(State::IDLE);
}

Bar::~Bar()
{

}
void Bar::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Bar", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Bar::update()
{

}

void Bar::clean()
{
}
