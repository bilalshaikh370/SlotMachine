#pragma once
#include "Bell.h"

#include "Orange.h"
#include "Middle.h"
#include "Game.h"
#include "Util.h"
#include "GLM/gtx/rotate_vector.hpp"
#include "PlayScene.h"
#include "GLM/gtx/string_cast.hpp"


Bell::Bell()
{
	TheTextureManager::Instance()->load("../Assets/textures/bell.png",
		"Bell", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Bell");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(650.0f, 300.0f));
	setIsColliding(false);
	setType(GameObjectType::BELL);
	setState(State::IDLE);
}

Bell::~Bell()
{

}
void Bell::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Bell", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Bell::update()
{

}

void Bell::clean()
{
}
