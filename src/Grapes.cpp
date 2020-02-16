#pragma once
#include "Grapes.h"



#include "Middle.h"
#include "Game.h"
#include "Util.h"
#include "GLM/gtx/rotate_vector.hpp"
#include "PlayScene.h"
#include "GLM/gtx/string_cast.hpp"


Grapes::Grapes()
{
	TheTextureManager::Instance()->load("../Assets/textures/grapes.png",
		"Grapes", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Grapes");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(650.0f, 300.0f));
	setIsColliding(false);
	setType(GameObjectType::GRAPES);
	setState(State::IDLE);
}

Grapes::~Grapes()
{

}
void Grapes::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Grapes", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Grapes::update()
{

}

void Grapes::clean()
{
}
