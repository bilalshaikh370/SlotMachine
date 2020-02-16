#ifndef __Middle__
#define __Middle__

#include <vector>

#include "DisplayObject.h"
#include "TextureManager.h"
#include "SoundManager.h"
#include "Tile.h"
#include "Scene.h"

class Middle : public DisplayObject
{
public:
	Middle();
	~Middle();


	void draw() override;

	void update() override;

	void clean() override;


};



#endif /* defined (__Ship__) */
#pragma once
