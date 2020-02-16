#pragma once
#include "Orange.h"
#include "Middle.h"
#include "Game.h"
#include "Util.h"
#include "GLM/gtx/rotate_vector.hpp"
#include "PlayScene.h"
#include "GLM/gtx/string_cast.hpp"


Orange::Orange()
{
	TheTextureManager::Instance()->load("../Assets/textures/orange.png",
		"Orange", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Orange");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(650.0f, 300.0f));
	setIsColliding(false);
	setType(GameObjectType::ORANGE);
	setState(State::IDLE);
}

Orange::~Orange()
{

}
void Orange::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Orange", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Orange::update()
{

}

void Orange::clean()
{
}
