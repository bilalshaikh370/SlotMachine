#ifndef __ORANGE__
#define __ORANGE__

#include <vector>

#include "DisplayObject.h"
#include "TextureManager.h"
#include "SoundManager.h"
#include "Tile.h"
#include "Scene.h"

class Orange : public DisplayObject
{
public:
	Orange();
	~Orange();


	void draw() override;

	void update() override;

	void clean() override;


};



#endif /* defined (__Oranges__) */
#pragma once
