#ifndef __BAR__
#define __BAR__

#include <vector>

#include "DisplayObject.h"
#include "TextureManager.h"
#include "SoundManager.h"
#include "Tile.h"
#include "Scene.h"

class Bar : public DisplayObject
{
public:
	Bar();
	~Bar();


	void draw() override;

	void update() override;

	void clean() override;


};



#endif /* defined (__Bar__) */

