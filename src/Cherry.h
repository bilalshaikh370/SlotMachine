#ifndef __CHERRY__
#define __CHERRY__

#include <vector>

#include "DisplayObject.h"
#include "TextureManager.h"
#include "SoundManager.h"
#include "Tile.h"
#include "Scene.h"

class Cherry : public DisplayObject
{
public:
	Cherry();
	~Cherry();


	void draw() override;

	void update() override;

	void clean() override;


};



#endif /* defined (__Cherry__) */
#pragma once
