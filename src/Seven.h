#ifndef __SEVEN__
#define __SEVEN__

#include <vector>

#include "DisplayObject.h"
#include "TextureManager.h"
#include "SoundManager.h"
#include "Tile.h"
#include "Scene.h"

class Seven : public DisplayObject
{
public:
	Seven();
	~Seven();


	void draw() override;

	void update() override;

	void clean() override;


};



#endif /* defined (__Seven__) */

