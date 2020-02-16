#ifndef __BELL__
#define __BELL__

#include <vector>

#include "DisplayObject.h"
#include "TextureManager.h"
#include "SoundManager.h"
#include "Tile.h"
#include "Scene.h"

class Bell : public DisplayObject
{
public:
	Bell();
	~Bell();


	void draw() override;

	void update() override;

	void clean() override;


};



#endif /* defined (__Bell__) */

