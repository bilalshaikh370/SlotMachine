#ifndef __GRAPES__
#define __GRAPES__

#include <vector>

#include "DisplayObject.h"
#include "TextureManager.h"
#include "SoundManager.h"
#include "Tile.h"
#include "Scene.h"

class Grapes : public DisplayObject
{
public:
	Grapes();
	~Grapes();


	void draw() override;

	void update() override;

	void clean() override;


};



#endif /* defined (__Grapes__) */
#pragma once
