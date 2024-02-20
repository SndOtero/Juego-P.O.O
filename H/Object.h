#ifndef OBJECT_H
#define OBJECT_H
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "Object.h"
#include <string.h>
#include <SFML/Graphics/RenderWindow.hpp>
using namespace std;
using namespace sf;
class Object {
protected:
<<<<<<< HEAD
Vector2f worldspeed = {-3,0}; /// no modificar por fuera de esta clase
	
Vector2f scaleG={0,0};
Vector2f resolutionG={1280,720};
Vector2f speedG = {1,0}; //Velocidad general ///Si se cambia se rompe todo (REVISAR)
=======
	
Vector2f scaleG={0,0};
Vector2f resolutionG={1280,720};
Vector2f speedG = {1,0}; //Velocidad general
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb
Vector2f positionG = {0,0}; 
Vector2f acelG = {0,0};

//const float bloq_size = (80.f);
Texture tex;
Sprite spr;
public:
	Object();
	Object(string name);
	void Draw (RenderWindow& win);
	bool Collide(Object & O);
<<<<<<< HEAD
	bool CollideUp(Object & O);
=======
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb
	bool CollideWithWallleft(Object & O);
	bool CollideWithWallright(Object & O);
	

};

#endif

