#ifndef __BANANA__
#define __BANANA__

#include <vector>

#include "DisplayObject.h"
#include "TextureManager.h"
#include "SoundManager.h"
#include "Tile.h"
#include "Scene.h"

class Banana : public DisplayObject
{
public:
	Banana();
	~Banana();


	void draw() override;

	void update() override;

	void clean() override;


};



#endif /* defined (__Screen__) */
#pragma once
