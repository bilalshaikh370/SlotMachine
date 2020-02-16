#pragma once
#include "Seven.h"



#include "Orange.h"
#include "Middle.h"
#include "Game.h"
#include "Util.h"
#include "GLM/gtx/rotate_vector.hpp"
#include "PlayScene.h"
#include "GLM/gtx/string_cast.hpp"


Seven::Seven()
{
	TheTextureManager::Instance()->load("../Assets/textures/7.png",
		"Seven", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Seven");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(650.0f, 300.0f));
	setIsColliding(false);
	setType(GameObjectType::SEVEN);
	setState(State::IDLE);
}

Seven::~Seven()
{

}
void Seven::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Seven", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Seven::update()
{

}

void Seven::clean()
{
}
