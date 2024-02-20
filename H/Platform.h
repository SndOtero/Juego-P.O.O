#ifndef PLATFORM_H
#define PLATFORM_H
#include "Bloque.h"

#include <SFML/Graphics/Texture.hpp>

class Platform {
public:
	Platform();
	void Draw(RenderWindow & win);
<<<<<<< HEAD
	void Update(Vector2f Velocity);
	//Bloque getBloq(int i);
	Bloque getBloq(int i, int num_bloq_y = 1);
	int Get_cant_bloq_plat(int i = 1);
	int Get_cant_bloq_plat_y();
	
=======
	void Update();
	Bloque getBloq(int i);
	int Get_Cant_Plat();
	
private:
	vector<Bloque>Plat1;
	int cant_plat;
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb
	
private:
	vector<Bloque>Plat0;
	vector<Bloque>Plat1;
	vector<Bloque>Plat2;
	int cant_bloq_plat;
	int cant_bloq_plat_y;
	
	
};

#endif

