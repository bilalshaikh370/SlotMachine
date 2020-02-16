#ifndef __BLANK__
#define __BLANK__

#include <vector>

#include "DisplayObject.h"
#include "TextureManager.h"
#include "SoundManager.h"
#include "Tile.h"
#include "Scene.h"

class Blank : public DisplayObject
{
public:
	Blank();
	~Blank();


	void draw() override;

	void update() override;

	void clean() override;


};



#endif /* defined (__Blank__) */

