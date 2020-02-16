#pragma once
#include "Blank.h"

#include "Orange.h"
#include "Middle.h"
#include "Game.h"
#include "Util.h"
#include "GLM/gtx/rotate_vector.hpp"
#include "PlayScene.h"
#include "GLM/gtx/string_cast.hpp"


Blank::Blank()
{
	TheTextureManager::Instance()->load("../Assets/textures/blank.png",
		"Blank", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Blank");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(650.0f, 300.0f));
	setIsColliding(false);
	setType(GameObjectType::BLANK);
	setState(State::IDLE);
}

Blank::~Blank()
{

}
void Blank::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Blank", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Blank::update()
{

}

void Blank::clean()
{
}
